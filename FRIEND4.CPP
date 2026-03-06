#include<iostream.h>
#include<conio.h>
class second;
class first
{
int x;
public:
     inline void getdata();
     inline void display();
     friend int sum(first,second);
};
class second
{
int y;
public:
    inline void getdata();
    inline void display();
    friend int sum(first,second);
};
inline void first::getdata()
{
cout<<"\n Enter value for x\n";
cin>>x;
}
inline void second::getdata()
{
cout<<"\n Enter a value for y\n";
cin>>y;
}
inline void first::display()
{
cout<<"\n Entered no of x=";
cout<<x<<endl;
}
inline void second::display()
{
cout<<"\n Entered no of y=";
cout<<y<<endl;
}
int sum(first one,second two)
{
int temp;
temp=one.x+two.y;
return(temp);
}
void main()
{
clrscr();
first a;
second b;
a.getdata();
b.getdata();
a.display();
b.display();
int te=sum(a,b);
cout<<"sum of the two private data variables=";
cout<<""<<te<<endl;
getch();
}