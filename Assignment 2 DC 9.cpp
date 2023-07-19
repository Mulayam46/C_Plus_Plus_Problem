#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter three no a and b and c";
  cin>>a>>b>>c;
  if(a>b&&a>c)
  // if(a>c)
   cout<<"a is greater";
  else if(b>c)
   cout<<"b is greater";
  else
   cout<<"c is greater";
  return 0;
}
