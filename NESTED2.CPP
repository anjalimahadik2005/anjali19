#include<iostream.h>
#include<conio.h>
class abc
{
int rno;
char name[20];
void accept(void);
public:
     void get(void);
     void display(void);
};
void abc::get(void)
{
accept();
}
void abc::accept(void)
{
cout<<"\n Enter roll number & Name of student\n";
cin>>rno>>name;
}
void abc::display(void)
{
cout<<"roll number="<<rno<<"\n Name="<<name;
}
void main()
{
clrscr();
abc a;
a.get();
a.display();
getch();
}
