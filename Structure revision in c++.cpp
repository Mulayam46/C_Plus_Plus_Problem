#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
   struct Book
{
  int bookid;
  char title[20];
  float price;
   void input()
{
   cout<<"enter book id:";
   cin>>bookid;
   cout<<"title of the book";
   cin.ignore();
   cin.getline(title,20);
   cout<<"etner the price of book";
   cin>>price;
}
  void display( Book b)
{
   cout<<endl<<bookid<<" "<<title<<" "<<price;
}
};
 Book input();
int main()
{
   Book b1={1,"C made is easy",560.0},b2;
   b2.bookid=2;
   strcpy(b2.title,"C made is easy");
   b2.price=450.0;
   Book b3;
  b3.input();
  b1.display();
  b2.display();
  b3.display();
}

