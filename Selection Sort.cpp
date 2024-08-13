#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
	for(int i=0;i<=n-2;i++){
		int mini=i;
		for(int j=i;j<=n-1;j++){
			if(arr[j] < arr[mini]){
				mini=j;
			}
		}
		int temp = arr[mini];
		arr[mini] = arr[i];
		arr[i] = temp;
	}
	cout<<"After selection sort:- ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"Enter size of Array:- ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements inside Array:- ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selection_sort(arr,n);

	return 0;
}

