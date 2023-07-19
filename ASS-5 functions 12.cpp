#include<iostream>
int fibonacci(int );
using namespace std;
int main()
{
   int a;
   cout<<"enter a number";
   cin>>a;

  cout<<fibonacci(a);

}
int fibonacci(int n)
{
   int i,a=0,b=1,c;
   for(i=1;i<=n;i++)
   {
   c=a+b;
   //cout<<a<<",";
   a=b;
   b=c;
   }
   return c;
}
