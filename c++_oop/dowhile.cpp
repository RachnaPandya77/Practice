#include <iostream>
using namespace std;

/*int main()
{
    int i = 1;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= 5);

    return 0;
}*/

// multiplication table

/*int main()
{
    int i = 1, n = 8;
    do
    {
        cout << n << "*" << i << "=" << n * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}*/

int main()
{
    int i = 1, n;
    cout << "Enter number : " << endl;
    cin >> n;

    do
    {
        cout << n << "*" << i << "=" << n * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
