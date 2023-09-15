//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class addition{
	public:
		addition(int a,int b)
		{
			cout<<"addition is :"<<a+b<<endl;
		}
};
class subtraction{
	public:
		subtraction(int a,int b)
		{
			cout<<"subtraction"<<a-b<<endl;
		}
};
class multiple{
	public:
		multiple(int a,int b)
		{
			cout<<"multiplication"<<a*b<<endl;
		}
};
class division{
	public:
		division(int a,int b)
		{
			cout<<"division"<<a/b<<endl;
		}
};
int main()
{
	int A,B,ch;
	cout<<"enter value of A :"<<endl;
	cin>>A;
	cout<<"enter value of B :"<<endl;
	cin>>B;
	
	cout<<"enter your choice:"<<endl;
	cin>>ch;
	
		if(ch == 1)
		{
			addition a(A,B);
		}
		else if(ch == 2)
		{
			subtraction b(A,B);
		}
		else if(ch == 3)
		{
			multiple c(A,B);
		}
		else if(ch == 4)
		{
			division d(A,B);
		}
		else{
			cout<<"enter valid number";
		}
	
}