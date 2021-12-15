#include<iostream>
#include<string>
using namespace std;

void separateWord(string a[], string s, int &count) {
  int startIndex = 0;
  string separator = " ";
  while (true) {
    int endIndex = s.find(separator, startIndex);
     if (endIndex == -1) {
        endIndex = s.length();
    }
    string sub = s.substr(startIndex, endIndex - startIndex);
    a[count] = sub;
    count++;
    if (endIndex == s.length()) {
      break;
    }
    a[count] = " ";
    count++;
    startIndex = endIndex + 1;
  }
}

int main () {
  string s;
  getline(cin, s);
  string a[1000];
  int count = 0;

  separateWord(a, s, count);

  for (int i = count - 1; i > -1; i--) {
    cout << a[i];
  }
  return 0;
}
