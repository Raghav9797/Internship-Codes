#include <iostream>
#include <list>
using namespace std;
int main()
{
    // Create a List
    list<int> numbers = {1, 2, 3};
    // display the original List
    cout << "Initial List: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }
    list<int>::iterator itr = numbers.begin();
    ++itr;
    ++itr;
    // remove all the element with value 1
    numbers.remove(1);

    // display the modified list
    cout << endl
         << "Final List: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }
    return 0;
}
