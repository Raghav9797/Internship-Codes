#include <bits/stdc++.h>
using namespace std;
/*int main()
    {
        // ofstream my_file("Example.txt");
        //  my_file.close();
        //  return 0;

        // if(!my_file){
        //     cout<<"Error Opening the file"<<endl;
        // }
        // return 1;

        // if(!my_file.fail()){
        //     cout<<"Error Opening the file"<<endl;
        // }
        // return 1;

        // Reading data from the file

        // Open text file for reading
        ifstream my_file("Example.txt");
        // Check the file for errors
        if (!my_file)
        {
            cout << "Error wile opening the file" << endl;
            return 1;
        }
        // store the content of the file in the "Line" string
        string line;
        // loop until the end of the text file
        while (!my_file.eof())
        {
            // store the current line of the file in the "line" variable
            getline(my_file, line);
            // print the line variable
            cout << line << endl;
        }
        my_file.close();
        return 0;
    }*/

/*int main()
{
    ofstream my_file("example.txt");

    if (!my_file)
    {
        cout << "Error: Unable to Open the file." << endl;
        return 1;
    }

    my_file << "Mohan 30" << endl;
    my_file << "Mayur 40" << endl;
    my_file << "Jitu 50" << endl;

    my_file.close();
    return 0;
}

int main()
{
    ofstream my_file("example.txt", ios::app);

    if (!my_file)
    {
        cout << "Failed to open the file for appending." << endl;
        return 1;
    }

    my_file << "Subash 40" << endl;
    my_file << "Rutuja 50" << endl;
    my_file << "Rajesh 60" << endl;

    my_file.close();
    return 0;
}*/

int main()
{
    ofstream my_file("example.txt");

    if (!my_file)
    {
        cout << "Error: Unable to Open the file." << endl;
        return 1;
    }

    my_file << "Mohan 30" << endl;
    my_file << "Mayur 40" << endl;
    my_file << "Jitu 50" << endl;

    my_file.close();
    return 0;
}

int main()
{
    ofstream my_file("example.txt", ios::app);

    if (!my_file)
    {
        cout << "Failed to open the file for appending." << endl;
        return 1;
    }

    my_file << "Subash 40" << endl;
    my_file << "Rutuja 50" << endl;
    my_file << "Rajesh 60" << endl;

    my_file.close();
    return 0;
}
