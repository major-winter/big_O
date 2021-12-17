#include<iostream>
using namespace std;

int isPrime (int n) {
  if (n < 2) return false;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int findPrime(int &a, int &index, int &n) {
  cin >> a;
  n--;
  if (isPrime(a)) return index;
  if (n == 0) return -1;
  else {
    index++;
    return findPrime(a, index, n);
  }
}

int main () {
  int n, index;
  cin >> n;
  index = 0;
  int a;
  int ans = findPrime(a, index, n);
  cout << ans;
  return 0;
}
