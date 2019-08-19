#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,a,d;
    cin>>n>>a>>d;
    for (int i=0;i<n;i++)
    {
        sum=sum+a;
        a=a+d;
    }
    cout<<sum;
    return 0;
}
