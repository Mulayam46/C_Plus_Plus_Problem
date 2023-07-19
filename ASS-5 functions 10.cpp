#include<iostream>
using namespace std;
int LCM(int ,int);
int main()
{
   int a,b;
   cout<<"enter a number";
   cin>>a>>b;
   cout<<LCM(a,b);

}
int LCM(int a,int b)
{
   int i;
   for(i=1;i<a*b;i++)
      if(i%a==0 && i%b==0)
      return i;
}
