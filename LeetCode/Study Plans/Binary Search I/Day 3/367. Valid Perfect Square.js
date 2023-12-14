/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function (num) {
    let st = 1, lt = num;
    while (st <= lt) {
        let mid = Math.floor((lt - st) / 2 + st);
        if (mid * mid == num) return true;
        else if (mid * mid > num) lt = mid - 1;
        else if (mid * mid < num) st = mid + 1;
    }
    return false;
};