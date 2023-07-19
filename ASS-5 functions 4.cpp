#include<iostream>
int nextprime(int);
using namespace std;
main()
{

    int z,x;
   cout<<"enter a no";
   cin>>x;}
 int nextprime(int k)
{
         while(!isPrime(++k));
            return k;
      }
       z=nextprime(x);
       cout<<z;
   return 0;
}
int isPrime(int a)
{
   int i;
   for(i=2;i<=a;i++)
      if(a%i==0)
      break;
   if(a==i)
      return 1;
      return 0;}
