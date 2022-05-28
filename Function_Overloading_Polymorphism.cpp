#include <bits/stdc++.h>
using namespace std;

class Add
{
public:
    int sum(int n1, int n2) {
        return n1+n2;
        }
int sum(int n1, int n2,int n3) {
        return n1+n2+n3;
        }
};
int main()
{
Add obj;
cout<<obj.sum(1,2)<<endl;
cout<<obj.sum(1,2,4)<<endl;
    return 0;
}