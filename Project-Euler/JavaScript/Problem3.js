// What is the largest prime factor of the given number?

function checkPrime(n) {
    for (let i = 2; i < n; i++)
        if (n % i === 0) return false;
    return true;
}
function largestPrimeFactor(number) {
    let ans = 1;
    for (let i = 1; i <= number / ans; i++) if (number % i == 0 && checkPrime(i) && ans < i) ans = i;
    return ans;
}

console.log(largestPrimeFactor(13195));