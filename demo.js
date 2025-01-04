let arr = [4 , 1 , 5 , 2 , 3 ];
let n = arr.length;

for(let i = 0 ; i < n-1 ; i++) {
    let smallestIdx = i;
    for(let j = i + 1 ; j < n ; j++) {
        if(arr[j] < arr[smallestIdx]) {
            smallestIdx = j;
        }
    }

    let temp = arr[i];
    arr[i] = arr[smallestIdx];
    arr[smallestIdx] = temp;
}

console.log(arr);
