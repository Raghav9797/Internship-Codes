#include <iostream>
using namespace std;

int main()
{
    float ch, ca, per;

    cout << "Enter The Classes Held:";
    cin >> ch;

    cout << "Enter The Classes Attended:";
    cin >> ca;

    per = (static_cast<float>(ca) / ch) * 100; // Calculate attendance percentage

    if (per >= 75)
    {
        cout << "Allowed to Sit." << endl;
    }
    else
    {
        cout << "Not Allowed to Sit." << endl;
    }

    return 0;
}
