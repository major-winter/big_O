#include<iostream>
using namespace std;

int is_prime(int n) {
  if (n < 2) return false;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int nearest_prime(int n) {
  int n1 = n, n2 = n, ans = 0;
  while(true) {
    if (is_prime(n1)) {
      ans = n1;
      break;
    }
    n1--;
    if(is_prime(n2)){
      ans = n2;
      break;
    } 
    n2++;
  }
  return ans;
}

int main () {
  int n;
  cin >> n;
  cout << nearest_prime(n);
  return 0;
}
