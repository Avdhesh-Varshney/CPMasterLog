// Chef And Magical Path
// Problem Code : CHEFPATH

// https://www.codechef.com/problems/CHEFPATH

// Solution:
#include <iostream>
using namespace std;
static auto testcase(unsigned long N, unsigned long M) {
	return (N == 1 && M == 2)
	    || (N == 2 && M == 1)
	    || (N != 1 && M != 1 && (N % 2 == 0 || M % 2 == 0));
}
static void testcase() {
	unsigned long N, M;
	cin >> N >> M;
	cout << (testcase(N, M) ? "Yes\n" : "No\n");
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	unsigned t;
	cin >> t;
	while(t--)
		testcase();
	return 0;
}