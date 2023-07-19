#include<iostream>
using namespace std;
int main()
{
   int a,b,l;
   cout<<"Enter number";
   cin>>a>>b;
   for(l=1;l<=a*b;l++)
      if(l%a==0 && l%b==0)
         break;
      cout<<l;
      return 0;
}
