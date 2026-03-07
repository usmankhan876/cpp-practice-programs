#include<iostream>
using namespace std;

int main(){
	cout<<"Arrays\n\n";
	
	int arr[5]={2,3,4,6,8};
	
	
//	cout<<arr[0];
//	cout<<endl;
//	cout<<arr[1];
//	cout<<endl;
//	cout<<arr[2];
//	cout<<endl;
//	cout<<arr[3];
//	cout<<endl;
//	cout<<arr[4];
//	cout<<endl;	

//	for(int i=0; i<5; i++){
//		cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
//	}
//	
	int values[5];
//	values[0] = 10;
//	values[1] = 5;
	
	
//	
//	cout<<"Enter value at values[3]:"; 
//	cin>>values[3];
//	
//	cout<<"Enter value at values[4]:"; 
//	cin>>values[4];
//	
	for(int i=0; i<5; i++){
	 cout<<"Enter value at values["<<i<<"]:"; 
	 cin>>values[i];
	}
	
	cout<<"\n\nTotal Array values:\n\n";
	for(int i=0; i<5; i++){
		cout<<"values["<<i<<"] = "<<values[i]<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
