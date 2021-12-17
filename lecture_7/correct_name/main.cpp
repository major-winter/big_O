#include<iostream>
#include<string>
using namespace std;

void correctWord(string &s) {
  if (s.length()) {
    s[0] = toupper(s[0]);
    for (size_t i = 1; i < s.length(); i++) {
      if (s[i] == ' ') {
        s[i + 1] = toupper(s[i + 1]);
        i++;
      }
      else s[i] = tolower(s[i]);
    }
    cout << s << endl;
  }
}

int main () {
  string s;
  int n;
  cin >> n;
  while(true) {
    getline(cin, s);
    correctWord(s);
    n--;
    if (n < 0) break;
  }

  return 0;
}
