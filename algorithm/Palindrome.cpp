#include <iostream>
using namespace std;

int Palindrome(int number){
	int checkNumber;
	int checkArr[21] = {};
	for(int i = 2; i<= 64; i++){
		// cout<<i<<"th"<<"\n";
		int length = 0;
		checkNumber = number;
		while(checkNumber >= i){
			checkArr[length++] = checkNumber % i;
			checkNumber = checkNumber/i;
		}
		checkArr[length++] = checkNumber;
		// for(int i = 0; i< length; i++){
		// 	cout<<checkArr[i];
		// }
		// cout<<"\n";
		// cout<<length<<"\n";
		int j = 0;
		for(int i =0; i< length /2; i++){
			if(checkArr[i] != checkArr[length -1 -i])
				j = 1;
		}
		if(j == 0)
			return 1;
	}
	return 0;
}


int main(){
	int testCaseNumber = 0;
	int number = 0;
	int result = 0;
	cin>> testCaseNumber;
	for(int i = 0;i < testCaseNumber; i++){
		cin>>number;
		result = Palindrome(number);
		cout<<result<<"\n";
	}
	return 0;
}