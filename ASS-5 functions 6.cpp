#include<iostream>
int fact(int);
using namespace std;
int main()
{
   int A, a;
   cout<<"enter a number";
   cin>>a;
   A=fact(a);
   cout<<"factorail is "<<A;
}
int fact(int n)
{
   int i,fact=1;
   for(i=1;i<=n;i++)
      fact=fact*i;
   return fact;
}
