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

    void operator=(temp &t1)
    {
        this->a=t1.a;
        this->b=t1.b;
    }
};
int main()
{
    temp n1,n2,n3;
    n1.input();
    n2=n1;
    n2.display();
    return 0;
}