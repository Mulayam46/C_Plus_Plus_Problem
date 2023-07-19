#include<iostream>
#include<conio.h>
using namespace std;
 class time
 {
   private:
   int a,b,c;
   public:
      void setvalue(int x,int y,int z)
      {
      a=x;
      b=y;
      c=z;
      }
      void display()
      {
         cout<<a<<"hr:"<<b<<"min:"<<c<<"sec";
      }
 };
int main()
{
   time a1,b1,c1;
   a1.setvalue(3,15,55);
   a1.display();
}
