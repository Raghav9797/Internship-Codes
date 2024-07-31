#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> numbers = {1, 2, 3, 4};
    // to print elements
    cout << "List Elements: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }
    cout << endl;
    // to push elements in the list
    numbers.push_front(0);
    numbers.push_back(5);
    cout << "List Elements: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }
    cout << endl;
    // to pop elements in th elist
    numbers.pop_front();
    numbers.pop_back();
    cout << "List Elements: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }
    cout << endl;
    // to access elements in the list
    cout << "Front element: " << numbers.front() << endl;
    cout << "Back element: " << numbers.back() << endl;

    return 0;
}