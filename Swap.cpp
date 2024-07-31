/*
#include<iostream>
using namespace std;

int main()
{
    float a , b;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Numbers after Swap:"<<endl;
    cout<<"Value of A:"<<a<<endl;
    cout<<"Value of B:"<<b;
    return 0;

}


#include<iostream>
using namespace std;

int main()
{
    float a , b , c;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Numbers after Swap:"<<endl;
    cout<<"Value of A:"<<a<<endl;
    cout<<"Value of B:"<<b;
    return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter A:";
    cin >> a;
    cout << "Enter B:";
    cin >> b;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "Numbers after Swap:" << endl;
    cout << "Value of A:" << a << endl;
    cout << "Value of B:" << b;
    return 0;
}
