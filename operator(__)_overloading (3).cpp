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
    friend bool operator || (temp &t1,temp &t2);
};
bool operator || (temp &t1,temp &t2)
{
    return t1.a || t2.a and t1.b ||t2.b;
}
int main()
{
    temp n1,n2,n3;
    n1.input();
    n2.input();
    if(n1 || n2 )
    {
     cout<<"n1 or n2 not is =0"<<endl;
    }
    else
    {
     cout<<"n1 or n2 is  =0"<<endl;
     
    }
    

    return 0;
}