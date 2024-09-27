#include <iostream>
using namespace std;

class a
{
public:
    void getin()
    {
        cout << "parent";
    }
    virtual void hello()
    {
        cout << "hello from parent" << endl;
    }
};

class b : public a
{
public:
    void getinn()
    {
        cout << "child";
    }
    void hello()
    {
        cout << "Hello from child";
    }
};

int main()
{
    b b1;
    b1.hello();

    return 0;
}