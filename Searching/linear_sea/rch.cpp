#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int key,n=10,arr[10];
	for(int i=0;i<10;i++){
	cout<<"Enter your "<<i+1<<" value: "<<endl;
	cin>>arr[i];
	}
	for(int i=0;i<10;i++){
		cout<<"Your "<<i+1<<" value is : "<<arr[i]<<endl;
	}
 	cout<<"\n\nEnter your key to find:"<<endl;
 	cin>>key;
 	int result=linearsearch(arr,n,key);
 	if(result!=-1){
 		cout<<"Element found at position :"<<result+1;
	}
	else
	 	cout<<"Element not found";
	return 0;

}
