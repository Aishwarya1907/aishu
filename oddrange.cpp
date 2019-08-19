#include<iostream>
using namespace std;
int main()
{
    int x,y,i;
    cin>>x>>y;
    for(i=x+1;i<y;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
