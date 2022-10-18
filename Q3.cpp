#include<iostream>
using namespace std;
int power(int,int);
int main()
{
    int x,y;
    cout<<"enter value for x and y =";
    cin>>x>>y;
    cout<<"x raised to power y is ="<<power(x,y);
    return 0;
}
int power(int x,int y)
{
    int p=1;
    while(y--)
    {
        p=p*x;
    }
    return p;
}
