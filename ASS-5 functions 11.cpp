#include<iostream>
int HCF(int ,int);
using namespace std;
int main()
{
   int a,b;
   cout<<"enter two number";
   cin>>a>>b;
   cout<<HCF(a,b);
}
int HCF(int a, int b)
{
   int i;
   for(i=a;i>=1;i--)
      if(a%i==0&&b%i==0)
      return i;
}
