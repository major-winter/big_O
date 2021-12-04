#include<iostream>
#include<math.h>
using namespace std;

bool isSqrtInt (float x) {
	return ((x - floor(x)) == 0);
}

int isAPairExisted(int n, int b, int m) {
	float a = sqrt(n - b);
	int bSquare = pow(b, 2);

	return (isSqrtInt(a) && bSquare == (m - a));
}

void findSuitablePairs(int m, int n) {
	int upperBound = int(sqrt(m));
	int count = 0;
	for (int i = 0; i <= upperBound; i++ ) {
		if(isAPairExisted(n, i, m)) count++;
	}
	cout << count << endl;
}
int main () {
	int n, m;
	cin >> n >> m;
	if (n > m) findSuitablePairs(m, n);
	else findSuitablePairs(n, m);
	return 0;
}
