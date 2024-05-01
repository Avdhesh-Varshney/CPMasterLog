// Find the largest palindrome made from the product of two n-digit numbers.

function isPalin(n) {
    let m = 0, k = n;
    while (k > 0) {
        let t = Math.floor(k % 10);
        m = m * 10 + t;
        k = Math.floor(k / 10);
    }
    if (n === m) return true;
    return false;
}
function find(a, b) {
    let res = 1;
    for (let i = b - 1; i >= a; i--) {
        for (let j = b - 1; j >= a; j--) {
            let temp = i * j;
            if (temp > res && isPalin(temp)) res = temp;
        }
    }
    return res;
}
function largestPalindromeProduct(n) {
    let a, b = 1;
    for (let i = 0; i < n; i++) b *= 10;
    a = b / 10;
    return find(a, b);
}

console.log(largestPalindromeProduct(3));