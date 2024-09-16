#include <iostream>
using namespace std;
// else-if-ladder
int main()
{
    int age;
    cout << "Enter age : ";
    cin >> age;

    if (age > 18 && age < 50)
    {
        cout << "You are allowed" << endl;
    }
    else if (age == 18)
    {
        cout << "YES , u can come to the party" << endl;
    }
    else if (age <= 18 && age > 5)
    {
        cout << "Not allowed" << endl;
    }
    else
    {
        cout << "Enter valid age" << endl;
    }

    return 0;
}