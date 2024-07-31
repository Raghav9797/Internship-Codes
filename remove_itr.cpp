int main()
{
    // create list
    list<int> numbers = {1, 2, 3, 4, 5, 6};
    list<int>::iterator itr = numbers.begin();
    // print list
    cout << "Initial List: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }
    // point iterator to 4th element
    for (int i = 0; i < 3; i++)
    {
        ++itr;
    }
    // remove element
    numbers.remove(*itr);
    // display modified list
    cout << endl
         << "Final List: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }
    return 0;
}