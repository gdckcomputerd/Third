//WAP to demonstrate the concept of reference variable in C++

#include <iostream>
using namespace std;
int main(){
	// Declaring a variable
	int a = 10;
	//Printing the value of a 
	cout<<"a = "<<a<<endl;
	
	// Declaring a reference variable
	int &ref = a;
	// printing the value of reference variable
	cout<<"ref = "<<ref<<endl;
	// first changing and then printing the value of a
	a = 7;
	cout<<"a = "<<a<<endl;
	
	return 0;
}
