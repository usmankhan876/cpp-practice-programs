#include<iostream>
using namespace std;

int main(){
//	cout<<"Helo world";
	
	int arr[3][5] = {
	{1,2,3,4,5},
	{6,7,8,9,10},
	{11,12,13,14,15}
	};
	
//	cout<<"arr[0][0] = "<<arr[0][0]<<endl;
//	cout<<"arr[0][1] = "<<arr[0][1]<<endl;
//	cout<<"arr[0][2] = "<<arr[0][2]<<endl;
//	cout<<"arr[0][3] = "<<arr[0][3]<<endl;
//	cout<<"arr[0][4] = "<<arr[0][4]<<endl;

	
	for(int i=0; i<3; i++){
		
		cout<<"Row-"<<i+1<<" Data:\n";
		
		for(int j=0; j<5; j++){
			cout<<"Element at arr["<<i<<"]["<<j<<"] = "<<arr[i][j];
			cout<<endl;
			
		}
		
		cout<<endl;
	
	}
	return 0;
}
