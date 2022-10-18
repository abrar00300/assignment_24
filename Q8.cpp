#include<iostream>
using namespace std;
float area(int);
int area(int,int);
int main()
{
    int r;
    cout<<"enter value of radius =";
    cin>>r;
    cout<<"area of circle is "<<area(r);
    cout<<"\n Enter value of length and breadth of rectangle =";
    int l,b;
    cin>>l>>b;
    cout<<"area of rectangle is "<<area(l,b);
 //   cout<<"\n enter value of base and heigth of triangle =";
  //  cin>>l>>b;
  //  cout<<"area of triangle is "<<area(l,b);
    return 0;
}
int area(int a,int b)
{
    return a*b;
}
float area(int a)
{
    return 3.14*a*a;
}
