#include <iostream>
using namespace std;
int sqrt(int n, int m){
	if(m == 1)
		return n;
	else
		return n * sqrt(n, m-1);
}


int main(){
	int testCase = 0;
	int n = 0;
	int m = 0;
	for(int i = 1; i< 11; i++){
		cin>>testCase>>n>>m;
		cout<<"#"<<testCase<<" "<<sqrt(n,m)<<"\n";
	}
	return 0;
}