#include<iostream>
using namespace std;
int main()
{
  int a=0,b=1,c,n,i;
  cout<<"enter a number"<<endl;
  cin>>n;
  cout<<"fibonacci series of "<<n<<"term is"<<endl;
  for(i=a;i<n;i++)
 {
  cout<<a<<endl;
  c=a+b;
  a=b;
  b=c;
 }
  return 0;
}
