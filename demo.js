let arr = [1 , 2 , 3 , 4 , 5];
let targetVal = 4 , n = 5 , foundIdx = -1;
let st = 0 , end = n-1;

while(st <= end) {
    let mid = Math.floor(st + (end - st) / 2);

    if(targetVal > arr[mid]) {
        st = mid + 1;
        end = end;
    }
    else if(targetVal < arr[mid]) {
        st = st;
        end = mid -1;
    }
    else {
        foundIdx = mid;
        break;
    }
}

console.log(foundIdx);

