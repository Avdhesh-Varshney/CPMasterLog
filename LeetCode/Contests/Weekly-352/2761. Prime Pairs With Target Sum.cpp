// Problem Link - https://leetcode.com/contest/weekly-contest-352/problems/prime-pairs-with-target-sum/

class Solution {
public:
    bool isPrime(int n) {
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) return false;
        return true;
    }

    void makeUnprime(vector<bool>& iT, int i, int n) {
        int j = i;
        while (j <= n) {
            if (j < iT.size())
                iT[j] = false;
            j += i;
        }
    }

    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> res;
        vector<bool> isTravel(n + 1, true);
        for (int i = 2; i <= n / 2 + 1; i++) {
            if (n - i >= 2 && isTravel[i] && isTravel[n - i]) {
                if (isPrime(i)) {
                    if (isPrime(n - i)) {
                        isTravel[i] = false;
                        isTravel[n - i] = false;
                        vector<int> v = {i, n - i};
                        res.emplace_back(v);
                        makeUnprime(isTravel, i, n);
                        makeUnprime(isTravel, n - i, n);
                    } else {
                        makeUnprime(isTravel, n - i, n);
                    }
                } else {
                    makeUnprime(isTravel, i, n);
                }
            }
        }
        return res;
    }
};
