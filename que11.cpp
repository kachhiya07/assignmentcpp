//Assume that the test results of a batch ofstudents are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marksobtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;
class student{
	protected:
		int roll_no;
	public:
	
		void number(){
		
		cout<<"enter student roll no:";
		cin>>roll_no;
	}
};
class test: public student {
	protected:
	int subject1,subject2,ob_marks;
	public:
		void get_test(){
			cout<<"enter 1st subject mark:";
			cin>>subject1;
			cout<<"enter 2nd subject mark:";
			cin>>subject2;
			ob_marks=subject1+subject2;
			cout<<"obtain mark is:"<<ob_marks<<endl;
			
		}
};
class result: public test{
	int total_marks=200;
	public:
		void total(){
		cout<<"total mark is:"<<total_marks;
			
		}
};
int main()
{
	result obj;
	obj.number();
	obj.get_test();
	obj.total();
}