<!--
1. Implemente um programa em PHP que permita cadastrar alguma entidade a sua escolha. Por
exemplo: Carro, Jogo, Produto, Pessoa, Ponto Turístico, Música…
Requisitos:

1.1- Os dados da entidade devem ser salvos em arquivo JSON. Utilize um ID para a entidade no formato UUID.
F

1.2- O programa em PHP deve ter as funcionalidades de listagem, inserção e exclusão, conforme visto em aula.
F

1.3- O formulário deve ter no mínimo 4 campos, sendo ao menos 1 do tipo SELECT.
F

1.4- O programa deve validar todos os campos do formulário como obrigatórios. A validação deve ser feita no back-end (servidor).
O
-->

<?php
ini_set('display_errors', 1);
error_reporting(E_ALL);
include_once("persistencia.php");

$jogos = buscarDados();
$titulo = "";
$desenvolvedora = "";
$genero = "";
$nota = "";
$review = "";

if (isset($_POST['submetido'])) {
    $titulo = $_POST['titulo'];
    $desenvolvedora = $_POST['desenvolvedora'];
    $genero = $_POST['genero'];
    $nota = $_POST['nota'];
    $review = $_POST['review'];
    $id = vsprintf( '%s%s-%s-%s-%s-%s%s%s', str_split(bin2hex(random_bytes(16)), 4));

    if (!$titulo){
        $msgErro = 'Informe o título';
    } else if (!$genero){
        $msgErro = 'Informe o gênero';
    } else if ($nota < 1){
        $msgErro = 'Informe a nota';
    } else if (!$desenvolvedora){
        $msgErro = 'Informe a desenvolvedora';
    } else if (!$desenvolvedora){
        $msgErro = 'Escreva uma review';
    } else {
        $jogo = array(
            'titulo' => $titulo,
            'genero' => $genero,
            'desenvolvedora' => $desenvolvedora,
            'nota' => $nota,
            'review' => $review,
            'id' => $id

        );
        $titulo = '';
        $desenvolvedora = '';
        $genero = '';
        $nota = '';
        $review = '';
        $msgErro = '';
        array_push($jogos, $jogo);
        salvarDados($jogos);
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cadastro jogos</title>
</head>
<body>
    <h1>Cadastro de Jogos</h1>
    <h3>Formulario de Jogos</h3>
    <form action="" method="POST">
        <input type="text" name="titulo" placeholder="Título" value="<?= $titulo?>">
        
        <br><br>
        
        <input type="text" name="desenvolvedora" placeholder="Desenvolvedora" value="<?= $desenvolvedora?>">
        
        <br><br>

        <select name="genero">
            <option value="" >--Genero--</option>
            <option value="RPG">RPG tático</option>
            <option value="PC">Point & Click</option>
            <option value="RL">Roguelike</option>
            <option value="O">Outro</option>
        </select>
        
        <br><br>
        
        <input type="number" name="nota" min="1" max="10" placeholder="00/10" value="<?= $nota?>">
        
        <br><br>
        
        <textarea name="review" value="<?= $review?>" rows="20" cols="70" placeholder="Sua review..."></textarea>
        
        <br><br>
        <input type="hidden" name="submetido" value="1">
        <button type="submit">Enviar</button>
        <button type="reset">Limpar Respostas</button>


    </form>
    <?php if ($msgErro):?>
        <br>
        <div><?php print($msgErro)?></div>
    <?php endif?>
    <h3>Listagem de Jogos</h3>
    <table border="5px">
        <tr>
            <td>Titulo</td>
            <td>Genero</td>
            <td>Desenvolvedora</td>
            <td>Nota</td>
            <td>Review</td>
        </tr>
        <?php foreach($jogos as $jogo): ?>
            <tr>
                <td><?= $jogo['titulo']?></td>
                <td><?php
                    switch($jogo['genero']) {
                        case 'RPG':
                            print("RPG tático");
                            break;
                        case 'PC':
                            print("Point & click");
                            break;
                        case 'RL':
                            print("Roguelike");
                            break;
                        case 'O':
                            print("Outro");
                            break;
                    }?></td>
                <td><?= $jogo['desenvolvedora']?></td>
                <td><?= $jogo['nota']?></td>
                <td><?= $jogo['review']?></td>
                <td><a href="jogosDel.php?id=<?= $jogo['id']?>">Excluir</a></td>
            </tr>
        <?php endforeach; ?>
    </table>
    <br>
    <br>
    <h5>Bruno Rubim & Mickael Leonardo</h5>
</body>
</html>