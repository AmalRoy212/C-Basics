let inp = 10;

function happyNumber(num) {
  let sum = 0
  function splitInt(value) {
    let numbers = [];
    for (let i = 0; i <= value; i++) {
      numbers[i] = parseInt(value % 10);
      value = value / 10;
    }
    return numbers;
  }
  function addSquares(valsArray) {
    console.log(valsArray);
    for (let i = valsArray.length - 1; i > 0; i--) {
      sum = sum + (valsArray[i] * valsArray[i] + (valsArray[i - 1] * valsArray[i - 1]));
    }
    return sum;
  }
  let splitNmbr = splitInt(num);
  let fSum = addSquares(splitNmbr);
  if(sum > 0){
    return true;
  }
  return happyNumber(fSum);
}
console.log(happyNumber(inp));

