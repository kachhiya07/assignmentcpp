#include<iostream>
using namespace std;
class A{
	public:
		int area(float l,float b)
		{ //rectangle
			cout<<"area of rectengle is:"<<l*b<<endl;			
		}
		int area(int h,int b)
		{	//triangle
			cout<<"area of triangle is:"<<h*b<<endl;
		}
		int area(int r)
		{		//circle
			const int pi=3.14;
			cout<<"area of circle is:"<<pi*r*r<<endl;
		}
		int area(double s)
		{		//square
			cout<<"area of square is:"<<s*s<<endl;
		}
};
int main(){
	A a;
	a.area(2,3);
	a.area(3,4);
	a.area(2);
	a.area(4);
	
}