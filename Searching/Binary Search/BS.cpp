#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int key){
	int low = 0,high = n-1;
	while (low<=high){
	int mid = (low+high)/2;
		if (arr[mid] == key){
			return mid;
		}
	else if(arr[mid] < key){
		low = mid+1;
		}
	else
		high = mid-	1;	
	}
	return -1;	
}
int main(){
	int arr[]={22,33,44,55,66,77,88,99};
	int n = 8 ,key;
	for(int i=0;i<8;i++){
		cout<<"Your "<<i+1<<" value is :\n"<<arr[i]<<endl;
	}
	cout<<"Enter your key to find:"<<endl;
 	cin>>key;
 	int result = binarysearch(arr,n,key);
 	if(result!=-1){
 		cout<<"Element found at postion :"<<result+1;
 	}
 	else
		cout<<"Element not found"; 
	return 0;		
	}
	
