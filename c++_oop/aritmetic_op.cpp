#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operator in c++" << endl;
    // arithmetic in c++

    cout << "Value of a+b is " << a + b << endl;
    cout << "Value of a-b is " << a - b << endl;
    cout << "Value of a*b is " << a * b << endl;
    cout << "Value of a%b is " << a % b << endl; // a=4

    // a=4
    cout << "Value of a++ is " << a++ << endl; // a = 4
    // first print then increment
    // after execution value of a is "5"

    // a=5
    cout << "Value of a-- is " << a-- << endl; // a = 5
    // first print then decrement
    // after execution value of a is "4"

    // a = 4
    cout << "Value of ++a is " << ++a << endl; // a = 5
    // first increment then print
    // after execution value of a is "5"

    // a=5
    cout << "Value of --a is " << --a << endl; // a =4
    // first decrement then print
    // after execution value of a is "4"

    int c = 6, d = 3;
    cout << "Value of c/d is " << c / d << endl;

    return 0;
}
