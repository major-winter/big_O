#include<iostream>
using namespace std;

int main () {
  int a[5000];
  int o[5000];
  int n;
  cin >> n;
  int maxApples = 0, maxOranges = 0;
  int count = 0;
  int ans = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i] >> o[i];
    if (a[i] == maxApples) count++;
    if (a[i] > maxApples) {
      maxApples = a[i];
      ans = i + 1;
      count = 1;
    }
  }

  if (count < 2) cout << ans;
  else {
    for (int i = 0; i < n; i++) {
      if (a[i] == maxApples) {
        if (o[i] > maxOranges) {
          maxOranges = o[i];
          ans = i + 1;
        }
      }
    }
    cout << ans;
  }
  return 0;
}
