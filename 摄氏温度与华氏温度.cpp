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
	cout<<"Please input the Fahrenheit temperature"<<endl;
	cin >>F;
	cout<<"Celsius temperature is"<<centigrade(F)<<endl;
	return 0;
}