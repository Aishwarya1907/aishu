#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int hr1,hr2,min1,min2;
    cin>>hr1>>min1;
    cin>>hr2>>min2;
    int hra,mina;
    hra=abs(hr1-hr2);
    mina=abs(min1-min2);
    cout<<hra<<" "<<mina;
    return 0;
}
