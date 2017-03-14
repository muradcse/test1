#include <bits/stdc++.h>

using namespace std;


bool primeTest(int n){

	if(n == 2) return true;
	if(n > 2 && n % 2 == 0) return false;
	for(int i = 3; i * i <= n; i +=2){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	
	int number;
	scanf("%d",&number);
	bool isPrime = primeTest(number);
	if(isPrime) printf("%d is prime number\n");
	else printf("%d is not prime number\n");
	return 0;
}
