//Making given position as unset
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos,res;
	cout<<"Enter any number"<<endl;
	cin>>num;
	cout<<"Enter the position to make unset"<<endl;
	cin>>pos;
	res=(res^(pos-1)<<1);
	cout<<"The unset number is:"<<res;
	return 0;
}
//output
Enter any number
6
Enter the position to make unset
2
The unset number is:2
