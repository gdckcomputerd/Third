// WAP to demonstrate the use of public and private access modifiers in a class

#include <iostream>
using namespace std;

//Creating class
class Sample{
	private:
		int age;
	public:
		void displayAge(int a){
			age = a;
			cout<<"Age = "<<age<<endl;
		}
};
int main(){
	int ageInput;
	Sample Obj;
	cout<<"Enter your Age: ";
	cin>>ageInput;
	Obj.displayAge(ageInput);
	
	return 0;
}
