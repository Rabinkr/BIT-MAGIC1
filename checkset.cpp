//Checking whether the given position is set or not
#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int num,pos;
	cout<<"Enter any number"<<endl;
	cin>>num;
	cout<<"Enter the position for checking set or not"<<endl;
	cin>>pos;
	if(num&((pos-1)<<1))
	{
		cout<<"The given position is set";
	}
	else 
	{
		cout<<"The given position is not set";
	}
	return 0;
}
//output
Enter any number
15
Enter the position for checking set or not
3
The given position is set
