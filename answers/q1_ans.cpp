#include <iostream>
using namespace std;
int main(){
	// declaring a variable
	int a = 10;
	// declaring a reference variable for it
	int &ref = a;
	
	// Printing value of ref
	cout<<"ref = "<<ref<<endl;
	
	//changing the value of reference variable
	ref = 30;
	
	// Printing value of a
	cout<<"a = "<<a<<endl;
}
