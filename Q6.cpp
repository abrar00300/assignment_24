#include<iostream>
using namespace std;
void swap(int *,int *);
int main()
{
    int a,b;
    cout<<"enter value for a and b =";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"\n value of a and b is "<<a<<" and "<<b<<" after swapping";
    return 0;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
