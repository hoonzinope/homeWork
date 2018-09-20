#include <iostream>
using namespace std;

int priemNumber[10001];

void prime(){
	for(int i = 2; i<= 10000; i++)
		priemNumber[i] = 1;

	for(int i = 2; (i*i) <= 10000; i++){
		if(priemNumber[i] == 1){
			for(int j = i*i; j <= 10000; j+= i)
				priemNumber[j] = 0;
		}
	}
}

void check(int number){
	int index = number/2;
	while(index > 0){
		if(priemNumber[index] == 0)
			index = index-1;
		else{
			if(priemNumber[number - index] == 1){
				cout<<index<<" "<<number-index<<"\n";
				return;
			}
			else
				index = index -1;
				continue;
		}
	}
	return;
}


int main(){
	int testCaseNumber = 0;
	int number = 0;
	cin>>testCaseNumber;
	prime();
	for(int i = 0;i < testCaseNumber; i++){
		cin>>number;
		check(number);
	}
	return 0;
}