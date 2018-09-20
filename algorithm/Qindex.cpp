#include <iostream>
#include <algorithm>
using namespace std;

int Qindex(int arr[], int arrLength){
	sort(arr, arr+ arrLength);
	
	for(int i = arrLength; i>= 0; i--){
		if(i <= arr[arrLength - i])
			return i;//qindex = arr[i];
	}
}


int main(){
	int testCaseNumber = 0;
	cin>>testCaseNumber;
	int arrLength = 0;
	int arr[1001];
	for(int i = 0; i< testCaseNumber; i++){
		cin>>arrLength;
		for(int j = 0; j < arrLength; j++){
			cin>>arr[j];
		}
		cout<<Qindex(arr, arrLength)<<"\n";
	}
	return 0;
}