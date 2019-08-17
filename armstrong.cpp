#include<iostream>
using namespace std;
int main()
{
   int n,temp,rem,sum=0;
   cin>>n;
   temp=n;
   while(temp!=0)
   {
       rem=temp%10;
       sum=sum+(rem*rem*rem);
       temp=temp/10;
   }
   if(sum==n)
   {
      cout<<"yes";
   }
   else 
   {
       cout<<"no";
   }
   
   return 0;
}
       
