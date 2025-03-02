// arr = ["Faisal" , "Nowshin" , "Dalia" , "Arwa"]
let arr = ["Faisal" , "Nowshin" , "Dalia" , "Arwa"].sort();
console.log(arr);

let input = prompt("Enter your name");
console.log(`Input: ${input}`);


const BinarySearch = (arr , input) => {
    let st = 0, end = arr.length - 1;

    while(st <= end) {
        let mid = Math.floor(st + (end - st) / 2);
    
        if(input < arr[mid]) {
            end = mid - 1;
        }
        else if(input > arr[mid]) {
            st = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

let res = BinarySearch(arr , input);

if(res != -1) {
    console.log(`found ${res}`);
}
else {
    console.log(`Not found`);
    
}