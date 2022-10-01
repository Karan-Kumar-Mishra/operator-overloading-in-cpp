#include<iostream>
#include<stdio.h>
#include<stdlib.h>
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

void * operator new(size_t size) 
{
   void * p = ::operator new(size);     
   return p;
}

};
int main()
{
    temp n1;
    temp *ptr = new temp[5];
//    delete ptr;
    return 0;
}