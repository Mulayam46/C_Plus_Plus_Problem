#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
private:
   int hr,min,sec;
public:
  void setTime(int x,int y,int z)
   {
      hr=x; min=y;sec=z;
   }
 void  showTime()
   {
      cout<<"\nhr:"<<hr<<"min:"<<min<<"sec:"<<sec;
   }
   Time add(Time T)
   {
    Time temp;
    temp.hr=hr+T.hr;
    temp.min=min+T.min;
    temp.sec=sec+T.sec;
    return temp;
   }
};
int main()
{
   Time t1,t2,t3;
   t1.setTime(2,5,45);
  // t1.showTime();
   t2.setTime(1,54,14);
   //t2.showTime();
   t3=t1.add(t2);
   t3.showTime();
   getch();
}
