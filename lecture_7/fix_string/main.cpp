#include<iostream>
#include<string>
using namespace std;

/*
 * read in string s -> uppercase and lowercase
 * create string a[] to store word
 * filter character in string s and put into string a
 * print words from string a
 *
 * Approach 2: use a flag to mark space
 * create a variable to keep track of string len. This var also handles the spaces before the first word
 *
*/

int main () {
  string s;
  getline (cin, s);
  string ans;
  int space = false;
  int stringLen = 0;
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i] == 32) {
      if (stringLen > 0)
      space = true;
    } else {
      if (space) {
        ans = ans + " " + s[i];
        space = false;
        stringLen += 2;
      } else {
        ans += s[i];
        stringLen++;
      }
    }
  }

  cout << ans;

  return 0;
}
