#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum,t,m,n;
    cin>>m>>n;

    for(num=m+1;num<n;num++)
    {
      t=num;
      sum=0;

    while(t!=0)
    {
        rem=t%10;
        sum=sum+(rem*rem*rem);
        t=t/10;
    }
    if(sum==num)
    {
        cout<<num<<" ";
    }
    }

    return 0;
}
