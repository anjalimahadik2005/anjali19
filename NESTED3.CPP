#include<iostream.h>
#include<conio.h>
class set
{
int m;
public:
      void input(void);
      void display(void);
      int square(void);
};
void set::input(void)
{
cout<<"\n Enter any number:-";
cin>>m;
}
void set::display(void)
{
cout<<"square of number"<<m<<"is"<<m*m;
}
int set::square(void)
{

}
void main()
{
clrscr();
set m;
m.input();
m.display();
getch();
}