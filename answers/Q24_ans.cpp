// WAP to demonstrate the concept of exception handling in C++
#include <iostream>
using namespace std;

int main(){
	int x = -1;
	cout<<"Before try "<<endl;
	
	try{
		cout<<"Inside try"<<endl;
		if(x < 0){
			throw x;
			cout<<"After throw (Never executed)"<<endl;
		}
	}
	catch (int x){
		cout<<"Exception caught"<<endl;
	}
	
	cout<<"After catch (will be executed)"<<endl;
	
	
	return 0;
}
