#include<iostream>
using namespace std;

double centigrade(double F)
{
	double C =(F-32)*5.0/9;
	return C;
}

int main()
{
	double F;
	cout<<"请输入华氏温度"<<endl;
	cin >>F;
	cout<<"摄氏温度是"<<centigrade(F)<<endl;
	return 0;
}