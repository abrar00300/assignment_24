#include<iostream>
using namespace std;
void prime(int=0);
int main()
{
    int n;
    cout<<"Enter number =";
    cin>>n;
    prime(n);
}
void prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%2==0)
                break;
    }
    if(n==1||n==i)
        cout<<"number is prime";
    else
        cout<<"number is not prime";
}
