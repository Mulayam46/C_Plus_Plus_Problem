#include<iostream>
using namespace std;
int isevenodd(int);
int main()
{
   int a;
   cout<<"enter a number";
   cin>>a;
   if(isevenodd(a))
      cout<<"even";
   else
      cout<<"odd";
}
int isevenodd(int n)
{
   if(n%2==0)
      return 1;
   return 0;
}
