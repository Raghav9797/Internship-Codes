/*#include <iostream>
using namespace std;

int main()
{
    int a[5]; // Decalration of an array
    int b[5]={1,2,3,4,5,8}; //Declaration with size and initilisation
    int c[5]={1,5,8,6,7,236,65}; //
    int d[5]={
    }

}
#include <iostream>
using namespace std;

int main()
{
    /*
    int a[5]; //array declaration
    int b[5] {1 , 2 , 3, 4 , 5}; //declaration with size and initialization
    int c[] {1, 2 , 3 , 4 , 5 , 6 , 7 }; //declaration without size but with initialization
    int d[5] ;
    */
/*
 int a[5]{1, 3, 5, 7, 9};
 cout << "Completely initialized Int Array A :" << endl;

 for (int x : a)
 {   //
     // Read as for x in array a
     // for each loop liberates through elements of the array
     cout << x << endl;
     cout << endl;
 }
 int b[6] = {1, 3, 5};
 cout << "Partial Initialized int array B : " << endl;

 for (int y : b)
 {
     /*shows that for each loop will work according to size of array and not accorfing
the number of elements initialized in the array*/
cout << y << endl;
cout << endl;
/*}
float c[6] = {1.2, 2.4, 3.6, 4.8, 48.54, 99.48};
cout << "Completely Initialized Float Array C: ";

for (float z : c)
{
    cout << z << endl;
    cout << endl;
}

float d[6] = {12.6, 82.4, 4.54, 77.48, 84.88}; // No need to know the type of array
cout << "Completely Initialized Float Array C with auto : " << endl;

for (float z : d)
{
    cout << z << endl;
    cout << endl;
}
char e[5] = {'A', 66, 'C', 68, 'E'}; // No need to know the type of array
cout << "Completely Initialized Char Array E with auto : " << endl;
for (auto z : e)
{
    cout << z << endl;
    cout << endl;
}
return 0;
}*/
/*
#include <iostream>
using namespace std;

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    // --------------------------------------------------------------------------------
    // TO Find Sum of elements in an Array :
    int sum = 0;
    for (auto x : array) // automatically assign the data type to varibale which is your are use.
        sum += x;
    sum += x;
    cout << "Sum is " << sum

        //----------------------------------------------------------------------------------
        //----------------------------------------------------------------------------------
        // To Find the minimum or maximum elements in an array :
        int max = -32678;
    for (auto temp : array)
    {
        if (temp > max) // use if (temp < min) then in = INT64_MAX intiall for minimum
        {
            max = temp;
        }
        int user input;
        cout << "Enter the number you want to search for in the array :";
        cin >> user_input;
        int counter = 0;
        for (auto x : array)
        {
            if (x == user_input)
            {
                cout >> "Number " << user_input << " is found at the location: " << counter;

                exit(0);
            }
            counter++;
        }
        cout << "Not Founder: ";
    }
    cout << "Not Found" return 0;
}*/
