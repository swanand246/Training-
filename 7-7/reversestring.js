var str="Swanand"

function reverseString(s){
    return s.split("").reverse().join("");
}
var output=reverseString(str);
console.log("Original String:-");
console.log(str);
console.log("Reverse String:-");
console.log(output);