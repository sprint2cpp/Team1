#include<iostream>
#include<string.h>
using namespace std;

class Bank
{
private:
	int accnum=0;
	char accname[50];
	char acctype[10];
	int accbal=0;
public:
	Bank(int num,const char *name,const char *type,int bal)
	{
		accnum=num;
		strcpy(this->accname,name);
		strcpy(this->acctype,type);
		accbal=bal;
	}
	void details()
	{
		cout<<endl;
		cout<<" Account Number :  "<<accnum<<endl;
		cout<<" Account Name   :  "<<accname<<endl;
		cout<<" Account Type   :  "<<acctype<<endl;
		cout<<" Account Balance:  "<<accbal<<endl<<endl<<endl;	
	}
	void deposit(int a)
	{
		accbal+=a;
		cout<<" Acc Balance :  "<<accbal<<endl;
	}
	void withdraw(int a)
	{
		this->accbal-=a;
		cout<<" ACC Balance :  "<<accbal<<endl;
	}
	void balance()
	{
		cout<<" Account Balance is :  "<<accbal<<endl;
	}
};
	
int main()
{
	int amount=0;
	Bank b(1,"Baskaran","Savings",1000);
	while(1)
	{
		int choice;
		cout<<" 1. Account Details "<<endl;
		cout<<" 2. Deposit "<<endl;
		cout<<" 3. Withdraw "<<endl;
		cout<<" 4. Balance "<<endl;
		cout<<" 0. Exit "<<endl;
		a:cout<<" Enter your choice :  ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<endl<<endl;
				cout<<" Account Details "<<endl<<" ----------------- "<<endl;
				b.details();
				break;
			case 2:
				cout<<endl;
				cout<<" Enter the amount for Deposit : ";
				cin>>amount;
				b.deposit(amount);			 
				break;
			case 3:
				cout<<endl;
				cout<<" Enter the WithDrawal Amount  : ";
				cin>>amount;
				b.withdraw(amount);
				break;
			case 4: 
				cout<<endl;
				b.balance();
				break;
			case 0:
				cout<<" Exit "<<endl;
				break;
			default:
				cout<<" Wrong Option Selected / Retry " <<endl;
				goto a;
				break;
		}	
	if(choice==0)
		break;
	}
	return 0;
}

