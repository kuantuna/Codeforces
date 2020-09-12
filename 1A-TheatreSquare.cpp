#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
	double n, m, a;
	cin >> n >> m >> a;
	double maxF = max(n, m) / a;
	long long maxEdge = ceil(maxF);
	double minF = min(n, m) / a;
	long long minEdge = ceil(minF);
	cout << maxEdge * minEdge;

	return 0;
}
