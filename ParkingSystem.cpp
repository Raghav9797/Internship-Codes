#include <iostream>
using namespace std;

int main()
{
    char b;
    do
    {
        int c;
        cout << "--------------------------------------------------" << endl;
        cout << "----------------PARKING SOFTWARE------------------" << endl;
        cout << "----------CHOOSE AN OPTION TO CONTINUE------------" << endl;
        cout << "1. CAR PARKING" << endl;
        cout << "2. BIKE PARKING" << endl;
        cout << "3. RIKSHAW PARKING" << endl;
        cout << "4. EXIT" << endl;
        cout << "PRESS BUTTON TO CONTINUE:";
        cin >> c;
        switch (c)
        {
        case 1:
        {
            cout << "CAR PARKED SUCCESSFULLY" << endl;
            break;
        }
        case 2:
        {
            cout << "BIKE PARKED SUCCESSFULLY" << endl;
            break;
        }
        case 3:
        {
            cout << "RIKSHAW PARKED SUCCESSFULLY" << endl;
            break;
        }
        case 4:
        {
            cout << "THANKS FOR USING!!" << endl;
            exit(0);
        }
        default:
        {
            cout << "YOU CHOSE A WRONG OPTION" << endl;
        }
        }
        cout << "Do YOU WANT TO CONTINUE (Y/N): ";
        cin >> b;
    } while (b == 'y' || b == 'Y');

    return 0;
}
