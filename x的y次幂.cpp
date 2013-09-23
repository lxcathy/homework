#include<iostream>
using namespace std;

double cal(int x,int y)
{
  if(y==1)
	{
	 return x;
	}
  return cal(x,y-1) *x;
}

int main()
{
 int x,y;
 cout<<"input x:"<<endl;
 cin>>x;
 cout<<"input y:"<<endl;
 cin>>y;
 cout<<"the result is:"<<cal(x,y)<<endl;
 return 0;
}