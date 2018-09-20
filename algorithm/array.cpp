#include <iostream>
using namespace std;

int function(int arr[], int arrlen, int startPoint){
	if(startPoint > arrlen-1){
		return 0;
	}
	else if(arr[startPoint] == 0){
		return 1;
	}
	else{
		int index = startPoint + arr[startPoint];
		return function(arr, arrlen, index);
	}
}


int main(){
	int testCaseNumber = 0;
	int arrlen = 0;
	int startPoint = 0;
	int arr[11];
	int check[11] = {0,};
	cin>> testCaseNumber;
	for(int i = 0;i < testCaseNumber; i++){
		cin>>arrlen>>startPoint;
		for(int j = 0; j< arrlen; j++)
			cin>>arr[j];
		cout<<function(arr, arrlen, startPoint)<<"\n";
	}
}