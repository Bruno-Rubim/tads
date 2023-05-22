function calculate(){
    let valor = Number(document.querySelector('#valor').value);
    let quantidade = Number(document.querySelector('#quantidade').value);
    let total = valor * quantidade;
    document.querySelector('#total').innerHTML = "R$: " + total.toFixed(2);
}

document.querySelector('button');