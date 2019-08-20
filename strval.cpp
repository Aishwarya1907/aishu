#include<iostream>
using namespace std;
int main()
{
  string str;
  int i,c=0;
  cin>>str;
  for(i=0;i<str.length();i++)
  {
     if(isdigit(str[i])!=0)
     {
         c=1;
     }
     else
     {
        c=0;
     }
  }
  if(c==1)
  {
      cout<<"yes";
  }
  else
  {
    cout<<"No";
  }
  return 0;
}
