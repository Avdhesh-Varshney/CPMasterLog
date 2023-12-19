package Java;

import java.util.Scanner;

public class Problem1 {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int t = scanner.nextInt();
            for (int a0 = 0; a0 < t; a0++) {
                long n = scanner.nextLong();
                long ans = 0;

                // Adding multiples of 3
                long q = n / 3;
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
                System.out.println(ans);
            }
        }
    }
}
