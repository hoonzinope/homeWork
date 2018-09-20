#include <iostream>
#include <stack>
using namespace std;

int evalBracket(char bracket[], int bracketLength){
	stack<char> st;

	for(int i = 0;i < bracketLength; i++){
		if(bracket[i] == '(' || bracket[i] == '[' || bracket[i] == '{' || bracket[i] == '<'){
			st.push(bracket[i]);
		}
		else{
			if(st.empty())
				return 0;

			if(bracket[i] == ')'){
				if(st.top() == '(')
					st.pop();
				else
					return 0;
			}
			else if(bracket[i] == '}'){
				if(st.top() == '{')
					st.pop();
				else
					return 0;
			}else if(bracket[i] == '>'){
				if(st.top() == '<')
					st.pop();
				else
					return 0;
			}else if(bracket[i] == ']'){
				if(st.top() == '[')
					st.pop();
				else
					return 0;
			}
		}
	}

	if(!st.empty())
		return 0;
	else
		return 1;
}

int main(){
	char  bracket[1000];
	int bracketLength = 0;
	for(int i = 0;i < 10; i++){
		cin>>bracketLength;

		for(int j = 0; j< bracketLength; j++){
			cin>>bracket[j];
		}

		cout<<"#"<<i+1<<" "<<evalBracket(bracket, bracketLength)<<"\n";
	}
	return 0;
}