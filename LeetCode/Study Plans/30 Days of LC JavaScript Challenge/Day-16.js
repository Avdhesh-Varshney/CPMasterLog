// Problem :- 2676. Throttle
// Link :- https://leetcode.com/problems/throttle/?gio_link_id=bR7jOnr9

// Solution:
/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var throttle = function(fn, t) {
    let lastArgs, shouldCall = true;
    function execute() {
        if (shouldCall && lastArgs) {
            fn(...lastArgs);
            lastArgs = null;
            shouldCall = false;
            setTimeout(() => {
            shouldCall = true;
            execute();
            }, t);
        }
    }
    return function(...args) {
        lastArgs = args;
        execute();
    }
};

/**
 * const throttled = throttle(console.log, 100);
 * throttled("log"); // logged immediately.
 * throttled("log"); // logged at t=100ms.
 */