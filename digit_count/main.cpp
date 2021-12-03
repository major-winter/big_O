#include<iostream>
using namespace std;

void digitCount(int n) {
  int digits = 0;
  while(true) {
    n = n / 10;
    digits++;
    if (n == 0) {
      break;
    }
  }
  cout << digits;
}

int main () {
  int n;
  cin >> n;
  digitCount(n);
  return 0;
}
