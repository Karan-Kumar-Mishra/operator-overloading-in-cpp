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
    friend void operator |= (temp &t1,temp &t2);
};
void operator |= (temp &t1,temp &t2)
{
    t1.a|=t2.a;
    t1.b|=t2.b;
}

int main()
{
    temp n1,n2,n3;
    n1.input();
    n2.input();
    n2|=n1;
    n2.display();

    return 0;
}