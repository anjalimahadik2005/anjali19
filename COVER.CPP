#include<iostream.h>
#include<conio.h>
class abc
{
float x,y;
public:
   abc(){}
   abc(float a)
   {
   x=y=a;
   }
   abc(float a,float b)
   {
   x=a;
   y=b;
   }
   friend abc sum(abc,abc);
   friend void show(abc);
};
abc sum(abc a1,abc b1)
{
abc c1;
c1.x=a1.x+b1.x;
c1.y=a1.y+b1.y;
return(c1);
}
void show(abc c)
{
cout<<"x="<<c.x<<"\t\t y="<<c.y<<endl;
}
void main()
{
clrscr();
abc A(2.7,3.6);
abc B(1.4);
abc C;
C=sum(A,B);
cout<<"A=";
show(A);
cout<<"B=";
show(B);
cout<<"C=";
show(C);
getch();
}
