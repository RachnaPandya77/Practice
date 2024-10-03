#include <iostream>
using namespace std;

void fun()
{
    static int a = 3;
    cout << "a : " << a << endl;
    a++;
}

int main()
{
    fun();
    fun();

    return 0;
}