#include<iostream.h>
#include<conio.h>
class myclass
{
int x,y;
public:
  void getdata(int a,int b)
  {
  x=a;
  y=b;
  }
friend class myfriendclass;
};
class myfriendclass
{
public:
 void accessdata(myclass obj)
 {
 cout<<"\n value of x&y"<<obj.x<<"and"<<obj.y<<"respectively";
 }
};
void main()
{
clrscr();
myclass obj;
obj.getdata(5,9);
myfriendclass fobj;
fobj.accessdata(obj);
getch();
}