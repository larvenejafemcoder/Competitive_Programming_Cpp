#include <iostream>  // For input/output operations (cin, cout)
#include <vector>    // For dynamic arrays (std::vector)
#include <unordered_set> // For efficient unique element handling (std::unordered_set)
#include <unordered_map> // For efficient key-value pairs/frequency counts (std::unordered_map)
#include <algorithm> // For functions like std::find, std::max_element, std::sort, std::swap
#include <climits>   // For INT_MIN
#include <string>    // For std::string
#include <cmath>     // For std::sqrt, std::abs
#include <numeric>   // For std::accumulate (though not directly used in the new solution, useful for sums/products)


// --- Helper Function for Array Input ---
// This function centralizes the logic for getting array length and elements from the user.
// It returns a std::vector<int> containing the user's input.
std::vector<int> getArrayFromUser(const std::string& array_prompt_message = "Input the array elements:")
{
    int n;
    std::cout << "Input the length of array: ";
    std::cin >> n;

    // Basic validation for non-negative length
    if (n < 0) {
        std::cout << "Array length cannot be negative. Setting to 0." << '\n';
        n = 0;
    }

    std::vector<int> arr(n); // Initialize vector with the specified size
    if (n > 0) { // Only prompt for elements if length is positive
        std::cout << array_prompt_message << '\n';
        for (int i = 0; i < n; ++i)
        {
            std::cin >> arr[i];
        }
    }
    return arr;
}

// Helper function to print an array (used by multiple Baitap classes)
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << '\n';
}

// --- Refined Baitap1 ---
class Baitap1
{
public:
    // Added 4 and 16 to the example array for testing perfect squares
    std::vector<int> a = {1, 2, 3, -4, -5, 6, 7, -8, 9, 15, 4, 16};

    void printNegativeNumbers()
    {
        std::cout << "Output of question 1a (Negative numbers and their positions): ";
        bool found_negative = false;
        for (size_t i = 0; i < a.size(); ++i) // Use size_t for loop counter with .size()
        {
            if (a[i] < 0)
            {
                std::cout << a[i] << " (pos " << (i + 1) << ") "; // Print position
                found_negative = true;
            }
        }
        if (!found_negative) {
            std::cout << "No negative numbers found.";
        }
        std::cout << '\n';
    }

    void printOddNumbers()
    {
        int odd_count = 0;
        long long odd_sum = 0; // Use long long for sum to prevent overflow
        std::cout << "Output of question 1b (Odd numbers): ";
        for (int num : a)
        {
            if (num % 2 != 0)
            {
                std::cout << num << " ";
                odd_count++;
                odd_sum += num;
            }
        }
        std::cout << '\n';
        std::cout << "Count of odd numbers: " << odd_count << '\n';
        std::cout << "Sum of odd numbers: " << odd_sum << '\n';
    }

    void calculateSumOfMultiplesOfThree()
    {
        int multiple_count = 0;
        long long sum_multiples = 0; // Use long long for sum
        std::cout << "Output of question 1c (Multiples of 3 and their average): ";
        std::cout << "Multiples of 3: ";
        for (int num : a)
        {
            if (num % 3 == 0)
            {
                std::cout << num << " ";
                sum_multiples += num;
                multiple_count++;
            }
        }
        std::cout << '\n';
        if (multiple_count > 0) {
            double average = static_cast<double>(sum_multiples) / multiple_count;
            std::cout << "Average of multiples of 3: " << average << '\n';
        } else {
            std::cout << "No multiples of 3 found in the array." << '\n';
        }
    }

    void findNumberPosition()
    {
        std::vector<int> arr = {1, 5, 6, 12, 5}; // Pre-defined array for this specific sub-question
        int k;
        std::cout << "Enter an integer K to find its position in the existing array: ";
        std::cin >> k;

        bool found = false;
        std::cout << "Output of question 1d (Positions of K): ";
        for (size_t i = 0; i < arr.size(); ++i)
        {
            if (arr[i] == k)
            {
                std::cout << (i + 1) << " "; // Print 1-based index
                found = true;
            }
        }

        if (!found)
        {
            std::cout << "The number " << k << " is not found in the array.";
        }
        std::cout << '\n';
    }

