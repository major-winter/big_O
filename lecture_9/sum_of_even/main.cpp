#include<iostream>
using namespace std;

int isEven (int n) {
  if (n % 2 == 0) return true;
  return false;
}

void sumOfEven (int &n, int &a) {
  int b;
  cin >> b;
  n--;
  if (isEven(b)) a += b;
  if (n == 0) return;
  return sumOfEven(n, a);
}

int main () {
  int n;
  cin >> n;
  int a = 0;
  sumOfEven(n, a);
  cout << a;
  return 0;
}
