// WAP to demonstrate the concept of call by reference method of argument passing

#include <iostream>
using namespace std;

// Call by Pointer method
void swapPointer(int *a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

//Call by Reference using reference varible 
void swapRefVar(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
} 
int main(){
	int a = 4, b = 5;
	int c = 10, d = 12;
	
	//calling swapPointer method
	swapPointer(&a,&b);
	cout<<"The value of a is : "<<a<<" and the value of b is : "<<b<<endl;
	
	//calling swapRefVar method
	swapRefVar(c,d);
	cout<<"The value of c is :"<<c<<" and the value of d is : "<<d<<endl;
	
	return 0;
}
