/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 0, 1, 0, 0, 1, 1, 1};
    int count = 0;

    for (int i = 0; i <= a.size(); i++)
    {
        if (a[i] == 1 && a[i + 1] == 1)
            count++;
    }

    cout << "Maximum Consecutive 1s: " << count << endl;
    return 0;
}

#include <iostream>

using namespace std;

int count_of_consecutive_one(int arr[], int size)
{

    int count = 0;

    for (int i = 0; #include<iostream>

         using namespace std;

         int count_of_consecutive_one(int arr[], int size) {
             int count = 0;
#include <iostream>



using namespace std;

             int count_of_consecutive_one(int arr[], int size)
             {

                 int count = 0;

                 for (int i = 0; i < size - 1; i++)
                 {

                     if (arr[i] == 1 && arr[i] == arr[i + 1])
                     {

                         count++;
                     }
                 }

                 return count;
             }

             int main()
             {

                 int size;

                 cout << "Enter the size of the array: ";

                 cin >> size;

                 int arr[size];

                 cout << "Enter the elements of the array (0 or 1): ";

                 for (int i = 0; i < size; i++)
                 {

                     cin >> arr[i];
                 }

                 int found = count_of_consecutive_one(arr, size);

                 cout << "Number of consecutive ones: " << found << endl;

                 return 0;
             }

             for (int i = 0; i < size - 1; i++)
             {

                 if (arr[i] == 1 && arr[i] == arr[i + 1])
                 {

                     count++;
                 }
             }

             return count;
         }

         int main() {
             int size;

             cout << "Enter the size of the array: ";

             cin >> size;

             int arr[size];

             cout << "Enter the elements of the array (0 or 1): ";

             for (int i = 0; i < size; i++)
             {

                 cin >> arr[i];
             }

             int found = count_of_consecutive_one(arr, size);

             cout << "Number of consecutive ones: " << found << endl;

             return 0;
         }

         i < size - 1;
         i++)
    {

        if (arr[i] == 1 && arr[i] == arr[i + 1])
        {

            count++;
        }
    }

    return count;
}

int main()
{

    int size;

    cout << "Enter the size of the array: ";

    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array (0 or 1): ";

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    int found = count_of_consecutive_one(arr, size);

    cout << "Number of consecutive ones: " << found << endl;

    return 0;
}

#include <iostream>

using namespace std;

int count_of_consecutive_one(int arr[], int size)
{

    int count = 0;

    for (int i = 0; i < size - 1; i++)
    {

        if (arr[i] == 1 && arr[i] == arr[i + 1])
        {

            count++;
        }
    }

    return count;
}

int main()
{

    int size;

    cout << "Enter the size of the array: ";

    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array (0 or 1): ";

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    int found = count_of_consecutive_one(arr, size);

    cout << "Number of consecutive ones: " << found << endl;

    return 0;
}

/*#include <iostream>

using namespace std;

int count_of_consecutive_one(int arr[], int size)
{

    int count = 0;

    for (int i = 0; i < size - 1; i++)
    {

        if (arr[i] == 1 && arr[i] == arr[i + 1])
        {

            count++;
        }
    }

    return count;
}

int main()
{

    int size;

    cout << "Enter the size of the array: ";

    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array (0 or 1): ";

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    int found = count_of_consecutive_one(arr, size);

    cout << "Number of consecutive ones: " << found << endl;

    return 0;
}*/