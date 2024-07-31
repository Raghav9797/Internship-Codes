#include <bits/stdc++.h>
using namespace std;
extern int globalVar;
void example()
{
    globalVar++;
    cout << globalVar << endl;
}

int main()
{
    example();
    return 0;
}