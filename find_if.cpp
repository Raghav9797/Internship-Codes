/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
 Using find_if with a lambda to find the first even number
auto it = std::find_if(numbers.begin(), numbers.end(), [](int n)
                       {
                           return n % 2 == 0; // Predicate to find even numbers
                       });

if (it != numbers.end())
{
    std::cout << "First even number found: " << *it << std::endl;
}
else
{
    std::cout << "No even numbers found" << std::endl;
}
bool isEven(int n)
{
    return (n % 2 == 0);
}

int main()
{
    std::vector<int> numbers = {1, 3, 4, 8, 10, 13};
    if (isEven(numbers))
    {
        std::cout << numbers << " is first Even Number.\n";
    }
    else
    {
        std::cout << "No Even Number Found! ";
    }
    return 0;
}*/

#include <iostream>
#include <vector>
using namespace std;

int isEven(int n)
{
    return (n % 2 == 0);
}

int main()
{
    vector<int> numbers = {1, 3, 5, 7, 11, 13};
    for (int num : numbers)
    {
        if (isEven(num))
        {
            cout << "First Even Number is: " << num << endl;
            return 0;
        }
    }

    cout << "No Even Number Found!" << endl;
    return 0;
}
