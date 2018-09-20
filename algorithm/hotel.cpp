#include <iostream>

int main(){
	int testCaseNumber = 0;
	int a = 0, b = 0,people = 0;
	std::cin>>testCaseNumber;
	for(int i = 0; i< testCaseNumber; i++){
		std::cin>>a>>b>>people;
		int y = people % a;
		int x = (people / a) +1;
		if (y < 1){
			y = a;
			x = (people / a);
		}
		if (x < 10){
			std::cout<<y<<0<<x<<'\n';
		}
		else{
			std::cout<<y<<x<<'\n';
		}
	}
	return 0;
}