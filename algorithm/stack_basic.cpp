#include <iostream>
#include <stack>
using namespace std;

int bracket(int length, char * s){
	stack<char> st;
	for(int i = 0; i< length; i++){
		if(s[i] == '(' || s[i] == '{' || s[i] == '<' || s[i] == '[')
			st.push(s[i]);
		else
			st.pop();
	}
	if(!st.empty())
		return 0;
	else
		return 1;
}

int main(){
	int length = 0;
	char s[1000000];
	for(int  i = 1; i< 11; i++){
		cin>>length>>s;
		cout<<"#"<<i<<" "<<bracket(length, s)<<"\n";
		char s[1000000];
	}
	return 0;
}