function fiboEvenSum(n) {
    let s = 1, c = 2, sum = 0;
    while (c <= n) {
        if (c % 2 === 0) sum += c;
        let temp = c;
        c = c + s;
        s = temp;
    }
    return sum;
}

console.log(fiboEvenSum(4000000));
