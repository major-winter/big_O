#include<iostream>

using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int a, b;
  cin >> a >> b;
  int c, d;
  
  if (a > b){
    c = a / gcd(a, b);
    d = b / gcd(a, b);
    cout << c << " " << d;
  } 
  else {
    c = a / gcd(b, a);
    d = b / gcd(b, a);
    cout << c  << " " << d;
  }
  return 0;
}
