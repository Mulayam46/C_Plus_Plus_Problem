#include<iostream>
using namespace std;
int main()
{
   int a,b,c,m,n;
   cout<<"Enter a number";
   cin>>a>>b>>c;
    n=(b*b)-(4*a*c);
   if(n>0)
      cout<<"for a quadratic two distrinct roots";
   else if(n<0)
      cout<<"no real roots";
   else
   cout<<"two equal roots";
   return 0;
}

