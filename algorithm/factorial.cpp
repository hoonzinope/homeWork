#include <iostream>
using namespace std;

int fact(int n){
	if(n == 0)
		return 1;
	else
		return n* fact(n-1);
}

int main(){
	int testCaseNumber = 0;
	int number = 0;
	cin>>testCaseNumber;
	for(int i = 0;i < testCaseNumber; i++){
		cin>>number;
		cout<<fact(number)<<"\n";
	}
}