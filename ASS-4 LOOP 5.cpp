#include<iostream>
using namespace std;
int main()
{
   int a,b,h;
   cout<<"enter two no";
   cin>>a>>b;
   for(h=a<b?a:b;h>=1;h--)
      if(a%h==0&&b%h==0)
      break;
   cout<<h;
   return 0;
}
