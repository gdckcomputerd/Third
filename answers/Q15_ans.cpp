// WAP demonstrating defining member functions inside and outside class

#include <iostream>
using namespace std;
//Creating a class and defining member functions inside it
class Example{
	private:
		int value;
	public:
		void initial_value(int v){
			value = v;
		}
		void print_value(){
			cout<<"Value = "<<value<<endl;
		}
};

//Creating a class but defining its member functions outside
class Examples{
	private:
		int values;
	public:
		void initial_values(int x);
		void print_values();
};

// Defining member functions outside class
void Examples::initial_values(int x){
	values = x;
}
void Examples::print_values(){
	cout<<"Values = "<<values<<endl;
}
int main(){
	//Creating objects
	Example Obj1;
	Obj1.initial_value(100);
	Obj1.print_value();
	
	Examples Obj2;
	Obj2.initial_values(100);
	Obj2.print_values();
	
	return 0;
}
