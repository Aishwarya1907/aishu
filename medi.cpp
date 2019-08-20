#include<iostream>
using namespace std;
int main()
{
    int a[1000],n,i,add=0,med;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }

    for(i=0;i<n;i++)
    {
        add=add+a[i];

    }
    med=add/n;
    cout<<med;
    return 0;
}
