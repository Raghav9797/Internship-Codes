#include <iostream>
#include "MainsPart.cpp"

using namespace std;

int main()
{
    Input obj;
    obj.In();

    Display obj2;
    obj2.n = obj.n;
    obj2.Dis();

    return 0;
}
