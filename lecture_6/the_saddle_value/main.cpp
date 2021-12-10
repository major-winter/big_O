#include<iostream>
using namespace std;

void findSaddleValue(int a[][100], int maxValue, int &count, int &m, int indexes[], int &c) {
  int flag = true; // Assume the current maxValue is the smallest value on the column

  for (int j = 0; j < c; j++) {
    flag = true;
    for (int i = 0; i < m; i++) {
      if (a[i][indexes[j]] < maxValue) flag = false;
    }
    if (flag) count++;
  }
}

void findIndex(int a[][100], int maxValue, int indexes[], int &n, int &c, int i) {
  c = 0;
  for (int j = 0; j < n; j++) {
    if (a[i][j] == maxValue) {
      indexes[c] = j;
      c++;
    }
  }
}

int main() {
  int m, n, maxValue, count;
  cin >> m >> n;
  int a[100][100];
  maxValue = 0;
  count = 0;
  int indexes[100];
  int c = 0;

  // find max value on each row -> maxValue at i
  // find index of the maxValue -> store in an array
  // each index is a column -> compare the maxValue to all values on the column
  // if there are no numbers which is greater than the maxValue -> the maxValue is the smallest number on the column -> count++

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    maxValue = 0;
    for (int j = 0; j < n; j++) {
      if (a[i][j] > maxValue) maxValue = a[i][j];
    }
    findIndex(a, maxValue, indexes, n, c, i);
    findSaddleValue(a, maxValue, count, m, indexes, c);
  }

  cout << count;
  return 0;
}


