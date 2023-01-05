//WAP to demonstrate the use of  manipulators

#include <iostream>
#include <iomanip>  //Manipulators are included in the <iomanip> header file
using namespace std;
int main(){
	// endl manipulator
	cout<<"Hello World! "<<endl<<"hello world!"<<endl;
	
	//setw() manipulator 
	cout<<"The number printed with width 10 is "<<endl;
	cout<<setw(10)<<77<<endl;
	
	//setfill() manipulator
	cout<<setfill('*')<<setw(5)<<6<<endl;
	
	//serprecision() manipulator
	double value = 3.123456767;
	cout<<setprecision(4)<<value<<endl;
	
	return 0;
}
