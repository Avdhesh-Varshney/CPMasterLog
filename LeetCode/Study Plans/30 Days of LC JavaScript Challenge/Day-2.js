// Problem :- 2620. Counter
// Link :- https://leetcode.com/problems/counter/?gio_link_id=xogkVqBo

// Solution:
/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    return function() {
        return n++;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */