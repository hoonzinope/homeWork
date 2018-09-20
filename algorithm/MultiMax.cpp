#include <iostream>
#include <algorithm>
using namespace std;

int solveMax(int* arr, int arrlength){
	int temp = 0;
	sort(arr, arr+ arrlength);

	
	int max = -100000;
	
	max = max > arr[0] * arr[1] ? max : arr[0] * arr[1];
	
	max = max > arr[0] * arr[1] * arr[arrlength-1] ? max : arr[0] * arr[1] * arr[arrlength-1] ;
	
	max = max > arr[arrlength-2] * arr[arrlength-1] ? max : arr[arrlength-2] * arr[arrlength-1];
	
	max = max > arr[arrlength-3] * arr[arrlength-2] * arr[arrlength-1] ? max : arr[arrlength-3] * arr[arrlength-2] * arr[arrlength-1];
	
	return max;

}


int main(){
	int testCaseNumber = 0;
	int testCase = 0;
	int max = 0;
	cin>>testCaseNumber;
	for(int i = 0;i < testCaseNumber; i++){
		cin>>testCase;
		int arr[10000] = {};
		for(int j = 0; j< testCase; j++)
			cin>>arr[j];


		max = solveMax(arr, testCase);
		cout<<max<<"\n";
	}
	return 0;
}