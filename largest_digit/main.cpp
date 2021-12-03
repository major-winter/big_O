#include<iostream>
using namespace std;

void largestDigit(long n) {
  int max = 0;
  int digit = 0;
  while(true) {
    digit = n % 10;
    n = n / 10;
    if (digit > max) max = digit;
    if (n == 0) break;
  }
  cout << max;
}

int main () {
  long n;
  cin >> n;
  largestDigit(n);
  return 0;
}
