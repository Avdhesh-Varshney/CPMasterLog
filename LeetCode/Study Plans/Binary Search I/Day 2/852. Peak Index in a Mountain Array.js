/**
 * @param {number[]} arr
 * @return {number}
 */
var peakIndexInMountainArray = function(arr) {
    let left = 0, right = arr.length -1;
    while(left <= right) {
        let mid = Math.floor((right-left)/2 + left);
        if(mid == 0) {
            if(arr[0] > arr[1]) return 0;
            else return 1;
        }
        else if(mid == arr.length -1) {
            if(arr[arr.length-1] > arr[arr.length-2]) return arr.length-1;
            else return arr.length-2;
        }
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
        else if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]) left = mid+1;
        else right = mid-1;
    }
    return left;
};