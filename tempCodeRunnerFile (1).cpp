#include<iostream>
#include<vector>
#include<algorithm>
#include<array>

using namespace std;

void b_sort(int arr[])
{
    for (int i = 0; i <=arr.size(); i++)
    {
        for (int j = 0; j <=arr.size(); i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void s_sort(int arr[])
{
    int i, j, min_idx;
    for (i = 0; i<=arr.size(); i++) {
        min_idx = i;
        for (j = i + 1; j <=arr.size(); j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
void i_sort(arr[])
{
    for (int i = 1; i < arr.size(); ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (int j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
void m_sort(arr[])
{
    stable_sort(arr.begin(), arr.end());

    for (int num : arr)
    {
        cout << num << " ";
    }
}
int main()
{
    int s;
    array<int> a;
    cout<<"Enter The Size of The Array: ";
    cin>>s;
    for(int i=0;i<=s;i++)
    cin>>a[i];
    int c;
    cin>>c;
    do
    {
        cout<<"1) Bubble Sort";
        cout<<"2) Selection Sort";
        cout<<"3) Insertion Sort";
        cout<<"4) Merge Sort";
        cout<<"5) Exit";
        switch(c):
        case 1:
        cout<<"You Choose Bubble Sort."
        b_sort(int a);
        for(int i=0;i<=a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        case 2:
        cout<<"You Choose Bubble Sort."
        s_sort(int a);
        for(int i=0;i<=a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        case 3:
        cout<<"You Choose Bubble Sort."
        i_sort(int a);
        for(int i=0;i<=a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        case 4:
        cout<<"You Choose Bubble Sort."
        m_sort(int a);
        for(int i=0;i<=a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        case 5:
        {
            exit(0);
        }

    } while (s=='y' && 'Y');
    
}