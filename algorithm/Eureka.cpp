#include <iostream>
using namespace std;

int isTrue[3000] = {0,};

void Rcomb(int arr[], int set_size, int m, int n, int index){
	int result = 0;
	if(set_size == n){
		for(int i = 0; i< set_size; i++){
			result += arr[i] * arr[i] + arr[i];
		}
		isTrue[result/2] = result/2;
		return;
	}
	else if(index == m)
		return;

	arr[set_size] = index;
	Rcomb(arr, set_size + 1, m, n, index);

	Rcomb(arr, set_size, m, n, index + 1);
}


int main(){
	int m = 44;
	int n = 3;
	int * arr = new int[n]();
	int testCaseNumber = 0;
	int number = 0;
	Rcomb(arr, 0, m+1, n, 1);
	cin>>testCaseNumber;
	for(int i = 0;i < testCaseNumber; i++){
		cin>>number;
		if(isTrue[number])
			cout<<1<<"\n";
		else
			cout<<0<<"\n";
	}
	return 0;

}