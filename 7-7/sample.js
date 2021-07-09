const numbers=[74,18,2,5,10,6,90,100,123]

numbers.sort(compare);

console.log(numbers);
function compare(a,b){
    return a-b;
}