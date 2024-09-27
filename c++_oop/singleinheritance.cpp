#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    /* person(string name, int age)
     {
         this->name = name;
         this->age = age;
     }*/
    person()
    {
    }
};

class student : public person
{
public:
    int rollno;

    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
    }
};

int main()
{

    student stu;

    stu.name = "ruchi";
    stu.age = 21;
    stu.rollno = 7;

    stu.getinfo();

    return 0;
}