// Problem Link:
// https://leetcode.com/problems/guess-number-higher-or-lower/

// Solution:
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int m = n/2, pick;
        while(true) {
            if(guess(m) == 0) {
                pick = m;
                break;
            }
            else if(guess(m) == 1) {
                m++;
            }
            else {
                m--;
            }
        }
        return pick;
    }
};