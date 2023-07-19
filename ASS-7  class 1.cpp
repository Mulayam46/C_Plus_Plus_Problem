#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
   private:
     int a,b;
   public:
   void setData(int x,int y)
   {
      a=x;
      b=y;
   }
   void showData()
   {
      cout<<"a="<<a<<" b="<<b;
   }
};
int main()
{
   Complex a1;
  a1.setData(5,6);
  a1.showData();
}
