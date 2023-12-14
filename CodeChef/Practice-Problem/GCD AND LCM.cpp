// GCD AND LCM
// Problem Code - FLOW016

// https://www.codechef.com/problems/FLOW016

// Solution:
#include <iostream>
using namespace std;
long long gcd(long long int a, long long int b)
{
    if (b == 0)
    	return a;
    return gcd(b, a % b);
}
long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}
int main()
{
    int t;
    long long int a, b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        cout << gcd(a,b) << " " << lcm(a,b) << endl;
    }
	return 0;
}