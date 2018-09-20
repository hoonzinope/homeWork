#include <iostream>
using namespace std;

int fibo(int n){
	if(n <= 1)
		return n;
	else
		return fibo(n-1) + fibo(n-2);
}

int main(){
	int testCaseNumber = 0;
	int number = 0;
	cin>>testCaseNumber;
	for(int i = 0;i < testCaseNumber; i++){
		cin>>number;
		cout<<fibo(number)<<"\n";
	}
	return 0;
}