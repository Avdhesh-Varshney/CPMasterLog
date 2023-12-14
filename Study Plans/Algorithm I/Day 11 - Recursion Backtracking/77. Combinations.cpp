// Question 1

// Problem Link
// https://leetcode.com/problems/combinations/?envType=study-plan&envId=algorithm-i&plan=algorithm

// Solution:
class Solution {
public:
		vector<vector<int>> combine(int n, int k) {
				vector<vector<int>> result;
				int i = 0;
				vector<int> p(k, 0);
				while (i >= 0) {
						p[i]++;
						if (p[i] > n) --i;
						else if (i == k - 1) result.emplace_back(p);
						else {
								++i;
								p[i] = p[i - 1];
						}
				}
				return result;
		}
};