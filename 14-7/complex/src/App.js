import React, { Component } from 'react';
var math = require('mathjs');
class compl extends Component {
  constructor(props) {
    super(props)

    this.state = {
      no1: "",
      no2: "",
      addans: "",
      subans: "",
      multans: "",
      divans: "",
    }
  }

  handlen1 = (event) => {

    this.setState({ no1: event.target.value });

  }
  handlen2 = (event) => {
    this.setState({ no2: event.target.value });
  }

  add = (n1, n2) => {
    n1 = math.complex(this.state.no1)
    n2 = math.complex(this.state.no2)

    var addans = math.add(n1, n2);

    if (addans.im === '0') return console.log('' + addans.re);
    if (addans.re === 0) return console.log('' + addans.im + 'i');
    if (addans.im < 0) return console.log('' + addans.re + addans.im + 'i');
    document.getElementById("demo").innerHTML =
    "The total is: " + addans;
    return console.log('' + addans.re + '+' + addans.im + 'i');


  }

  sub = (n1, n2) => {
    n1 = math.complex(this.state.no1)
    n2 = math.complex(this.state.no2)

    var subans = math.subtract(n1, n2);

    if (subans.im === '0') return console.log('' + subans.re);
    if (subans.re === 0) return console.log('' + subans.im + 'i');
    if (subans.im < 0) return console.log('' + subans.re + subans.im + 'i');
    document.getElementById("demo").innerHTML =
    "The total is: " + subans;
    return console.log('' + subans.re + '+' + subans.im + 'i');
  }

  mul = (n1, n2) => {
    n1 = math.complex(this.state.no1)
    n2 = math.complex(this.state.no2)

    var mulans = math.multiply(n1, n2);

    if (mulans.im === '0') return console.log('' + mulans.re);
    if (mulans.re === 0) return console.log('' + mulans.im + 'i');
    if (mulans.im < 0) return console.log('' + mulans.re + mulans.im + 'i');
    document.getElementById("demo").innerHTML =
    "The total is: " + mulans;
    return console.log('' + mulans.re + '+' + mulans.im + 'i');
  }

  div = (n1, n2) => {
    n1 = math.complex(this.state.no1)
    n2 = math.complex(this.state.no2)

    var divans = math.divide(n1, n2);

    if (divans.im === '0') return console.log('' + divans.re);
    if (divans.re === 0) return console.log('' + divans.im + 'i');
    if (divans.im < 0) return console.log('' + divans.re + divans.im + 'i');
    document.getElementById("demo").innerHTML =
    "The total is: " + divans;
    return console.log('' + divans.re + '+' + divans.im + 'i');
  }

  render() {
    return (
      <div>
        <center>
        <h2>Complex Numbers</h2>
        Complex No1:-
        <input type="text" value={this.state.no1} onChange={this.handlen1} />

        <br></br><br></br>
        Complex No2:-
        <input type="text" value={this.state.no2} onChange={this.handlen2} />

        <br></br>
        <br></br>

        <button onClick={() => this.add(this.state.no1, this.state.no2)}>Add</button>&nbsp;&nbsp;

        <button onClick={() => this.sub(this.state.no1, this.state.no2)}>Subtraction</button>&nbsp;&nbsp;

        <button onClick={() => this.mul(this.state.no1, this.state.no2)}>Multiplication</button>&nbsp;&nbsp;

        <button onClick={() => this.div(this.state.no1, this.state.no2)}>Division</button>&nbsp;&nbsp;

        <h4><p id="demo"></p></h4>
        </center>
      </div>
    )
  }
}

export default compl;
