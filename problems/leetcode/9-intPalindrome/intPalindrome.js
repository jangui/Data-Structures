/**
 * @param {number} x
 * @return {boolean}
 */
const isPalindrome = (x) => {
    if (x < 0) return false;
    arr = num2DigitArray(x);
    return isArrayPalindrome(arr);
};

/**
 * @param {number} x
 * @return {array of numbers}
 */
const num2DigitArray = (x) => {
    arr = []
    while (x != 0) {
       arr.push(x % 10);
       x = Math.floor(x / 10);
    }
    return arr
};

/**
 * @param {array of numbers} arr
 * @return {boolean}
 */
const isArrayPalindrome = (arr) => {
    leftInd = 0;
    rightInd = arr.length-1;

    while (leftInd <= rightInd) {
        if (arr[leftInd] != arr[rightInd]) {
            return false;
        }
        leftInd++;
        rightInd--;
    }
    return true;
};
