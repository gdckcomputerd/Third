// WAP to demonstrate the concept of call by value methof of argument passing.

#include <iostream>
using namespace std;

//declaring the function
void swap(int x, int y);
int main(){
	int a = 100;
	int b = 200;
	cout<<"Before swap, Value of a is : "<<a<<endl;
	cout<<"Before swap, Value of b is : "<<b<<endl;
	
	// calling the function
	swap(a,b);
	
	cout<<"After swap, Value of a is : "<<a<<endl;
	cout<<"After swap, Value of b is : "<<b<<endl;
	
	return 0;
}

	// Defining the swap function
	void swap(int x, int y){
		int temp = x;
		x = y;
		y = temp;
	}
