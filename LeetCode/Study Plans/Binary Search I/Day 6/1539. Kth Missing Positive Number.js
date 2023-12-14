/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var findKthPositive = function(arr, k) {
    let ans = 1, i = 0;
    while(i < arr.length && k > 0) {
        if(arr[i] == ans) i++;
        else k--;
        ans++;
    }
    while(k--) ans++;
    return --ans;
};