const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
const calcsum = (num) => {
  let sum = 0;
  for (let i = 2; i <= num / 2; i++) {
    sum += num % i === 0 ? i : 0;
  }
  return sum;
};
rl.question("", (in) => {let sum=calcsum(in)});
