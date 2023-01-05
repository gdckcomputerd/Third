//WAP to demonstrate the use of break & continue statement

#include <iostream>
using namespace std;
int main(){
	
	int i;
	cout<<"The loop with break statement produces output as: "<<endl;
	for(i=1;i<=5;i++){
		if((i%3)==0)
			break;
		else
			cout<<i<<"  "<<endl;
	}
	
	cout<<"The loop with continue statement produces output as: "<<endl;
	for(i=1;i<=5;i++){
		if((i%3)==0)
			continue;
		else
			cout<<i<<"  "<<endl;
	}
	
	return 0;
}
