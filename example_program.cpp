#include<iostream>
using namespace std;
typedef unsigned long long ulli;

ulli fib(ulli n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<0)
        {
            cerr<<"Error : Negative input not supported."<<endl;
        }
        else
        {
            cout<<fib(n)<<endl;
        }
    }
    return 0;
}
