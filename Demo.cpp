#include <iostream>

class Input
{
public:
    int n;

    void In()
    {
        std::cout << "Give Input:" << std::endl;
        std::cin >> n;
    }
};

class Display
{
public:
    int n;

    void Dis()
    {
        std::cout << "Entered Input: " << n << std::endl;
    }
};
