#include <iostream>
#include <list>
using namespace std;

void display(const list<int> &numbers)
{
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;
}

int main()
{
    list<int> numbers;

    // Check if the list is not empty, then clear it
    if (!numbers.empty())
    {
        numbers.clear();
        cout << "The list was not empty and has been cleared." << endl;
    }

    int num_elements, value;
    cout << "Enter Size of List: ";
    cin >> num_elements;

    for (int i = 0; i < num_elements; i++)
    {
        cout << "Enter the element: ";
        cin >> value;
        numbers.push_front(value);
    }

    int c;
    char s;
    do
    {
        cout << "1) Reverse" << endl;
        cout << "2) Sort" << endl;
        cout << "3) Unique" << endl;
        cout << "4) Empty" << endl;
        cout << "5) Size" << endl;
        cout << "6) Clear" << endl;
        cout << "7) Merge" << endl;
        cout << "8) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;

        switch (c)
        {
        case 1:
        {
            numbers.reverse();
            cout << "List after reversing: ";
            display(numbers);
            break;
        }
        case 2:
        {
            numbers.sort();
            cout << "List after sorting: ";
            display(numbers);
            break;
        }
        case 3:
        {
            numbers.unique();
            cout << "List after making unique: ";
            display(numbers);
            break;
        }
        case 4:
        {
            numbers.empty();
            cout
                << "List is Empty!!";
        }
        case 5:
        {
            cout << "Size of the list: " << numbers.size() << endl;
            break;
        }
        case 6:
        {
            numbers.clear();
            cout << "List cleared." << endl;
            break;
        }
        case 7:
        {
            list<int> numbers1 = {2, 3, 4, 5};
            numbers.merge(numbers1);
            display(numbers);
            break;
        }

        case 8:
        {
            exit(0);
            break;
        }
        default:
        {
            cout << "Invalid choice!" << endl;
            break;
        }
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> s;
    } while (s == 'y' || s == 'Y');

    return 0;
}
