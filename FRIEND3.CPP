#include<iostream.h>
#include<conio.h>
class sample
{
int a,b;
public:
       void setvalue(void)
       {
	a=34;
	b=70;
	}
friend float sum(sample s);
};
float sum(sample s)
{
return float(s.a+s.b);
}
void main()
{
clrscr();
sample x;
x.setvalue();
cout<<"sum of entered no is="<<sum(x);
getch();
}