/*
Name : finance in Ruby
Author : Аїӡек Меѥҏ
Version : v1.0
License : N/A
*/

const prompt = require('prompt-sync')();

function input() {
	console.log("Principal: ");
	let p = Number(prompt());
	console.log("Rate : ");
	let r = Number(prompt());
	console.log("Length (in Years) : ");
	let t = Number(prompt());
	console.log("Times per year : ");
	let n = Number(prompt());
	return [p,r,t,n];
}


function calculate(p,r,t,n) {
	return ((p) * (1 + (r / n)))**((n) * (t));
}

let [p,r,t,n] = input();
console.log(calculate(p,r,t,n));


