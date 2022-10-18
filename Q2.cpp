#include<iostream>
using namespace std;
int check(int );
int main()
{
    int n;
    cin>>n;
    cout<<check(n)<<" is the highest digit of the number";
    return 0;
}
int check(int n)
{
    int i,max=0;
    while(n)
    {
        int d=n%10;
        if(d>max)
                max=d;
        n=n/10;
    }
    return max;
}
