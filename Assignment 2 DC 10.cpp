#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"Enter a charcter";
   cin>>c;
   if(c>48 && c<57)
      cout<<"Digit";
   else if(c>65&&c<90)
      cout<<"Uppercase alphabet";
   else if(c>96 && c<123)
      cout<<"lower case alphabet";
   else
      cout<<"spacial caharcter";
   return 0;
}
