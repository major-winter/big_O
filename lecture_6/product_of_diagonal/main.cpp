#include<iostream>
using namespace std;

int isPrime(int n) {
  if (n < 2) return 0;

  for (int i = 2; i < n; i++) {
    if (n % i == 0) return 0;
  }

  return 1;
}

void prodOfPrimes(long long &prod, int n) {
  if (isPrime(n)) prod = (prod * n) % 1000003;
}

int main () {
  int n;
  cin >> n;
  int a[1000][1000];
  long long prod = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  int j = 0;
  for (int i = 0; i < n; i++) {
    j = n - i - 1;
    prodOfPrimes(prod, a[i][j]);
  }

  cout << prod << endl;
}
