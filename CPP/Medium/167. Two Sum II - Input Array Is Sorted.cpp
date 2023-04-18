// Problem Link
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

// Solution:

// Way :- 1
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int f = 0, l = target;
        if(target > 0) {
            while(f <= l) {
                auto itf = find(numbers.begin(), numbers.end(), f);
                if(itf != numbers.end()) {
                    auto itl = find(numbers.begin(), numbers.end(), l);
                    if(itl != numbers.end()) {
                        if(itf == itl) {
                            ans.push_back(abs(itf - numbers.begin()) +1);
                            ans.push_back(abs(itl - numbers.begin()) +2);
                        }
                        else {
                            ans.push_back(abs(itf - numbers.begin()) +1);
                            ans.push_back(abs(itl - numbers.begin()) +1);
                        }
                        break;
                    }
                }
                f++;
                l--;
            }
        }
        else if(target == 0) {
            for(int i = 0; i < numbers.size(); i++) {
                if(numbers[i] == target)
                    ans.push_back(i+1);
                if(ans.size() == 2)
                    break;
            }
            if(ans.size() == 0) {
                f++;
                l--;
                while(f > l) {
                    auto itf = find(numbers.begin(), numbers.end(), f);
                    if(itf != numbers.end()) {
                        auto itl = find(numbers.begin(), numbers.end(), l);
                        if(itl != numbers.end()) {
                            ans.push_back(abs(itf - numbers.begin()) +1);
                            ans.push_back(abs(itl - numbers.begin()) +1);
                            break;
                        }
                    }
                    f++;
                    l--;
                }
            }
        }
        else {
            while(f >= l) {
                auto itf = find(numbers.begin(), numbers.end(), f);
                if(itf != numbers.end()) {
                    auto itl = find(numbers.begin(), numbers.end(), l);
                    if(itl != numbers.end()) {
                        if(itf == itl) {
                            ans.push_back(abs(itf - numbers.begin()) +1);
                            ans.push_back(abs(itl - numbers.begin()) +2);
                        }
                        else {
                            ans.push_back(abs(itf - numbers.begin()) +1);
                            ans.push_back(abs(itl - numbers.begin()) +1);
                        }
                        break;
                    }
                }
                f--;
                l++;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Way :- 2
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0, lt = numbers.size()-1;
        vector<int> ans;
        while(st < lt) {
            if(numbers[st] + numbers[lt] == target) {
                ans.emplace_back(st+1);
                ans.emplace_back(lt+1);
                break;
            }
            else if(numbers[st]+numbers[lt] > target) lt--;
            else st++;
        }
        return ans;
    }
};