int a;
scanf("%d", &a);  // Number of test cases

while(a--)  // Loop for each test case
{
    int n;
    scanf("%d", &n);  // Number to factorize

    for(int i = 2; i <= n; i++)  // Check all potential divisors from 2 to n
    {
        // While i divides n, divide n by i and print i
        while(n % i == 0)
        {
            n /= i;
            printf("%d ", i);
        }
    }
    printf("\n");  // New line after all factors for one test case
}
