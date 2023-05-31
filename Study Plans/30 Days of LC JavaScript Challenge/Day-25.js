// Problem :- 2618. Check if Object Instance of Class
// Link :- https://leetcode.com/problems/check-if-object-instance-of-class/?gio_link_id=qPkbxBwR

// Solution:
/**
 * @param {any} obj
 * @param {any} classFunction
 * @return {boolean}
 */
var checkIfInstanceOf = function(obj, classFunction) {
    while(obj != null) {
        if(obj.constructor === classFunction) {
            return true;
        }
        obj = Object.getPrototypeOf(obj);
    }
    return false;
};

/**
 * checkIfInstanceOf(new Date(), Date); // true
 */