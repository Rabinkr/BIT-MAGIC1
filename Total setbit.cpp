//Count total number of setbit
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"Enter any number to count setbit"<<endl;
	cin>>num;
	while(num!=0)
	{
		if(num&1==1)
		{
			count++;
		}
		num=num>>1;
	}
	cout<<"Total number of setbit="<<count;
	return 0;
}
//output
Enter any number to count setbit
10
Total number of setbit=2

