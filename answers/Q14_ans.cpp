// WAP to demonstrate the concept of function overloading.

#include <iostream>
using namespace std;

//creating three functions with same name but different arguments
	void display(int i){
		cout<<"I am an Integer Value : "<<i<<endl;
		
	}
	void display(double f){
		cout<<"I am a Double value : "<<f<<endl;
	}
	void display(char const *c){
		cout<<"I am a Character value : "<<c<<endl;
	}

int main(){
	display(10);
	display(10.10);
	display("ten");
	
	return 0;
}
