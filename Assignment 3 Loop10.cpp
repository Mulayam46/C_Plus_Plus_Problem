#include<iostream>
using namespace std;
int main()
{
   int n,s=0,rem;
   cout<<"Enter a number";
   cin>>n;
   while(n)
   {
      rem=n%10;
      s=rem+s;
      n=n/10;
   }
   cout<<s;
}
