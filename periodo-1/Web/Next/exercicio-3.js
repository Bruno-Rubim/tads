let total1 = Number(document.querySelector('#total1').value);
let total2 = Number(document.querySelector('#total2').value);
let total3 = Number(document.querySelector('#total3').value);

function calculate1(){
    let valor = Number(document.querySelector('#valor1').value);
    let quantidade = Number(document.querySelector('#quantidade1').value);
    total1 = valor * quantidade;
    document.querySelector('#total1').innerHTML = "R$: " + total1.toFixed(2);
}

function calculate2(){
    let valor = Number(document.querySelector('#valor2').value);
    let quantidade = Number(document.querySelector('#quantidade2').value);
    total2 = valor * quantidade;
    document.querySelector('#total2').innerHTML = "R$: " + total2.toFixed(2);
}

function calculate3(){
    let valor = Number(document.querySelector('#valor3').value);
    let quantidade = Number(document.querySelector('#quantidade3').value);
    total3 = valor * quantidade;
    document.querySelector('#total3').innerHTML = "R$: " + total3.toFixed(2);
}

function calculateMega(){
	let totalMega = total1 + total2 + total3;
    document.querySelector('#totalMega').innerHTML = "R$: " + totalMega.toFixed(2);
}
