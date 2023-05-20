function calculate(){
    let valor = Number(document.querySelector('#valor').value);
    let quantidade = Number(document.querySelector('#quantidade').value);
    document.querySelector('#total').innerHTML = "R$: " + valor * quantidade;
    console.log("a")
}

document.querySelector('button');