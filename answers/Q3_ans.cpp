//WAP to demonstrate the concept of explicit type conversion

#include <iostream>
using namespace std;
int main(){
	
	//declaring a variable having data type double
	double double_num = 3.56;
	cout<<"double_num = "<<double_num<<endl;
	
	//explicitly typecasting the double variable into an integer
	int int_num = (int)double_num;
	cout<<"int_num = "<<int_num<<endl;
	
	return 0;
}
