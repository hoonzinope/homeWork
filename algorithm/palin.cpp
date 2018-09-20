#include <iostream>
#include <cstring>
using namespace std;

int palin(char arr[], int first, int last){
	if (last <= first)
		return 1;
	else if(arr[first] != arr[last])
		return 0;
	else
		return palin(arr, first+1, last-1);
}

int main(){
	int testCaseNumber = 0;
	char str[1001];
	cin>>testCaseNumber;
	for(int i = 0; i< testCaseNumber; i++){
		cin>>str;
		cout<<palin(str, 0, strlen(str)-1)<<"\n";
	}
	return 0;
}