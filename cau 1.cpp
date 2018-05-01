#include< curses.h >
#include<iostream.h>
class int
{
          int a,b,c;
          public:
          void getdata(int x,int y)
          {
                   a=x;
                   b=y;
                   c=a+b;
          }
          void display()
          {
                   cout<<"Tong gia tri: "<<c;
          }
};
void main()
{
          clrscr();
          int t1;
          t1.getdata(2,3);
          t1.display();
          getch();
}
	
 



