#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
 class Book
 {
    private:
     int book;
     char title[20];
     float price;
    public:
      void input
      {
         cout<<"enter book id";
         cin>>bookid;
         if(bookid<0)
            bookid=-bookid;
        cout<<"enter title of the book";
        cin.ignore();
        cin.getline(title,20);
        cout<<"etner the price of book";
        cin>>price;
      }
      inline  void display();//if u create out of class body member fun then must be declar in class body
};
      void Book:: display()//membership level
{
   cout<<endl<<bookid<<" "<<title<<" "<<price;
}
int main()
{
  Book b1,b2;
  b2.bookid=-2;
  strcpy(b2.title,"c++ made easy");
  b2.price=475.0;
  Book b3;
  b3 input();
  display(1);
  display(2);
  display(3);
}
