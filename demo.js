const readline = require('readline');

// Create interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Enter the size of the array: ', (size) => {
    size = parseInt(size);
    let arr = new Array(size);
    let index = 0;

    const readArrayElements = () => {
        if (index < size) {
            rl.question(`Enter element ${index + 1}: `, (element) => {
                arr[index] = parseInt(element);
                index++;
                readArrayElements();
            });
        } else {
            console.log('Array elements are: ', arr);
            rl.close();
        }
    };

    readArrayElements();
});
