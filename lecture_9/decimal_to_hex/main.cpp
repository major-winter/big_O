#include<iostream>
#include<string>
using namespace std;

string hex(int n) {
  if (n == 10) return "A";
  if (n == 11) return "B";
  if (n == 12) return "C";
  if (n == 13) return "D";
  if (n == 14) return "E";
  if (n == 15) return "F";
  return to_string(n);
}

string decToHex (int n) {
  if (n / 16 == 0) return hex(n);
  return decToHex(n / 16) + hex(n % 16);
}

int main () {
  int n;
  cin >> n;
  cout << decToHex(n);
  return 0;
}
