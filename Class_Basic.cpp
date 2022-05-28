#include<bits/stdc++.h>
using namespace std;
class car{
    public:
    void getData(int km, int fuel){
        cout<<"Car covered "<< km <<" K.M. using " << fuel << "L Fuel.";
    }
};

int main()
{ 
 car obj;
 obj.getData(100,5);
    return 0;
}