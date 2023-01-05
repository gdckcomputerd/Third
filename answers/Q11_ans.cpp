//WAP to demonstrate the cncept of default arguments

#include <iostream>
using namespace std;
// Calling the function 
void display(char = '*', int =3);
int main(){
	
	int count = 5;
	cout<<"No Argument passed: "<<endl;
	display();
	
	cout<<"First Argument passed: "<<endl;
	display('#');
	
	cout<<"Both Arguments passed: "<<endl;
	display('$', count); 
	
	return 0;
}
//Creating the function
void display(char c, int count){
	for(int i=1;i<=count;i++){
		cout<<c;
	}
	cout<<endl;
}
