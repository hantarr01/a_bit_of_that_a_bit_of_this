/* ЗАМЫКАНИЯ
function multiply(n){
    var x = n;
    return function(m){ return x * m;};
}
var fn1 = multiply(5);
var result1 = fn1(6); // 30
console.log(result1); // 30
 
var fn2= multiply(4);
var result2 = fn2(6); // 24
console.log(result2); // 24



//ПАТТЕРН МОДУЛЬ
let foo = (function(){
    let obj = {greeting: "hello"};
     
    return {
        display: function(){
            console.log(obj.greeting);
        }
    }
})();
foo.display();  // hello


exp.onclick = function (a) {
	a.target.style.backgroundColor = 'lime';
	a.target.style.borderRadius = '100%';
};

//РЕКУРСИЯ НА ПРИМЕРЕ ФАКТОРИАЛА
function rec(x){

	if(x === 1){
		return 1;
	}else{
		return x + rec(x-1);
	}

}
var result = rec(2);
console.log(result);
*/
function findF(x){
	if (x===0) {
		return 0;
	}
	if (x===1) {
		return 1;
	}else{
		return findF(x - 1) + findF(x - 2);
	}
}

var	result = findF(8);
console.log(result);

function down(x, y){
	if (x > y){
		console.log (x);
		return down(x - 1, y);
	}else{
		return 1;	
	}

}

console.log(down(5,1));
