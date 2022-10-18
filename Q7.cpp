#include<iostream>
using namespace std;
inline int add(int=0,int=0,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter two number =\n";
    cin>>a>>b;
    cout<<" sum of "<<a<<" and "<<b<<" is = "<<add(a,b);
    cout<<"\nEnter three number =\n";
    cin>>a>>b>>c;
    cout<<" sum of "<<a<<" , "<<b<<" and "<<c<<" is = "<<add(a,b,c);
    return 0;
}
int add(int a,int b, int c)
{
    return a+b+c;
}

