#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    string input_string;
    cout << "Enter The String: ";
    getline(cin, input_string);
    for (char x : input_string)
    {
        s += tolower(x);
    }
    cout << s;
    return 0;
}
