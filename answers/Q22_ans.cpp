// WAP to demonstrate the concept of multilevel inheritance

#include <iostream>
using namespace std;
class myClass{
	public:
		void myFunction(){
			cout<<"Some content in parent class";
		}
};
class myChild : public myClass {};

class myGrandChild : public myChild {};
int main(){
	
	myGrandChild myObj;
	myObj.myFunction();
	
	return 0;
}
