// Problem :- 2628. JSON Deep Equal
// Link :- https://leetcode.com/problems/json-deep-equal/?gio_link_id=4PKqJ0z9

// Solution:
/**
 * @param {any} o1
 * @param {any} o2
 * @return {boolean}
 */
var areDeeplyEqual = function(o1, o2) {
    if (o1 === o2) return true;
    if (typeof o1 != 'object' || typeof o2 != 'object') return false;
    if (Array.isArray(o1) !== Array.isArray(o2)) return false;
    if (Object.keys(o1).length != Object.keys(o2).length) return false;
    for (const key in o1) if (!areDeeplyEqual(o1[key], o2[key])) return false;
    return true;
};