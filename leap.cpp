#include<iostream>
using namespace std;
int main()
{
   int yr;
   cin>>yr;
   if(yr%4==0 || yr%400==0 || yr%100==0)
   {
       cout<<"yes";
   }
   else 
   {
      cout<<"no";
   }
   return 0;
} 
