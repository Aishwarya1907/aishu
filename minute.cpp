#include<iostream>
using namespace std;
int main()
{
    int time_m,h,m;
    cin>>time_m;
    h=time_m/60;
    m=time_m%60;
    cout<<h<<" "<<m;
    return 0;
}
