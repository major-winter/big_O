#include<iostream>
using namespace std;

int removeZero(int n) {
  int nWithoutZero = 0;
  int digit = -1;
  int pw = 1;
  while (true) {
    digit = n % 10;
    n = n / 10;
    if (digit != 0) {
      nWithoutZero += digit * pw;
      pw *= 10;
    }

    if (n == 0) break;
  }
  return nWithoutZero;
}

int main () {
  int a, b;
  cin >> a >> b;
  int c = a + b;
  int aWithoutZero = removeZero(a);
  int bWithoutZero = removeZero(b);
  int cWithoutZero = aWithoutZero + bWithoutZero;
  if (cWithoutZero == int(removeZero(c))) cout << "YES";
  else cout << "NO";
  return 0;
}
