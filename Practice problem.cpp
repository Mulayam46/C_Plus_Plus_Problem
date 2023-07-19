#include<iostream>
#include<conio.h>
using namespace std;
class Print
{
private:
   int a,b;
   char A,B;
   float c;
   double d;
public:
   void setab(int x,int y)
   {
      a=x; b=y;
   }
   void displayab()
   {
      cout<<a<<b;
   }
   void setAB(char m,char n)
   {
      A=m; B=n;
   }
   void displayAB()
   {
      cout<<A<<B;
   }
   void setc(float o)
   {
      c=o;
   }
   void displayc()
   {
      cout<<c;
   }
   void setd(double d)
   {
      d=p;
   }
   void displayd()
   {
      cout<<d;
   }
};

int main()
{
Print p;
p.display(100);
p.display(32768);
p.display(‘A’);
p.display(‘1’);
p.display(“C is Fun”);
p.display(3.333333333335);
p.display(8.5);
return 0;
}

