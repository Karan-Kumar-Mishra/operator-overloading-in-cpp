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
    void operator++()
    {
     
     a=++a;
     b=++b;
       
    }
};

int main()
{
    temp n1,n2,n3;
    n1.input();
    ++n1;
    
   // n2.input();
   // n3=n2<n1;
    n1.display();

    return 0;
}