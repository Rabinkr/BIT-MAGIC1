//Making the given bit as setbit
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos,res=0;
	cout<<"Enter any number"<<endl;
	cin>>num;
	cout<<"Enter the position to make set"<<endl;
	cin>>pos;
	res=(res|((pos-1)<<1));
	cout<<"Set number is:"<<res;
}
//Output
Enter any number
8
Enter the position to make set
2
Set number is:2
