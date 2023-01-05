// WAP to demonstrate the use of array of objects.

#include <iostream>
using namespace std;
class myClass{
	int x;
	public:
		void setX(int i){
			x = i;
		}
		int getX(){
			return x;
		}
};
int main(){
	myClass obs[4];
	for(int i=0;i<4;i++){
		obs[i].setX(i);
	}
	for(int i=0;i<4;i++){
		cout<<"obs["<<i<<"].getX():"<<obs[i].getX()<<endl;
	}
	
	return 0;
}
