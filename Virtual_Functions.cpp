#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
virtual void print(){
    cout<<"Parent"<<endl;
}
void show(){
    cout<<"Parent"<<endl;
}

};


class Child: public Parent{
public:
void print(){
    cout<<"Child"<<endl;
}
void show(){
    cout<<"Child"<<endl;
}

};
int main()
{ 
 Parent* bptr;
 Child c;
 bptr = & c;
 bptr ->print();
 bptr ->show();
    return 0;
}