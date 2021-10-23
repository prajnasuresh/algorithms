function isPrime(num) {
  if (num > 1) {
    return num % num === 0;
  } else {
    return 0;
  }
}

console.log(isPrime(5));
