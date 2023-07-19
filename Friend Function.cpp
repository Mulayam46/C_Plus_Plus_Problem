#include<iostream>
#include<conio.h>
using namespace std;
class item
{
   private:
     int a,b;//instance member varialbe
     //int k;//instance member variable
    // static int k; //static member variable
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
   i1.setData(10,20);
   f1(i1);
   getch();
}

