#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int NumberOfSet(int arr[], int arrlength, int targetNumber){
	sort(arr, arr+arrlength);
	int left = 0, right = arrlength - 1;
	int min = targetNumber;
	int count = 0;
	int temp = 0;
	while()
	return count;
}

int main(){
	int arrlength = 0;
	int targetNumber = 0;
	int testCaseNumber = 0;
	int arr[10000000];
	cin>>testCaseNumber;
	for(int i = 0;i < testCaseNumber; i++){
		cin>>arrlength>>targetNumber;
		for(int j = 0; j < arrlength; j++)
			cin>>arr[j];
		cout<<NumberOfSet(arr,arrlength,targetNumber)<<"\n";
	}
	return 0;
}