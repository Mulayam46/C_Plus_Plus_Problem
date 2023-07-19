#include<iostream>
#include<conio.h>
using namespace std;
class item
{
   private:
     int a,b;//instance member varialbe
     //int k;//instance member variable
     static int k; //static member variable
   public:
    void set_a(int x){a=x;}
    void set_b(int y){b=y;}
   static void set_k(int z){k=z;}
    void show_a(){cout<<a;}
    void show_b(){cout<<b;}
   static void show_k(){cout<<k;}
   void setData(int x,int y)
   {
      a=x;
      b=y;
   }
   void showData()
   {
      cout<<"\na="<<a<<"b="<<b;
   }
};
   int item::k=5;
int main()
{
  // item i1,i2;
  //i1.set_a(5);
  //cout<<"a=";
  //i2.show_a();
       // i1.set_k(10);
       item::set_k(10);
 cout<<"\nk=";
      //i2.show_k();
      item::show_k();
   getch();
}
