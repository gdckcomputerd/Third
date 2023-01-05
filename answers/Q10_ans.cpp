/* Create a 2D array of integer elements having 3 rows and 4 columns and also
   initialize it.Create a function named "display" to display the elements of
   array by passing array to it */
   
#include <iostream>
using namespace std;

// creating the display function
void display(int arr[3][4]){
	cout<<"Displaying elements: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"num["<<i<<"]["<<j<<"]:"<<arr[i][j]<<endl;
		}
	}
}

int main(){
	
	//creating an integer array
	int arr[3][4] = {
						{0,1,2,3},
						{4,5,6,7},
						{8,9,10,11}
	                };
	display(arr);
	
	
	return 0;
}
