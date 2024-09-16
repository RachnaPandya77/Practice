#include <iostream>
using namespace std;

int main()
{
    // Logical op : And(&&) , OR(||) , Not(!)

    int a = 5, b = 4;

    // return 1 if both are true
    cout << "Value of and is :" << ((a == b && a > b))
         << endl;

    // return 1 if one of them is true
    cout << "Value of OR is :" << ((a == b || a > b))
         << endl;

    // print opposite result
    cout << "Value of NOT is :" << (!(a > b))
         << endl;

    return 0;
}