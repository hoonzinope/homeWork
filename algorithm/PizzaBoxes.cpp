#include <iostream>
using namespace std;

int sumOfBoxes(int arr[][1000], int sideArr[], int sideSize, int frontArr[], int frontSize, int check[][1000]){

	int max = 0;
	for(int i = 0; i< sideSize; i++){
		max = arr[i][0];
		for(int j = 0; j< frontSize; j++){
			max = max > arr[i][j] ? max : arr[i][j];
		}
		sideArr[i] = max;
		//cout<<sideArr[i]<<" ";
	}
	//cout<<"side complete!\n";
	for(int i = 0; i< frontSize; i++){
		max = arr[0][i];
		for (int j = 0; j< sideSize; j++){
			max = max > arr[j][i] ? max : arr[j][i];
		}
		frontArr[i] = max;
		//cout<<frontArr[i]<<" ";
	}
	//cout<<"front complete!\n";
	for(int i = 0; i< sideSize; i++){
		for(int j = 0; j< frontSize; j++){
			if(sideArr[i] > arr[i][j])
				check[i][j]++;
		}
	}
	
	for(int i = 0; i< frontSize; i++){
		for(int j = 0; j< sideSize; j++){
			if(frontArr[i] > arr[j][i])
				check[j][i]++;
		}
	}
	//cout<<"check complete!\n";
	double result = 0;
	for(int i = 0; i< sideSize; i++){
		for(int j =0; j< frontSize; j++){
			if(check[i][j] == 2)
				result+= arr[i][j];
		}
	}
	return result;
}



int main(){
	int sideSize = 0;
	int frontSize = 0;
	int arr[1000][1000];
	int check[1000][1000];
	int sideArr[1000];
	int frontArr[1000];
	int testCaseNumber = 0;
	cin>>testCaseNumber;
	for(int i = 0;i < testCaseNumber; i++){
		cin >> sideSize >> frontSize;
		for(int j = 0; j < sideSize; j++){
			for(int k = 0; k < frontSize; k++){
				cin>>arr[j][k];
				check[j][k] = 0;
			}
		}
		cout<<(int)sumOfBoxes(arr, sideArr,sideSize, frontArr,frontSize, check)<<"\n";
	}
	return 0;
}