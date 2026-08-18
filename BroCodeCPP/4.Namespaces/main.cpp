#include <iostream>

using std::cout;
using std::string;
using std::endl;

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
	// Namespace = provides a solution for preventing name conflicts
	//             in large projects. Each entity needs a unique name.
	//             A namespace allows for identically named entities
	//             as long as the namespaces are different
    using namespace second;

    //int x = 0;

    cout << x << endl;

    string name = "Bro";

    cout << "Hello " << name;

    return 0;
}