    // New method for 1e: Calculate product of perfect squares
    void calculateProductOfPerfectSquares()
    {
        long long product = 1; // Use long long to prevent overflow
        bool found_perfect_square = false;

        std::cout << "Output of question 1e (Product of perfect squares): ";
        std::cout << "Perfect squares found: "; // Print the perfect squares themselves
        for (int num : a)
        {
            if (num < 0) { // Perfect squares are non-negative
                continue;
            }
            if (num == 0) { // If 0 is encountered, product becomes 0, and we can stop
                product = 0;
                found_perfect_square = true;
                std::cout << num << " "; // Print 0
                break; // Product will be 0 regardless of other numbers
            }

            double sqrt_num = std::sqrt(num);
            // Check if sqrt_num is an integer by comparing it to its integer conversion
            // A small tolerance (epsilon) can be used for floats, but for perfect integer squares,
            // this direct comparison (after casting or checking fmod) is generally safe.
            if (sqrt_num == static_cast<int>(sqrt_num))
            {
                product *= num;
                found_perfect_square = true;
                std::cout << num << " ";
            }
        }

        std::cout << '\n'; // Newline after listing squares

        if (found_perfect_square) {
            std::cout << "Product of perfect squares: " << product << '\n';
        } else {
            std::cout << "No perfect squares found in the array." << '\n';
        }
    }
};

// --- Refined Baitap2 ---
class Baitap2
{
public:
    std::vector<int> arr2 = {1, 2, 3, -4, -5, 6, 7, -8, 9, 15}; // Pre-defined array

    void printNumbersBySign(bool isPositive)
    {
        std::cout << "Output of question 2 (" << (isPositive ? "Positive" : "Negative") << " numbers): ";
        for (int num : arr2)
        {
            if (isPositive)
            {
                if (num > 0)
                {
                    std::cout << num << " ";
                }
            }
            else
            {
                if (num < 0)
                {
                    std::cout << num << " ";
                }
            }
        }
        std::cout << '\n';
    }
};

// --- Refined Baitap3 ---
class Baitap3
{
public:
    void processArrayAndFindMax()
    {
        std::vector<int> arr = getArrayFromUser("Input the array elements:");

        std::cout << "Output of the array: ";
        printArray(arr);

        if (arr.empty())
        {
            std::cout << "Array is empty, no maximum element." << '\n';
            return;
        }

        int max_val = *std::max_element(arr.begin(), arr.end());
        std::cout << "Maximum element in the array: " << max_val << '\n';
    }
};

// --- Refined Baitap4 ---
class Baitap4
{
public:
    void checkProgression()
    {
        std::vector<int> arr = getArrayFromUser("Input the array to see whether it's an arithmetic or geometric progression:");

        std::cout << "Entered array: ";
        printArray(arr);

        if (arr.size() < 2)
        {
            std::cout << "The array has fewer than 2 elements, it cannot be an arithmetic or geometric progression." << '\n';
            return;
        }

        bool isAProg = true;
        bool isGProg = true;

        // Check for Arithmetic Progression
        int a_com_diff = arr[1] - arr[0];
        for (size_t i = 0; i < arr.size() - 1; ++i)
        {
            if (arr[i + 1] - arr[i] != a_com_diff)
            {
                isAProg = false;
                break;
            }
        }

        // Check for Geometric Progression
        if (arr[0] == 0) {
            for (size_t i = 1; i < arr.size(); ++i) {
                if (arr[i] != 0) {
                    isGProg = false;
                    break;
                }
            }
        } else {
            double g_com_ratio = static_cast<double>(arr[1]) / arr[0];
            for (size_t i = 0; i < arr.size() - 1; ++i)
            {
                if (arr[i] == 0) {
                    if (arr[i+1] != 0) {
                        isGProg = false;
                        break;
                    }
                } else {
                    if (std::abs(static_cast<double>(arr[i + 1]) / arr[i] - g_com_ratio) > 1e-9)
                    {
                        isGProg = false;
                        break;
                    }
                }
            }
        }

        if (isAProg && isGProg)
        {
            std::cout << "The array is both an arithmetic and geometric progression." << '\n';
        }
        else if (isAProg)
        {
            std::cout << "The array is an arithmetic progression." << '\n';
        }
        else if (isGProg)
        {
            std::cout << "The array is a geometric progression." << '\n';
        }
        else
        {
            std::cout << "The array is neither an arithmetic progression nor a geometric progression." << '\n';
        }
    }
};

// --- Refined Baitap5 ---
class Baitap5
{
public:
    void sortArrayDescendingInsertionSort()
    {
        std::vector<int> arr = getArrayFromUser("Input the array elements:");

        std::cout << "Original array: ";
        printArray(arr);

        int n = arr.size();
        if (n <= 1) {
            std::cout << "Sorted array (descending): ";
            printArray(arr);
            return;
        }

        for (int i = 1; i < n; ++i)
        {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] < key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }

        std::cout << "Sorted array (descending): ";
        printArray(arr);
    }
};

