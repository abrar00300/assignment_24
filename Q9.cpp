#include<iostream>
using namespace std;
struct complex
{
    int r,i;
};
int max(int,int);
complex max(complex,complex);
int main()
{
    int a,b;
    cout<<"enter two intergers =";
    cin>>a>>b;
    cout<<max(a,b)<<" is the largest";
    complex c1,c2;
    cout<<"\n enter real and imaginary part of first complex no. =";
    cin>>c1.r>>c1.i;
    cout<<"\n enter real and imaginary part of second complex no. =";
    cin>>c2.r>>c2.i;
    complex t;
    t=max(c1,c2);
    cout<<t.r<<" + "<<t.i<<"i is the largest ";
    return 0;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
complex max(complex c1,complex c2)
{
    if(c1.r>c2.r)
        return c1;
    else
        return c2;
}
