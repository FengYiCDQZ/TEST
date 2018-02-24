#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int f(int x)
{
    return x*x;
}

int main()
{
    int a;
    a=10;
    cout<<a;
    return 0;
}
