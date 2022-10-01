#include<iostream>
#include<stdio.h>
using namespace std;
class temp
{
    int a,b;
public:
    void input()
    {
        cout<<"enter the value of a=>"<<endl;
        cin>>a;
        cout<<"enter the value of b=>"<<endl;
        cin>>b;
    }
    void display()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
    friend void operator << (ostream &out,temp &t1);
};
void operator << (ostream &out,temp &t1)
{
    out<<t1.a;
    out<<t1.b;
    
}

int main()
{
    temp n1,n2,n3;
    n1.input();
    cout<<n1;

    return 0;
}