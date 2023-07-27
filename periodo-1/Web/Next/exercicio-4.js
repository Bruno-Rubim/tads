function verify(){
	let nome = document.querySelector('#nome').value.length;
	let cpf = document.querySelector('#cpf').value.length;
	let email = document.querySelector('#email').value.length;
	if (nome >= 3 && cpf >= 11 && email >= 4){
		document.querySelector('#response').innerHTML = "Válido!";
	} else {
		document.querySelector('#response').innerHTML = "Erro!";
	}
	console.log("verify");
}

