#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter The Rows of Array: ";
    cin >> n;
    cout << "Enter The Columns of Array: ";
    cin >> m;

    if (n != m)
    {
        cout << "The array must be square to calculate the opposite diagonal sum." << endl;
        return 1;
    }

    int arr[n][m];
    int sum = 0;

    cout << "Enter The Elements of Array: " << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The Array is: " << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i + j == n - 1)
            {
                sum += arr[i][j];
            }
        }
    }

    cout << "Sum of the opposite diagonal elements is: " << sum << endl;
    return 0;
}
