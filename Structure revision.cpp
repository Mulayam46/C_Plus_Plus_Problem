#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
   struct Book
{
  int bookid;
  char title[20];
  float price;
};
struct Book input();
void display(struct Book);
int main()
{
   struct Book b1={1,"C made is easy",560.0},b2;
   b2.bookid=2;
   strcpy(b2.title,"C made is easy");
   b2.price=450.0;
   struct Book b3;
  b3=input();
  display(b1);
  display(b2);
  display(b3);
}
void display(struct Book b)
{
   cout<<endl<<b.bookid<<" "<<b.title<<" "<<b.price;
}
struct Book input()
{
   struct Book b;
   cout<<"enter book id:";
   cin>>b.bookid;
   cout<<"title of the book";
   cin.ignore();
   cin.getline(b.title,20);
   cout<<"etner the price of book";
   cin>>b.price;
   return b;
}
