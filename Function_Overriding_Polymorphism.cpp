#include <bits/stdc++.h>
using namespace std;
class Parent
{
public:
    void display()
    {
        cout << "Parent Class" << endl;
    }
};
class Child
{
public:
    void display()
    {
        cout << "child Class" << endl;
    }
};

int main()
{
    Parent obj;
    obj.display();
    Child obj2;
    obj2.display();

    return 0;
}