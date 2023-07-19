#include<iostream>
int isprime(int);
using namespace std;
int main()
{
   int a;
   cout<<"enter a number";
   cin>>a;
   if(isprime(a))
      cout<<"prime";
   else
      cout<<"not a prime";

}
int isprime(int n)
{
   int i;
   for(i=2;i<n;i++)
      if(n%i==0)
    //  break;
   //if(n==i)
      return 0;
   return 1;
}
