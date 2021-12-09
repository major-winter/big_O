#include<iostream>
using namespace std;

int main () {
  int n, k;
  cin >> n >> k;
  int a[50];
  int score = 0;
  int count = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i + 1 == k) {
      score = a[i];
    }
  }

  for (int i = 0; i < n; i++) {
    if (a[i] >= score && a[i] > 0) count++;
  }
  cout << count;
  return 0;
}
