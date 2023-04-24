#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
	bool swapstatus = false;
	for(int i = 0; i <= n-2; i++){
		int maximum = i;
		for(int j = i; j <= n-1; j++){
			if(arr[j] > arr[maximum]){ 
				maximum = j;
				swapstatus = true;
			}
		}
		if(swapstatus == false) break;
		swap(arr[maximum], arr[i]);
	}
}

void printarray(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	selection_sort(arr,n);
	printarray(arr,n);
    return 0;
}