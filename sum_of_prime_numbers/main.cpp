#include<iostream>
using namespace std;

int isPrime(int n) {
  if (n < 2) return false;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int sumOfPrime(int n) {
	int sum = 0;
  for (int i = 2; i < n; i++) {
    if (isPrime(i)) sum += i;
  }
  return sum;
}

int main () {
  int n;
  cin >> n;
  cout << sumOfPrime(n);
  return 0;
}
