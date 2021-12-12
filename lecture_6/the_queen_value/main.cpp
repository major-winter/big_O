#include<iostream>
using namespace std;

int isMaxOnAllDirections (int currentValue, int dx, int dy, int currentRow, int currentCol, int a[][100], int m) {
  while((currentRow >= 0 && currentRow < m) && (currentCol >= 0 && currentCol < m)) {
    if (a[currentRow][currentCol] > currentValue) {
      return false;
    }
    currentRow += dx;
    currentCol += dy;
  }
  return true;
}


int isQueen(int currentValue, int dx[], int dy[], int currentRow, int currentCol, int a[][100], int m) {
  for (int i = 0; i < 8; i++) {
    if (!isMaxOnAllDirections(currentValue, dx[i], dy[i], currentRow, currentCol, a, m)) return false;
  }

  return true;
}

int main () {
  int m, count;
  cin >> m;
  count = 0;
  int a[100][100];
  int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
  int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      if(isQueen(a[i][j], dx, dy, i, j, a, m)) count++;
    }
  }
  cout << count;

  return 0;
}
