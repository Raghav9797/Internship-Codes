/*#include <iostream>
#include <vector>
#include <array>
#include <numeric>

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Using std::accumulate with the lambda to sum up the elements
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0, [](int total, int n)
                              { return total + n; });
    std::cout << "Sum: " << sum << std::endl; // Ouput: Sum:15
    return 0;
}
*/
// CI/CD Continuous Integration and Continuous Development

/*#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int sum = 0;
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::for_each(numbers.begin(), numbers.end(), [&sum](int n)
                  { sum += n; });
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>

int main()
    std;:vector<std::string> words = {"Hello", "World", "from", "C++"};

std::string result = std::accumulate(words.begin(), words.end(), std::string(""),
                                     [](const std::string &total, const std::string &word)
                                     {
                                         return total + (total.empty() ? "" : "") + word;
                                     });

std::cout << "Concatenated string: " << std::endl; // Output: Coca