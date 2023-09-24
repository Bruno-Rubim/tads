function validar(){
    let nome = document.querySelector('#nome').value.trim();
    let idade = document.querySelector('#idade').value;
    console.log("nome: " + nome);
    if(nome == ''){
        handleMsg('#msg', "Insira o nome");
        return false;
    }
    if(idade == ''){
        handleMsg('#msg', "Insira a idade");
        return false;
    }
    return true;
    
    function handleMsg(id, texto){
        let msg = document.querySelector(id);
        msg.innerHTML = texto;
    }
}