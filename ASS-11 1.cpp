#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
   int a,b;
public:
   Complex()
   { a=0,b=0; }
   Complex(int x,int y)
   {
     a=x;
     b=y;
   }
  void  setdata(int x,int y)
  {
   a=x;
   b=y;
   }
   void showdata()
   {
      cout<<"\na="<<a<<"b="<<b;
   }
};
int main()
{
 Complex c1,c2(3,4);
 c1.showdata();
 c2.showdata();
 getch();
}


