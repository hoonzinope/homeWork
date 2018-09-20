#include <iostream>
#include <stack>
using namespace std;

int main(){
	int testNumber = 0;
	int Num = 0;
	int Node, other_Node;
	for(int i = 0;i < 10; i++){
		cin>>testNumber>>Num;
		int size[2][100] = {0,};
		for(int i =0; i <Num; i++){
			cin>>Node>>other_Node;
			if(size[0][Node] != 0)
				size[1][Node] = other_Node;
			else
				size[0][Node] = other_Node;
		}

		for(int i = 0; i< 2; i++){
			for(int j = 0; j < 100; j++)
				cout<<size[i][j]<<" ";
			cout<<"\n";
		}
	}
	return 0;
}