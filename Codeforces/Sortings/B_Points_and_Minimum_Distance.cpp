#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

long long nCr(long long n, long long r) {
    if (r > n) return 0;
    if (r == 0 || n == r) return 1;
    long double res = 0;
    for (long long i = 0; i < r; i++) res += log(n - i) - log(i + 1);
    return (long long)round(exp(res));
}

long long isSubstring(string s1, string s2) {
    if (s2.find(s1) != string::npos) return s2.find(s1);
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Start Your Code Here
    int t;
    cin >> t;
    while (t--) {
        int p;
        cin >> p;
        int n = 2 * p;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int count = 0;
        for (int i = 1; i < p; i++) count += abs(v[i] - v[i - 1]);
        for (int i = p + 1; i < n; i++) count += abs(v[i] - v[i - 1]);
        int pt = 0;
        cout << count << endl;
        for (int i = 0; i < p; i++) cout << v[i] << " " << v[n - i - 1] << endl;
    }
    return 0;
}