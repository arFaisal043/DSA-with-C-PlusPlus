let arr = [7 , 8 , 12 , 27 , 88];
let targetIndex = 2 , targetVal = 9;

for(let i = arr.length ; i >= targetIndex ; i--) {
    arr[i + 1] = arr[i];
}
arr[targetIndex] = targetVal;

for(let i = 0 ; i < arr.length ; i++) {
    console.log(arr[i]);
}
