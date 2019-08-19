#include<iostream>
using namespace std;
int main()
{

	int n1,n2,i, j, count=0;
    cin>>n1>>n2;

	for(i=n1+1; i<n2; i++)
	{
		count=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
