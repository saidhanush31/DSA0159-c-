#include<iostream>
using namespace std;
int main()
{
	int painting1=4200;
	int painting2=8500;
	int painting3=1000;
	int painting4=1300;
	if(painting1>painting2 && painting1>painting3 && painting1>painting4)
	{
		cout<<"the old cave painting is:"<<painting1<<"years old"<<endl;
	}
	else if(painting2>painting1 && painting2>painting3 && painting2>painting4)
	{
		cout<<"the old cave painting is:"<<painting2<<"years old"<<endl;
	}
	else if(painting3>painting1 && painting3>painting2 && painting3>painting4)
	{
		cout<<"the old cave painting is:"<<painting3<<"yearsold"<<endl;
	}
	else
	{
	    cout<<"the old cave painting is:"<<painting4<<"yearsold"<<endl;	
	}
	return 0;
}
