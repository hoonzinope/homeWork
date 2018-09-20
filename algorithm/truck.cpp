#include <iostream>
#include <queue>
using namespace std;

int solve(int numberOftruck, int bridgeLength, int weightLimit, int * truck){
	queue<int> q;
	for (int i = 0 ;i< bridgeLength; i++)
		q.push(0);
	int time = 0;
	int totalSum = 0;
	int index = 0;
	while(true){
		if(index == numberOftruck){
			time += bridgeLength;
			break;
		}
		if(totalSum + truck[index] > weightLimit){
			if(totalSum - q.front() + truck[index] <= weightLimit){
				totalSum -= q.front();
				q.pop();
				q.push(truck[index++]);
				totalSum += q.back();
				time++;
			}else{
				totalSum -= q.front();
				q.pop();
				q.push(0);
				totalSum += q.back();
				time++;
			}
		}
		else{
			totalSum -= q.front();
			q.pop();
			q.push(truck[index++]);
			totalSum += q.back();
			time++;
		}
	}
	return time;
}

int main(){
	int numberOftruck = 0;
	int bridgeLength = 0;
	int weightLimit = 0;
	int testCaseNumber = 0;
	cin>> testCaseNumber;
	for(int i =0 ; i < testCaseNumber; i++){
		cin >> numberOftruck >> bridgeLength >> weightLimit;
		int * truck = new int[1000];
		for(int i = 0; i < numberOftruck; i++){
			cin>>truck[i];
		}
		int time = solve(numberOftruck, bridgeLength, weightLimit, truck);
		cout<<time<<'\n';
	}
	return 0;
}