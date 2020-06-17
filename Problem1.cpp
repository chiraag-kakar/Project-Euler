//Priciple of inclusion and exclusion

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define n1 num1
#define n2 num2

int sum_mul(int,int);

int sum_mul(int n,int d)
{
    n=n/d;
    return (d*n*(n+1) /2);
}



int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int n,sum=0;
    cin>>n;
    int a = 3, b=5;
    //also read the question carefully it does not include the boundry i.e below 1000
    sum = sum_mul(n-1,a) + sum_mul(n-1,b) - sum_mul(n-1, a*b); // inclusion-exclusion
    cout<<sum<<endl;
    return 0;

}  
