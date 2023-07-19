#include<iostream>
#include<conio.h>
using namespace std;
class BOX
{
private:
   int l,b,h;
public :
     void setData(int x,int y,int z)
     {
        l=x;
        b=y;
        h=z;
     }
     void showData()
     {
        //nt M;     M=l*b*h;
        cout<<"l="<<l<<" b="<<b<<" h="<<h;
     }
     int showDisplay()
     {
        int M;
        M=l*b*h;
        return M;
     }
};
int main()
{
   BOX l1;
   l1.setData(1,2,3);
   l1.showData();
   l1.showDisplay();
   getch();---
}
