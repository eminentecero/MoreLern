#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<short> vec_A;
	vector<short> vec_B;
	vector<short> answer;
	
	string A, B;
	
	cin >> A >> B;
	
	for(char & char_A : A){
		vec_A.push_back(char_A - '0');
	}
	
	for(char & char_B : B){
		vec_B.push_back(char_B - '0');
	}
	
	reverse(vec_A.begin(), vec_A.end());
	reverse(vec_B.begin(), vec_B.end());
	int size_A = vec_A.size() , size_B = vec_B.size();
	
	int leng = size_A > size_B ?  size_A : size_B;
	int temp;
	short isCarry = 0;
	
	for(int i=0; i<leng; i++){
		if(i+1 >= size_A) vec_A.push_back(0);
		if(i+1 >= size_B) vec_B.push_back(0);
		
		temp = isCarry + vec_A[i] + vec_B[i];
		if(temp > 9){
			isCarry = 1;
			answer.push_back(temp % 10);
		}
		else{
			isCarry = 0;
			answer.push_back(temp);
		}
	}
	
	if(isCarry) answer.push_back(isCarry);
	
	reverse(answer.begin(), answer.end());
	
	for(int i=0; i < answer.size(); i++){
		cout << answer[i];
	}

	return 0;
}