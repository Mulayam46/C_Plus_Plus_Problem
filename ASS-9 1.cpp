#include<iostream>
#include<conio.h>
using namespace std;
class Account
{
private:
   int account_no;
   float balance;
  static float rateofintrest;

public:
   void setaccount_no(int x)
   {
    account_no=x;
   }
   void getaccount_no()
   {
      cout<<"account_no="<<account_no;
    }
  void setbalance(float y)
   {
      balance=y;
   }
  void getbalance()
   {
      cout<<"\nbalance="<<balance;
   }
  static void setrateofintrest(float z)
   {
      rateofintrest=z;
   }
  static void getrateofintrest()
   {
      cout<<"\nrateofintrest="<<rateofintrest;
   }
};
float Account:: rateofintrest;
int  main()
{
   Account a1,a2,a3;
   a1.setaccount_no(3692152152);
   a2.setbalance(3546.120);
   a3.setrateofintrest(5.32);
   a1.getaccount_no();
   a2.getbalance();
   a3.getrateofintrest();
   getch();

}
