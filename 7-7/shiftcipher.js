var shiftCipher = function (str, amt) {
    if (amt < 0) {
      return shiftCipher(str, amt + 26);
    }
    var output = "";
  
    for (var i = 0; i < str.length; i++) {
      var c = str[i];
      //letter checking condition
      if (c.match(/[a-z]/i)) {
        
        var code = str.charCodeAt(i);
  
        //condition for uppercase letters
        if (code >= 65 && code <= 90) {
          c = String.fromCharCode(((code - 65 + amt) % 26) + 65);
        }
  
        //condtion for Lowercase letters
        else if (code >= 97 && code <= 122) {
          c = String.fromCharCode(((code - 97 + amt) % 26) + 97);
        }
      }
  
      // append the output
      output =output + c;
    }
      return output;
    
  };
  console.log(shiftCipher('ABCDEFGHIJKLMNOPQRSTUVWXYZ', 2));

  console.log(shiftCipher('QUYLYLB', 2));
  console.log(shiftCipher('EPCYR', 2));

  console.log(shiftCipher('fcjjm umpjb', 2));
  


