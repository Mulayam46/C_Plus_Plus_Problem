#include<iostream>
using namespace std;
int main()
{
   int i,n;
   cout<<"Enter a number";
   cin>>n;
   for(i=0;i<2*n;i++)
     if(i%2==0)
      cout<<i;
   return 0;
}
