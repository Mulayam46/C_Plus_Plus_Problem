#include<iostream>
int allprime(int ,int);
using namespace std;
int main()
{
   int a,b,z;
   cout<<"enter two number";
   cin>>a>>b;
   cout<<"prime is "<<allprime(a,b);
}
int allprime(int a,int b)
{
   int i,n,z,x;
   for(x=a;x<b;x++){
   for(i=2;i<=x;i++)
      if(x%i==0)
         break;
      if(x==i)
      cout<<i;}
     return i;
}
/*#include<iostream>
using namespace std;
int main()
{
   int a,i,b,x,z;
   cout<<"enter two number";
  cin>>a>>b;
 for(x=a;x<b;x++){
   for(i=2;i<=x;i++)
      if(x%i==0)
     break;
     if(x==i)
     cout<<i;}
     return 0;
}*/


