#include <bits/stdc++.h>
#define N 1000001
using namespace std;

bool prime[N];

void seive(){

	for(int i = 4; i <= N; i+=2) prime[i] = true;
	for(int i = 3; i * i <= N; i +=2){
		if(!prime[i]){
			for(int j = i * i; j <= N; j+= i<<1) 
				prime[j] = true;
		}
	} 	
}

int main(){
	
	int n;
	cin >> n;
	seive();
	return 0;
}