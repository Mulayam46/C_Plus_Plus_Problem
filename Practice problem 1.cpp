
#include<iostream>
#include<conio.h>
using namespace std;
class Print
{
private:
   int a;
  /* char A;
   float c;
   double d;*/
public:
   void seta(int x)
   {
      x=a;
   }
   void displaya()
   {
      cout<<a;
   }
};
int main()
{
Print p;
p.seta(6);
p.displaya();
}
