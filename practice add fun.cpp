#include<iostream>
using namespace std;
int add(int,int,int=1);//in this argument default value is 1 so if pass then good otherwise automatically add 1
int main()
{
   int a,b;
   cout<<"Enter two number";
   cin>>a>>b;
  int c=add(a,b);
   cout<<"SUM is "<<c<<endl;
   cout<<"enter three number";
   cin>>a>>b>>c;
   int d=add(a,b,c);
   cout<<"Sum of d is "<<d;
}
int add(int x,int y,int z)
{
   return x+y+z;
}
