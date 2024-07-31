#include <iostream>
#include <cstdlib>
#include <ctime>

std::string generateRandomAlphanumeric(size_t length)
{
    const std::string characters = "abcdefghijklmnp"; // Characters from 'a' to 'p'
    std::srand(static_cast<unsigned>(std::time(0)));  // Seed with current time

    std::string randomString;
    for (size_t i = 0; i < length; ++i)
    {
        randomString += characters[std::rand() % characters.size()]; // Pick random character
    }

    return randomString;
}

int main()
{
    size_t length = 10; // Length of the random string
    std::cout << "Random alphanumeric string of length " << length << ": " << generateRandomAlphanumeric(length) << std::endl;
    return 0;
}
