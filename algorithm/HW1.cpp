#include <iostream>

int main(){
	int a = 0;
	int b = 0;
	int testCaseNumber = 0;
	std::cin>>testCaseNumber;
	for (int i = 0; i < testCaseNumber; i++){
		int result = 0;
		std::cin>>a>>b;
		for (int j = a; j <= b; j++)
			result += j;
		std::cout<<result<<'\n';
	}
	return 0;
}