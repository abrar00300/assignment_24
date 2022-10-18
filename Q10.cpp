#include<iostream>
using namespace std;
int add(int,int);
float add(float,float);
double add(double,double);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"a + b ="<<add(a,b)<<endl;
    float g,k;
    cin>>g>>k;
    cout<<" g + k ="<<add(g,k);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
float add(float d,float k)
{
    return d+k;
}
