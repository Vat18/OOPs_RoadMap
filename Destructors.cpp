#include<bits/stdc++.h>
using namespace std;
class Hello{
    public:
    Hello(){
        cout<<"Constructor"<<endl;
    }
    
    ~Hello(){
        cout<<"Destructor"<<endl;
    }

    
    void display(){
        cout<<"Member Function"<<endl;
    }
};
int main()
{ 
 Hello obj;
 obj.display();
    return 0;
}