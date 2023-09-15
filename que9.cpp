//Assume a class cricketer is declared. Declare a derived class batsman from
//	cricketer. Data member of batsman. Total runs, Average runs and best
//		performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)
#include<iostream>
using namespace std;
class  cricketer{
	public:
	int total_runs,avg_runs,players;
	string best;

};
class batsman:public cricketer{
	public:
		void get()
		{
			cout<<"enter total runs:";
			cin>>total_runs;
			cout<<"enter average runs:";
			cin>>avg_runs;
			cout<<"enter of player:";
			cin>>players;
			cout<<"good player:";
			cin>>best;
		}
		
		int avg()
		{
			avg_runs=total_runs/players;
			cout<<"average of betting:"<<avg_runs<<endl;
			return avg_runs;
		 } 
		 
		void display()
		{
			cout<<"total mark is :"<<total_runs<<endl;
			cout<<"average run of the match:"<<avg_runs<<endl;
			cout<<"man of the match "<<best<<endl;
		}
		
};
int main()
{
	batsman b;
	b.get();
	b.avg();
	b.display();
		
}