// Problem :- 2665. Counter II
// Link :- https://leetcode.com/problems/counter-ii/?gio_link_id=xRxVYOXo

// Solution:
/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let currentCount = init;
    function increment() {
        return ++currentCount;
    }
    function decrement() {
        return --currentCount;
    }
    function reset() {
        return currentCount=init;
    }
    return {increment, decrement, reset};
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */