// Problem :- 2632. Curry
// Link :- https://leetcode.com/problems/curry/?gio_link_id=QRekxgjo

// Solution:
/**
 * @param {Function} fn
 * @return {Function}
 */
var curry = function(fn) {
    return function curried(...arg) {
        if(fn.length == arg.length) return fn(...arg);
        else {
            return function(...newArg) {
                return curried(...arg, ...newArg);
            }
        }
    };
};

/**
 * function sum(a, b) { return a + b; }
 * const csum = curry(sum);
 * csum(1)(2) // 3
 */