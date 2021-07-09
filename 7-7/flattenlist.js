const data = [
    [1, 2, 3],
    [4, [5, 6]],
    [[7], [8, [9]]],
    [10,11,12,13,14],
    [[15],[16,[17],18]]
  ];
  
  function flatten(arr) {
    let flattened = [];
    for (let i = 0; i < arr.length; i++) {
      Array.isArray(arr[i])
        ? flattened = flattened.concat(flatten(arr[i]))
        : flattened.push(arr[i]);
      }
    return flattened;
  }
  

  console.log(flatten(data));