#include<iostream.h>
#include<conio.h>
class opposite
{
private:
    int count;
public:
    void getdata()
    {
    cout<<"\n\nEnter count value:-";
    cin>>count;
    }
    opposite()
    {
    count=0;
    }
    void operator*()
    {
    count=count*(-1);
    }
    void show()
    {
    cout<<"\n count="<<count;
    }
};
void main()
{
clrscr();
opposite o,o1,o2;
o.getdata();
*o;
o.show();
o1.getdata();
*o1;
o1.show();
o2.getdata();
*o2;
o2.show();
getch();
}