#include<iostream>
using namespace std;
int main()
{
   int N,K,a[100],i;
   int s=0;
   cin>>N>>K;
   for(i=0;i<N;i++)
   {  
      cin>>a[i];
   }
   for(i=0;i<K;i++)
   {
      s=s+a[i];
   }
   cout<<s;
   return 0;
 }
   
