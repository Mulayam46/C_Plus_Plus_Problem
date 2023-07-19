#include<iostream>
#include<conio.h>
using namespace std;
class item
{
   private:
     int a,b;
   public:
   void setData(int x,int y)
   { a=x; b=y;}
   void showData()
   { cout<<"\na="<<a<<"b="<<b; }
   friend void f1(item);
};
   void f1(item i)
   {
      int c;
      c=i.a+i.b;
      cout<<"sum is="<<c;
   }
int main()
{
   item i1,i2;
   i1.setData(30,20);
   f1(i1);
   getch();
}

