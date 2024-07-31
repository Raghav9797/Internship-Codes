#include <iostream>
using namespace std;
int add(int x, int y);
int sub(int x, int y);
int main()
{
    cout << "add functions: " << add(10, 20) << endl;
    cout << "sub function: " << sub(10, 20) << endl;
    return 0;
}
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}

// Create a class add and two user defined function and call this function in main//
