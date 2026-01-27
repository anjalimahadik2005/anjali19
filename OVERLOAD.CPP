#include<iostream.h>
#include<conio.h>
class index
{
private:
	int count,count1,count2;
public:
	void getdata()
	{
	cout<<"\n Enter count value=\n";
	cin>>count1>>count2;
	}
	index()
	{
	count=0 ;
	}
	void operator-()
	{
	count=count1-count2;
	}
	void show()
	{
	cout<<"count="<<count<<"\n";
	}
};
void main()
{
clrscr();
index c,c1,c2;
c1.getdata();
-c1;
c1.show();
c2.getdata();
-c2;
c2.show();
c.getdata();
-c;
c.show();
getch();
}