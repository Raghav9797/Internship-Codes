#include <iostream>
using namespace std;

int main()
{
    // Braced intilizers
    // Variables may contain random garbage value. WARNING
    int elephant_count;
    int lion_count();  // initilizes to zero
    int dog_count(10); // initilizes to 10
    int cat_count(15); // initilizes to 15
    // Can Use expressions as initilizers
    int domesticated_animals{dog_count + cat_count};

    // int new_number{doesn't exixt};
    int narrowing conversion{2, 9}; // Compiler error
    cout << "Elephant count :" << elephant_count << endl;
    cout << "Lion Count :" << lion_count << endl;
    cout << "Dog Count :" << elephant_count << endl;
    cout << "Cat Count :" << lion_count << endl;
    cout << "Domesticated animal count : " << domesticated_animals << endl;
    return 0;
}