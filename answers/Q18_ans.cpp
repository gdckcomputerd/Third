// WAP to demonstrate the concept of constructor overloading

#include <iostream>
using namespace std;
class Construct{
	public:
		float area;
		//no parameter constructor
		Construct(){
			area = 0;
		}
		//constructor with two parameter
		Construct(int a,int b){
			area = a*b;
		}
		void display(){
			cout<<area<<endl;
		}
};
int main(){
	
	Construct o;
	Construct o1(10,20);
	o.display();
	o1.display();
	
	return 1;
}
