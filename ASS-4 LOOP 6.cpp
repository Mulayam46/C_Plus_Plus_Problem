#include<iostream>
using namespace std;
int main()
{
   int n,i,largest=0,r;
   cout<<"Enter a number";
   cin>>n;
      cout<<"number is"<<n<<endl;
   while(n){
   r=n%10;
   if(r>largest)
   largest=r;
     n=n/10;
     }
   cout<<"largest digit is "<<largest;

}
