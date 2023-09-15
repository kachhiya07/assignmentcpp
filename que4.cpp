//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class clac{
	public:
		clac()
		{
			int a,b,ch;
			cout<<"enter value of a:";
			cin>>a;
			cout<<"enter value of b:";
			cin>>b;
			cout<<"1.addition"<<endl<<"2.sub"<<endl<<"3.multiplication"<<endl<<"4.divsion"<<endl;
			cout<<"enter your choice:";
			cin>>ch;
			
			switch(ch)
			{
			case 1:
					cout<<" your chois is addition :  "<<a+b;
					break;
				case 2:
					cout<<"your chois is sub : "<<a-b;
					break;
				case 3:
					cout<<"your chois is multiplication : "<<a*b;
					break;
				case 4:
					if(b==0)
					{
						cout<<"not divisible";
						
					}
					else{
						cout<<"your chois is divison : "<<a/b;
					}
					break;
				default:
					
						cout<<"invalid choice";
					
				
			}
			
		}
};



int main()
{
	clac c;
}