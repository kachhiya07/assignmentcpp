//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;
class person{
	protected:
	int age;
	string name;
	public:
	void get_data()
	{
		cout<<"enter person name:";
		cin>>name;
		cout<<"enter age is:";
		cin>>age;
		
	}
};
class student{
	protected:
		float pr;
		public:
			void get_pr(){
		
			cout<<"enter student pr:";
			cin>>pr;
		}
	
};
class teacher: public person,public student{
	protected:
		int salary;
		public:
			void get_salary(){
		
			cout<<"enter monthly salary:";
			cin>>salary;
		}
		void display()
		{
			cout<<"person name:"<<name<<endl;
			cout<<"age is:"<<age<<endl;
			cout<<"pr is:"<<pr<<endl;
			cout<<"salary is:"<<salary;
		}
};
int main()
{
	teacher t;
	t.get_data();
	t.get_pr();
	t.get_salary();
	t.display();

}