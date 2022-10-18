#include<iostream>
using namespace std;
void check(int);
int main()
{
    int n;
    cout<<"Enter a number =";
    cin>>n;
    check(n);
    return 0;
}
void check(int n)
{
    int a=0,b=1,c=0,flag=0;
    if(n==a || n==b)
    {
        cout<<n<<" is a part of fabonachi series";
    }
    else
    {
        while(c<=n)
        {
            c=a+b;
            a=b;
            b=c;
            if(n==c)
            {
                cout<<n<<" is present in fabonachi series";
                flag=1;
            }
        }
    }
    if(flag==0)
        cout<<n<<" is not present in fabonachhi";
}
