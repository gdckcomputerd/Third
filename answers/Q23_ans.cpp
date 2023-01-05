//WAP to demonstrate the concept of public and protected inheritance
#include <iostream>
using namespace std;
class Base{
	private:
		int priv = 1;
	protected:
		int prot = 2;
		int ected = 3;
	public:
		int pub = 4;
		int lic = 5;
		//function to access private member
		int getPriv(){
			return priv;
			
		}
};
//Deriving a public class
class PublicDerived : public Base{
	public:
		//Function to access protected member from base
		int getProt(){
			return prot;
		}
};
//Deriving a protected class
class ProtectedDerived : protected Base{
	public:
		//Function to access protected member from base
		int getEcted(){
			return ected;
		}
		
		//Function to access public member from base
		int getLic(){
			return lic;
		}
};

int main(){
	
	PublicDerived Object1;
	cout<<"Private = "<<Object1.getPriv()<<endl;
	cout<<"Protected = "<<Object1.getProt()<<endl;
	cout<<"Public = "<<Object1.pub<<endl;
	
	ProtectedDerived Object2;
	cout<<"Private cannot be accessed"<<endl;
	cout<<"Protected = "<<Object2.getEcted()<<endl;
	cout<<"Public = "<<Object2.getLic()<<endl;
	
	
	return 0;
}
