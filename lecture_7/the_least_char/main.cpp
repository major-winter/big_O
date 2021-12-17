#include<iostream>
#include<string>
using namespace std;

/*
 * int alphabet[] = {'a', 'b', 'c',...} -> 26 elements
 * int occ[] = {0, 0, 0, 0} -> 26 elements
 *
 * func countOcc(string s, int alphabet, int occ) {
 *    for (i in s.lengt()){
 *      if(alphabet[s[i]]) occ[i]++;
 *    }
 *
 *    minCount = 1000 -> maximum characters
 *    for (i in occ.length()) {
 *        if (occ[i] < minCount) 
 *          minCount = occ[i];
 *    }
 *    cout << alphabet[minCount]
 * }
 *
 *
 * */
string toUpper (string s) {
  string ans;
  for (int i = 0; i < s.length(); i++) {
    ans += toupper(s[i]);
  }
  return ans;
}
void countOcc(string s, string &a, int occ[], char ans[], int &c) {
  for (int i = 0; i < 26; i++) {
    occ[i] = 0;
  }
  int minCount = 1000;
  for (int i = 0; i < s.length(); i++) {
    int index = a.find(s[i]);
    occ[index]++;
  }

  int ind = 0;
  for (int i = 0; i < 26; i++) {
    if (occ[i] < minCount && occ[i] > 0) {
      minCount = occ[i];
      ind = i;
    }  
  }
  ans[c] = a[ind];
  c++;
}
int main () {
  string s;
  int n;
  cin >> n;
  string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int occ[30];
  int c = 0;
  char ans[1000];
  for (int i = 0; i < n; i++) {
    cin >> s;
    s = toUpper(s);
    countOcc(s, alphabet, occ, ans, c);
  }

  for (int i = 0; i < c; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}
