#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void binary (int n, string &ss) {
  if (n == 0){
    ss += "0";
    return;
  } 
  binary(n / 2, ss);
  ss += to_string(n % 2);
  //return to_string(binary(n / 2))  + to_string(n % 2);
}

int main () {
  int n;
  cin >> n;
  string ss;
  binary(n, ss);
  if (ss.length() > 1) cout << ss.substr(1);
  else cout << ss;
  return 0;
}
