#include<bits/stdc++.h>
using namespace std;
class Teacher{
    public:
    Teacher(){
    cout<<"I'm a Teacher"<<endl;
}
};
class MathsTeacher:public Teacher{
    public:
    MathsTeacher(){
    cout<<"I'm a Maths Teacher"<<endl;
}
};


int main()
{ 
 MathsTeacher obj;
 
    return 0;
}