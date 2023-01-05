//WAP to demonstrate various logical operators in C++

#include <iostream>
using namespace std;
int main(){
	
	//declaring two integer variables
	int  a =5, b= 9;
	
	// Logical AND(&&) operator
	cout<<((a==0) && (a>b))<<endl;
	cout<<((a==0) && (a<b))<<endl;
	cout<<((a==5) && (a>b))<<endl;
	cout<<((a==5) && (a<b))<<endl;
	
	//Logical OR(||) operator
	cout<<((a==0) || (a>b))<<endl;
	cout<<((a==0) || (a<b))<<endl;
	cout<<((a==5) || (a>b))<<endl;
	cout<<((a==5) || (a<b))<<endl;
	
	
	//Logical NOT(!) operator
	cout<< !(a==0) <<endl;
	cout<< !(a==5) <<endl;
	
	
	return 0;
}
