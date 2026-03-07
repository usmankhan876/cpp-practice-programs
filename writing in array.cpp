#include<iostream>

using namespace std;

int main(){
	
	cout<<"Writing In Array\n\n";
	
//	int arr[2][3];
//	arr[0][0] = 10;
//	arr[0][1] = 5;
//	arr[0][2] = 6;
//	arr[1][0] = 34;
//	arr[1][1] = 12;
//	arr[1][2] = 7;
//
//	cout<<arr[0][0]<<endl;
//	cout<<arr[0][1]<<endl;
//	cout<<arr[0][2]<<endl;
//	cout<<arr[1][0]<<endl;
//	cout<<arr[1][1]<<endl;
//	cout<<arr[1][2]<<endl;
	
	
//	cin>>arr[0][0];
//	cin>>arr[0][1];
//	cin>>arr[0][2];
//	cin>>arr[1][0];
//	cin>>arr[1][1];
//	cin>>arr[1][2];
//	
//	cout<<"\nArray values:\n";
//	cout<<arr[0][0]<<endl;
//	cout<<arr[0][1]<<endl;
//	cout<<arr[0][2]<<endl;
//	cout<<arr[1][0]<<endl;
//	cout<<arr[1][1]<<endl;
//	cout<<arr[1][2]<<endl;
	
//	Writing in Array Using For loop
	
	int arr[2][3];
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<"Enter Value:";
			cin>>arr[i][j];
		}
	}
	
//	Accessing Array using for loop
	cout<<"The Values in Array = { ";
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
	}
	
	cout<<"}";
	
	
	return 0;
}
