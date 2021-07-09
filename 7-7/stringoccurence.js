function countOccurences(string, word) {
    return string.split(word).length - 1;
 }
 var text="'You cannot end a sentence with because because because is a conjunction."; 
 console.log(text);
 var co=countOccurences(text,"because");
 var count="The word because in the sentence occured "+co+" times";
 console.log(count); 