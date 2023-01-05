//WAP to demonstrate various string handling functions
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string str = "ComputerApplications";
	string strin;
	
	string str1 = "Semester";
	string str2 = "Third";
	
	cout<<"The initial string is : "<<str<<endl;
	
	//1. getline()
	getline(cin,strin);
	cout<<"The string you entered using getline function is:"<<strin<<endl;
	
	//2. push_back()
	str.push_back('s');
	cout<<"The string after push_back() operation is : "<<str<<endl;
	
	
	
	//3. capacity()
	cout<<"The capacity of initial string is : ";
	cout<<str.capacity()<<endl;
	
	//4. length()
	cout<<"The length of initial string is : "<<str.length()<<endl;
	
	//5. swap()
	str1.swap(str2);
	cout<<"After swap , string1 = "<<str1<<endl;
	cout<<"After swap , string2 = "<<str2<<endl;
	
	//6. append()
	cout<<str2.append(str1)<<endl;
	
	//7. compare()
	cout<<str1.compare(str2)<<endl;
	
	//8. size()
	cout<<"The size of initial string is : "<<str.size()<<endl;
	
	return 0;
}
