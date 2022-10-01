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
    friend void operator >> (istream &out,temp &t1);
};
void operator >> (istream &out,temp &t1)
{
    out>>t1.a;
    out>>t1.b;
}
int main()
{
    temp n1,n2,n3;
    cin>>n1;
    n1.display();

    return 0;
}