// --- Refined Baitap6 ---
class Baitap6
{
public:
    void checkSymmetricArray()
    {
        std::vector<int> arr = getArrayFromUser("Input the array elements:");

        std::cout << "Original array: ";
        printArray(arr);

        int n = arr.size();
        if (n <= 1)
        {
            std::cout << "The array is symmetric (0 or 1 element)." << '\n';
            return;
        }

        bool isSymmetric = true;

        for (int i = 0; i < n / 2; ++i)
        {
            if (arr[i] != arr[n - i - 1])
            {
                isSymmetric = false;
                break;
            }
        }

        if (isSymmetric)
        {
            std::cout << "The array is symmetric." << '\n';
        }
        else
        {
            std::cout << "The array is not symmetric." << '\n';
        }
    }
};

// --- Refined Baitap7 ---
class Baitap7
{
public:
    // Helper function to check if a number has exactly 3 digits and they are non-decreasing
    // (e.g., 122, 457, 889). If strictly increasing (123, 456) is needed, change '<' to '<' for all.
    bool hasThreeNonDecreasingDigits(int n) // Renamed for clarity based on example 122, 889
    {
        if (n < 100 || n > 999) // Numbers must be 3 digits long (100-999)
        {
            return false;
        }

        int lastDigit = n % 10;
        n /= 10;
        int middleDigit = n % 10;
        n /= 10;
        int firstDigit = n % 10;

        // Condition for non-decreasing digits (first <= middle <= last)
        return (firstDigit <= middleDigit && middleDigit <= lastDigit);
    }

    int countNumbersWithIncreasingDigits(const std::vector<int>& arr)
    {
        int count = 0;
        for (int num : arr)
        {
            // Using the clarified non-decreasing check
            if (hasThreeNonDecreasingDigits(num))
            {
                count++;
            }
        }
        return count;
    }

    void runQuestion7()
    {
        std::vector<int> arr = getArrayFromUser("Input the array of positive integers:");

        std::cout << "Original array: ";
        printArray(arr);

        int result = countNumbersWithIncreasingDigits(arr);
        std::cout << "The amount of numbers that meets the condition (exactly 3 non-decreasing digits): " << result << '\n';
    }
};

// --- Refined Baitap8 ---
class Baitap8
{
public:
    std::vector<int> createUniqueSet(const std::vector<int>& arr)
    {
        std::unordered_set<int> unique_elements_set(arr.begin(), arr.end());
        return std::vector<int>(unique_elements_set.begin(), unique_elements_set.end());
    }

    void countUniqueElements()
    {
        std::vector<int> arr = getArrayFromUser("Input the array elements:");

        std::cout << "Original array: ";
        printArray(arr);

        std::vector<int> unique_elements = createUniqueSet(arr);

        std::cout << "Count of unique numbers in array: " << unique_elements.size() << '\n';
    }
};

// --- Refined Baitap9 ---
class Baitap9
{
public:
    void findMostFrequentElement()
    {
        std::vector<int> arr = getArrayFromUser("Input the array elements:");

        std::cout << "Original array: ";
        printArray(arr);

        std::unordered_map<int, int> counts;
        for (int num : arr)
        {
            counts[num]++;
        }

        if (counts.empty())
        {
            std::cout << "Array is empty, no frequent elements." << '\n';
            return;
        }

        auto max_it = std::max_element(counts.begin(), counts.end(),
                                       [](const auto& a, const auto& b) {
                                           return a.second < b.second;
                                       });

        int maxCount = max_it->second;
        int mostFrequentNumber = max_it->first;

        std::cout << "Most frequent number: " << mostFrequentNumber
                  << ", appeared: " << maxCount << " times" << '\n';
    }
};

// --- Refined Baitap10 ---
class Baitap10
{
public:
    void findLargestNegativeNumber()
    {
        std::vector<int> arr = getArrayFromUser("Input the array elements:");

        std::cout << "Original array: ";
        printArray(arr);

        int largest_negative = INT_MIN;
        int largest_negative_pos = -1; // Store 1-based position
        bool negative_found = false;

        for (size_t i = 0; i < arr.size(); ++i) // Iterate with index to get position
        {
            if (arr[i] < 0)
            {
                negative_found = true;
                if (arr[i] > largest_negative)
                {
                    largest_negative = arr[i];
                    largest_negative_pos = i + 1; // Store 1-based position
                }
            }
        }

        if (negative_found)
        {
            std::cout << "Largest negative number: " << largest_negative
                      << " at position: " << largest_negative_pos << '\n';
        }
        else
        {
            std::cout << "No negative numbers found in the array." << '\n';
        }
    }
};

// --- Refined Baitap11 ---
class Baitap11
{
public:
    void findLongestPositiveSequence()
    {
        std::vector<int> arr = getArrayFromUser("Input the array elements:");

        std::cout << "Original array: ";
        printArray(arr);

        int current_positive_count = 0;
        int max_positive_sequence = 0;

        for (int num : arr)
        {
            if (num > 0)
            {
                current_positive_count++;
            }
            else
            {
                current_positive_count = 0;
            }
            if (current_positive_count > max_positive_sequence)
            {
                max_positive_sequence = current_positive_count;
            }
        }
        std::cout << "Longest sequence of positive numbers: " << max_positive_sequence << '\n';
    }
};

