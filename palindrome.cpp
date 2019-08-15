#include<iostream>
using namespace std;
int main()
{ 
   int n,num,a,rev=0;
   cin>>num;
   n=num;
   do
   {
       a=num%10;
       rev=(rev*10)+a;
       num=num/10;
   }while(num!=0);
   if(n==rev)
   {
      cout<<"yes";
   }
   else
   {
     cout<<"no";
   }
   return 0;
}
     
