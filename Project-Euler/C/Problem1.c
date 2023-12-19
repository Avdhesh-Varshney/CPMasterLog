#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int a0 = 0; a0 < t; a0++) {
        long long n, ans = 0;
        scanf("%lld", &n);

        // Adding multiples of 3
        long long q = n / 3;
        ans += 3 * ((q * (q + 1)) / 2);

        // Adding multiples of 5
        q = n / 5;
        ans += 5 * ((q * (q + 1)) / 2);

        // Removing common elements
        q = n / 15;
        ans -= 15 * ((q * (q + 1)) / 2);

        if (n % 3 == 0 || n % 5 == 0) {
            ans -= n;
        }
        printf("%lld\n", ans);
    }
    return 0;
}
