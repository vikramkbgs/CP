var numbers = parseInt(readline());
var i =0;
while(i < numbers) {
	var n =parseInt(readline());
	var a =(readline());
 
	print(n > 2 || a === '00' || a === '11' ? 'NO' : 'YES');
	i++;
}