// --- Refined Baitap12 ---
class Baitap12
{
public:
    void findLongestIncreasingSequence()
    {
        std::vector<int> arr = getArrayFromUser("Input the array elements:");

        std::cout << "Original array: ";
        printArray(arr);

        int n = arr.size();
        if (n == 0)
        {
            std::cout << "Longest increasing sequence: 0" << '\n';
            return;
        }
        if (n == 1)
        {
            std::cout << "Longest increasing sequence: 1" << '\n';
            return;
        }

        int current_length = 1;
        int max_length = 1;

        for (int i = 0; i < n - 1; ++i)
        {
            if (arr[i] < arr[i + 1])
            {
                current_length++;
            }
            else
            {
                current_length = 1;
            }
            if (current_length > max_length)
            {
                max_length = current_length;
            }
        }
        std::cout << "Longest increasing sequence: " << max_length << '\n';
    }
};

// --- Refined Baitap13 ---
class Baitap13
{
public:
    void findLongestAlternatingSignSequence()
    {
        std::vector<int> arr = getArrayFromUser("Input the array elements:");

        std::cout << "Original array: ";
        printArray(arr);

        int n = arr.size();
        if (n == 0)
        {
            std::cout << "Longest alternating sign sequence: 0" << '\n';
            return;
        }
        if (n == 1)
        {
            std::cout << "Longest alternating sign sequence: 1" << '\n';
            return;
        }

        int current_length = 1;
        int max_length = 1;

        for (int i = 0; i < n - 1; ++i)
        {
            if ((long long)arr[i] * arr[i + 1] < 0)
            {
                current_length++;
            }
            else
            {
                current_length = 1;
            }
            if (current_length > max_length)
            {
                max_length = current_length;
            }
        }
        std::cout << "Longest alternating sign sequence: " << max_length << '\n';
    }
};

// --- Main Execution Logic ---
void DisplayResults()
{
    Baitap1 obj1;
    Baitap2 obj2;
    Baitap3 obj3;
    Baitap4 obj4;
    Baitap5 obj5;
    Baitap6 obj6;
    Baitap7 obj7;
    Baitap8 obj8;
    Baitap9 obj9;
    Baitap10 obj10;
    Baitap11 obj11;
    Baitap12 obj12;
    Baitap13 obj13;

    int Bai;
    std::string Cau;

    std::cout << "Enter the question number you want to see the result for (1-13): ";
    std::cin >> Bai;

    switch (Bai)
    {
    case 1:
        std::cout << "Enter the sub-question you want to see the result for (a, b, c, d, e): "; // Added 'e'
        std::cin >> Cau;
        if (Cau == "a")
        {
            obj1.printNegativeNumbers();
        }
        else if (Cau == "b")
        {
            obj1.printOddNumbers();
        }
        else if (Cau == "c")
        {
            obj1.calculateSumOfMultiplesOfThree();
        }
        else if (Cau == "d")
        {
            obj1.findNumberPosition();
        }
        else if (Cau == "e") // New case for 1e
        {
            obj1.calculateProductOfPerfectSquares();
        }
        else
        {
            std::cout << "Invalid sub-question choice.\n";
        }
        break;
    case 2:
        std::cout << "Enter the sub-question you want to see the result for (positive, negative): ";
        std::cin >> Cau;
        if (Cau == "positive")
        {
            obj2.printNumbersBySign(true);
        }
        else if (Cau == "negative")
        {
            obj2.printNumbersBySign(false);
        }
        else
        {
            std::cout << "Invalid sub-question choice.\n";
        }
        break;
    case 3:
        obj3.processArrayAndFindMax();
        break;
    case 4:
        obj4.checkProgression();
        break;
    case 5:
        obj5.sortArrayDescendingInsertionSort();
        break;
    case 6:
        obj6.checkSymmetricArray();
        break;
    case 7:
        obj7.runQuestion7();
        break;
    case 8:
        obj8.countUniqueElements();
        break;
    case 9:
        obj9.findMostFrequentElement();
        break;
    case 10:
        obj10.findLargestNegativeNumber();
        break;
    case 11:
        obj11.findLongestPositiveSequence();
        break;
    case 12:
        obj12.findLongestIncreasingSequence();
        break;
    case 13:
        obj13.findLongestAlternatingSignSequence();
        break;
    default:
        std::cout << "Question number does not exist.\n";
        break;
    }
}

int main()
{
    DisplayResults();
    return 0;
}
