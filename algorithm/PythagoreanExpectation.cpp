#include <iostream>
using namespace std;

void Expectation_calculate(int score[][4], int numberOfTeam, int playNumber, int *return_value){
	int teamScore[1001][2] = {};
	for(int i = 0; i< playNumber; i++){
		teamScore[score[i][0] -1][0] += score[i][2];//win
		teamScore[score[i][0] -1][1] += score[i][3];//lose

		teamScore[score[i][1] -1][0] += score[i][3];//win
		teamScore[score[i][1] -1][1] += score[i][2];//lose
	}

	double max = -1;
	double min = 1000000;
	double result = 0;
	for(int i = 0; i< numberOfTeam; i++){
		double s = teamScore[i][0];
		double a = teamScore[i][1];
		result = (s*s)/((s*s) + (a*a)); 
		max = max > result ? max : result;
		min = min < result ? min : result;
	}

	return_value[0] = max*1000;
	return_value[1] = min*1000;
	return;
}




int main(){
	int testCaseNumber = 0;
	int numberOfTeam = 0;
	int playNumber = 0;
	cin>>testCaseNumber;
	for(int i = 0;i < testCaseNumber; i++){
		int return_value[2] = {0,};
		cin>>numberOfTeam>>playNumber;
		int score[1001][4]={};
		for(int j = 0;j < playNumber; j++){
			for(int k = 0; k < 4; k++){
				cin>>score[j][k];
			}
		}

		Expectation_calculate(score, numberOfTeam, playNumber,return_value);
		cout<<return_value[0]<<"\n";
		cout<<return_value[1]<<"\n";
	}
	return 0;
}