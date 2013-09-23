#include<iostream>
using namespace std;

long C(int m,int n)
{
   if(n==1||n==0)
	   return m;
   return(double)C(m-1,n-1)*m/n;
}

int main()
{
  int m,n;
  while(cin>>m>>n)
  {
  cout<<C(m,n)<<endl;
  }
  system("pause");
return 0;
}