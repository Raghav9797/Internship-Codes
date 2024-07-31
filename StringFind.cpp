#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1 = "jhon12Doe14@gmail18.com8";
    int count = 0;
    sort(s1.begin(), s1.end());
    for (int i = 0; i <= s1.length(); i++)
    {
        if (s1[i] == s1[i + 1])
        {
            cout << "Duplicate Number: " << s1[i] << endl;
            count++;
        }
        if (isalpha(s1[i]))
            break;
    }
    cout << "Total Duplicated Numbers: " << count << endl;
}

write a program to find the duplicate number from string

        let say string jhon12Doe14 @gmail18.com8

    1 -
    number - 1 is 3 times

    8 -
    number - 2 times

                 solution using -
    STL

        solution using -
    lambda

        simple -
    solution

    -- -- -leet code-- -- -

#include <bits/stdc++.h>

    using namespace std;

int main()
{

    string s1 = "jhon12Doe14@gmail18.com8";

    string s2 = s1;

    int count = 0;

    sort(s2.begin(), s2.end());

    for (int i = 0; i < s2.length() - 1; i++)
    {

        if (s2[i] == s2[i + 1])
        {

            cout << "Duplicate Number: " << s2[i] << endl;

            count++;
        }

        if (isalpha(s2[i]))

            break;
    }

    cout << "Total Duplicated Numbers: " << count << endl;
}

-- -- -- -- --

            second row solution

#include <iostream>

#include <string>

            using namespace std;

bool isDigit(char c)
{

    return c >= '0' && c <= '9';
}

void countDigits(const string &input, int digitCount[])
{

    // Lambda to increment count of a digit in the array

    auto incrementCount = [&digitCount](char c)
    {
        if (isDigit(c))
        {

            digitCount[c - '0']++;
        }
    };

    for (char c : input)
    {

        incrementCount(c);
    }
}

void printDuplicateCounts(int digitCount[])
{

    for (int i = 0; i < 10; ++i)
    {

        if (digitCount[i] > 1)
        {

            cout << "Number " << i << " is " << digitCount[i] << " times" << endl;
        }
    }
}

int main()
{

    string input = "john12Doe14@gmail18.com8";

    int digitCount[10] = {0};

    countDigits(input, digitCount);

    printDuplicateCounts(digitCount);

    return 0;
}

-- -- -- -- -- -- --

#include <iostream>

#include <unordered_map>

                  using namespace std;

int main()
{

    string s = "jhon12Doe14@gmail.com8";

    unordered_map<char, int> countMap;

    for (char c : s)
    {

        if (isdigit(c))
        {

            countMap[c]++;
        }
    }

    for (const auto &entry : countMap)
    {

        cout << entry.first << " : " << entry.second << endl;
    }

    return 0;
}

-- -- -- -- -- -- --

#include <iostream>

#include <unordered_map>

                  using namespace std;

int main()
{

    string s = "jhon12Doe14@gmail.com8";

    unordered_map<char, int> countMap;

    for (char c : s)
    {

        if (isdigit(c))
        {

            countMap[c]++;
        }
    }

    for (const auto &entry : countMap)
    {

        cout << entry.first << " : " << entry.second << endl;
    }

    return 0;
}
