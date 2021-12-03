#include<iostream>
#include<math.h>
using namespace std;

int checkSymmetrical(int n, int p) {
  int placeValue = 10;
  int left = 0;
  int right = 0;
  int n1 = n, n2 = n;
  while(true) {
    left = n1 / pow(10, p);
    right = n2 % placeValue;
    n1 = n1 % int(pow(10, p));
    n2 = n2 / 10;
    if (left != right) {
      return false;
    }
    p--;
    if (p < 0) break;
  }
  return true;
}

void isSymmetrical(int n) {
  int num = n;
  int digit = 0;
  int placeValue = 0;
    while (true) {
      digit = n % 10;
      n = n / 10;
      if (n == 0) break;
      placeValue++;
    }
    if(checkSymmetrical(num, placeValue)) cout << "YES";
    else cout << "NO";
}

int main () {
  int n;
  cin >> n;
  isSymmetrical(n);
  return 0;
}
