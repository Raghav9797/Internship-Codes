#include <iostream>

/*int main()
{
    int x = 10;

    auto modifyX = [x]() mutable
    {
        x = 20; // This modifyes the local copy of x, not the original x
        std::cout << "Inside lambda, x = " << x << std::endl;
    };

    modifyX();
    std::cout << "Outside lambda, x = " << x << std::endl; // Output lamda, x =10
    return 0;
}*/

int main()
{
    auto divide = [](int a, int b) -> double
    {
        if (b == 0)
        {
            return 0; // Handle division by zero
        }
        return static_cast<double>(a) / b;
    };

    std::cout << "Divison result: " << divide(10, 2) << std::endl;         // Output Division result: 5
    std::cout << "Divison by zero result: " << divide(10, 0) << std::endl; // Output: Division by zero
    return 0;
}
