#include<iostream.h>
#include<conio.h>
class arithmatic
{
public:
inline double add(double a,double b)
{
return (a+b);
}
inline double sub(double a,double b)
{
return (a-b);
}
inline double multip(double a,double b)
{
return (a*b);
}
inline double div(double a,double b)
{
return (a/b);
}
};
void main()
{
int ch;
double x,y,t;
arithmatic obj;
clrscr();
do
{
cout<<“\n\tMENU \n”;
cout<<“1.Addition\n2.Subtraction\n”;
cout<<“3.Multiplication\n4.Division\n5.Exit\n”;
cout<<“\n\tEnter youer choice: “;
cin>>ch;
switch(ch)
{
case 1:
cout<<“\nEnter two number: “;
cin>>x>>y;
t=obj.add(x,y);
cout<<“Addition “<<x<<“+”<<y<<“=”<<t<<endl;
break;
case 2:
cout<<“\nEnter two number: “;
cin>>x>>y;
t=obj.sub(x,y);
cout<<“Subtractin “<<x<<“-“<<y<<“=”<<t<<endl;
break;
case 3:
cout<<“\nEnter two number: “;
cin>>x>>y;
t=obj.multip(x,y);
cout<<“\nMultiplication “<<x<<“*”<<y<<“=”<<t<<endl;
break;
case 4:
cout<<“\nEnter two number: “;
cin>>x>>y;
t=obj.div(x,y);
cout<<“Division “<<x<<“/”<<y<<“=”<<t<<endl;
break;
case 5:
break;
}
}while(ch!=5);
getch();
}