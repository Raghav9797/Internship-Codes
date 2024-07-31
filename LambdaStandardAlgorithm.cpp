#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> numbers = {5, 3, 8, 1, 4};
    std::sort(numbers.begin(), numbers.end(), [](int a, int b)
              {
                  return a < b; // Proper comparison for sorting in ascending order
              });

    std::cout << "Sorted elements: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
