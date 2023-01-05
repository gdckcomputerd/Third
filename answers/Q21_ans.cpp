// WAP to demonstrate the concept of multiple inheritance

#include <iostream>
using namespace std;
class Mammal{
	public:
		Mammal(){
			cout<<"Mammals can give direct birth"<<endl;
		}
		
};
class wingedAnimal{
	public:
		wingedAnimal(){
			cout<<"Winged animal can flap"<<endl;
		}
};

class Bat: public Mammal, public wingedAnimal{
	public:
	Bat(){
	   cout<<"I am Bat";
}
};
int main(){
	
	Bat b1;
	
	return 0;
}
