#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
class account
{
protected:
int no,b,ty;
char a[20];
public :
	void getdata()
	{
	cout<<"\nEnter your account number ";
	cin>>no;
	cout<<"Enter your name ";
	cin>>a;
		cout<<"\\ type of account \\";
		cout<<"\n\t1:saving acc\n\t2:current";
		cout<<"**\n\tenter your choice** ";
		cin>>ty;
	cout<<"Enter your balanced";
	cin>>b;
	}
	void deposit(int amt)
	{
	b=b+amt;
	}
};
class saving :public account
{

public :

	void withdraw(int amt)
	{
	int t=b-amt;
	if(t<500)
		cout<<"insufficint balanced :you can't with draw";
	else
		b=b-amt;
	}
	void show()
	{
	cout<<"\naccount holder name is "<<a<<endl;
	cout<<"balanced in your acc"<<b;
	}
};
class current :public account
{
int l;
public :
	void limit()
	{
	cout<<"enter your credit limit";
	cin>>l;
	}
	void withdraw(int amt)
	{
	int t=b-amt;
	if(t>l)
	cout<<"\ninsufficint balanced";
	else
	b=b-amt;
	}



};
void main()
{
int u,amt;
clrscr();
saving d;
cout<<"welcome to pranav bank";
delay(1000);
d.getdata();
cout<<"\t1:deposit\n\t2:withdraw\n\t3:exit"<<endl;
cout<<"\n\tEnter your choise";
cin>>u;
cout<<"enter your amount";
cin>>amt;
switch(u)
{
case 1:
	d.deposit(amt);
	break;
case 2:
	d.withdraw(amt);
	break;
case 3:
	exit(0);
default:
cout<<"invalid choose";
}
d.show();
getch();
}












