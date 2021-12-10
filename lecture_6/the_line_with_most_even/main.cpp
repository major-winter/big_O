#include<iostream>
using namespace std;

int isEven(int n) {
  return (n % 2 == 0);
}

int main () {
  // m -> row
  // n -> column
  // ans -> the current line with the most even numbers
  // count -> the numbers of even numbers on the current line
  // maxCount -> the numbers of even numbers so far
  // if count > maxCount -> ans = i

  int m, n, maxCount, count, ans;
  cin >> m >> n;
  int a[1000][1000];
  ans = 0;
  maxCount = 0;
  count = 0;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    count = 0;
    for (int j = 0; j < n; j++) {
      if (isEven(a[i][j])) {
        count++;
      }
    }
    if (count > maxCount) {
      maxCount = count;
      ans = i;
    } 
  }

  cout << ans;
  return 0;
}
