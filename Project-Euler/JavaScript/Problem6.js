// Find the difference between the sum of the squares of the first n natural numbers and the square of the sum.

function sumSquareDifference(n) {
    let sum = Math.floor((n * (n + 1)) / 2);
    let squareOfSum = Math.floor((n * (n + 1) * (2 * n + 1)) / 6);
    return (sum * sum) - squareOfSum;
}

console.log(sumSquareDifference(100));