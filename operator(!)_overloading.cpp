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
    friend bool operator ! (temp &t);
};
bool operator !(temp &t)
{
  return !t.a and !t.b;
}
int main()
{
    temp t1;
    cout<<(!t1); 
    return 0;
}