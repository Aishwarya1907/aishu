#include<iostream>
using namespace std;
int main()
{
    int i,n,flag=0;
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
       if(n%i==0)
       {
          
          flag=1;
          cout<<"no";
          break;
       }
    }
    if(flag==0)
    {
       cout<<"yes";
    }
    return 0;
}
