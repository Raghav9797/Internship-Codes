#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {10, 9, 8, 7, 1, 5};

    // using sort from stl to sort the array

    sort(arr.begin(), arr.end(), greater<int>());

    cout << "Sorted Array : ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}