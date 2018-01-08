#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(void){

unsigned int number = 2;
vector<unsigned int> primes;
bool numberGood = 1;

while(primes.size() < 10001){
	numberGood = 1;
	for (unsigned int j = 0; j < sqrt(double(primes.size())); ++j) {
		if (number % primes[j] == 0){
			numberGood = 0;
			break;
		}
	}
	if (numberGood){
		primes.push_back(number);
	}
	++number;
}
cout<<primes[primes.size()-1]<<"\n";
return 0;
}
