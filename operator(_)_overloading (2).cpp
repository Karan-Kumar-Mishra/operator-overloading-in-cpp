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
    friend bool operator | (temp &t1,temp &t2);
};
bool operator |(temp &t1,temp &t2)
{
  bool b1=t1.a|t1.b;
  bool b2=t2.a|t2.b;
  return b1 and b2;
}
int main()
{
    temp n1,n2;
    cout<<(n1|n2); 
    return 0;
}