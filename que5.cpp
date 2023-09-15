//que 5
#include<iostream>
using namespace std;
class bank{
	string name,acc_type;
	int acc_no;
	float balance,wd_amt,dp_amt;
	
	public:
		void get_details()
		{
			cout<<"Name Of Depositor : "<<endl;
			cin>>name;
			cout<<"Enter your Account Number : "<<endl;
			cin>>acc_no;
			cout<<"Enter Accout type : "<<endl;
			cin>>acc_type;
			cout<<"Enter Balance in The Account : "<<endl;
			cin>>balance;
		}
		
		float deposite(){
			cout<<"Enter Deposite Amount : "<<endl;
			cin>>dp_amt;
			balance=dp_amt+balance;
			return balance;	
		}
		
		
		float withdraw()
		{
			cout<<"enter withdraw amount : "<<endl;
			cin>>wd_amt;
			if(wd_amt>balance)
			{
				cout<<"insufficient balance";
			}
			else{
				balance=balance-wd_amt;
				return balance;	
			}	
		}
		void display()
		{
			cout<<"enter customer name  is "<<name<<endl;
			cout<<"your total balance is "<<balance<<endl;
		}
};
int main()
{
	bank b;
	b.get_details();
	cout<<"After deposite of amount"<<b.deposite()<<endl;
	cout<<"your after withdraw amount is : "<<b.withdraw()<<endl;
	b.display();
	return 0;
}
		