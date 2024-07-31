/*#include <iostream>
#include <list>
using namespace std;

void addElement(list<int> &numbers, int element, int position)
{
    if (numbers.empty())
    {
        numbers.push_front(element);
    }
    else
    {
        auto it = numbers.begin();
        advance(it, position);
        numbers.insert(it, element);
    }
}

int main()
{
    list<int> numbers = {1, 2, 3, 4, 5};
    addElement(numbers, 10, 2);

    // Print the list
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}*/

/*#include <iostream>
#include <list>
using namespace std;
int main()
{
    // create a list
    list<int> numbers = {1, 2, 3, 4, 5};
    // display the original list
    cout << "Initial List: ";
    for (int number : numbers)
    {
        cout << numbers << ", ";
    }
    // create an iterator to point to the first element of the list
    list<int>::iterator itr = numbers.begin();
    // increment the iterator to point to the 3rd position
    ++itr;
    ++itr;
    numbers.insert(itr, 0);
    cout << endl
         << "Final List: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> numbers = {1, 2, 3};
    cout << "Initial List: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }
    list<int>::iterator itr = numbers.begin();
    ++itr;
    ++itr;
    numbers.insert(itr, 0);
    cout << endl
         << "Final List: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }
    return 0;
}