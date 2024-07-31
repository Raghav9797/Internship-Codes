/*#include <iostream>
#include <array>

using namespace std;

int main()
{
    vector<int> a = {3, 4, 5, 6, 4, 9};
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        {
            int temp = a[i];
            a[i] = a[n];
            a[i] = temp;
        }
    }
    for (int nums : a)
    {
        cout << a << " ";
    }
    return 0;
}

#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

void rotate_and_sort(vector<int> &arr, int rotations)
{

    int last = arr.back();

    int n = arr.size();

    for (int j = n - 1; j > 0; --j)
    {

        arr[j] = arr[j - 1];
    }

    arr[0] = last;

    // Sort the first 'rotations' elements in reverse order

    sort(arr.begin(), arr.begin() + rotations, greater<int>());
}

void display(const vector<int> &arr)
{

    for (int i : arr)
    {

        cout << i << " ";
    }

    cout << endl;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    cout << "Array: ";

    display(arr);

    for (int i = 0; i < 6; ++i)
    {

        rotate_and_sort(arr, i + 1);

        cout << "After rotation " << i + 1 << ": ";

        display(arr);
    }

    return 0;
}*/

#include <bits/stdc++.h>
