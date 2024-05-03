// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to n?

function isPrime(n) {
    for (let i = 2; i < n; i++)
        if (n % i === 0) return false;
    return true;
}
function solve(number, n) {
    for (let i = 1; i <= n; i++) {
        if (number % i !== 0) {
            let rem = number % i, y = i - rem;
            if (i % rem === 0) y = i / rem;
            number *= y;
        }
    }
    return number;
}
function smallestMult(n) {
    let number = 1;
    for (let i = 2; i <= n; i++) {
        if (isPrime(i)) number *= i;
    }
    return solve(number, n);
}

console.log(smallestMult(5));