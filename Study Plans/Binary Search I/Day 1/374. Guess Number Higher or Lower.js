/** 
 * Forward declaration of guess API.
 * @param {number} num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * var guess = function(num) {}
 */

/**
 * @param {number} n
 * @return {number}
 */
var guessNumber = function(n) {
    let l = 1, h = n;
    while(l <= h) {
        let mid = Math.floor((h+l)/2);
        if(guess(mid) == 0) return mid;
        else if(guess(mid) == -1) h = mid-1;
        else if(guess(mid) == 1) l = mid+1;
    }
    return n;
};