#include <iostream>
using namespace std;

int solveHenry(int a, int b){
	int r = 0;
	int g = 0;
	while(a){
		r = (b - 1)/a +1;
		a = (a * r -b);
		b = (b * r);
	}
	return r;

}


int main(){
	int testCaseNumber = 0;
	int a = 0, b = 0;
	int result = 0;
	cin>>testCaseNumber;
	for(int i = 0;i < testCaseNumber; i++){
		cin>>a>>b;
		result = solveHenry(a,b);
		cout<<result<<"\n";
	}
}