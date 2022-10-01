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
    friend temp operator*(temp &t1,temp &t2);
};
temp operator*(temp &t1,temp &t2)
{
    temp t3;
    t3.a=t1.a*t2.a;
    t3.b=t1.b*t2.b;
    return t3;
}
int main()
{
    temp n1,n2,n3;
    n1.input();
    n2.input();
    n3=n2*n1;
    n3.display();

    return 0;
}