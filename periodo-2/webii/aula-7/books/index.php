<!--

0- Implemente uma página PHP que permita
inserir e listar livros persistidos em um arquivo
JSON com os seguintes dados:
– ID (formato UUID)
– Título
– Gênero (D=Drama, F=Ficção, R=Romance, O=Outro)
– Quantidade de páginas

1- Utilize o cadastro de Livros visto na última aula (campos titulo, gênero e quantidade de páginas), implementando as validações ao formulário, sendo:
    1.1- Validação front-end com JavaScritp
    1.2- Validação back-end com PHP

2- Complemente o exercício 1 acima, adicionando no back-end as seguintes validações:
    2.1- Quantidade de páginas maior que zero;
    2.2- Título do livro com no mínimo 3 e no máximo 50 caracteres (utilize a função strlen($string));
    2.3- DESAFIO: não permitir cadastro de com título repetido

Validar com uma consulta ao arquivos JSON
s-->

<?php
ini_set('display_errors', 1);
error_reporting(E_ALL);
include_once("persistencia.php");

$livros = buscarDados();
$titulo = "";
$genero = "";
$qtdPag = "";

    if (isset($_POST['submetido'])) {
        $titulo = $_POST['titulo'];
        $genero = $_POST['genero'];
        $qtdPag = $_POST['qtdPag'];
        $id = vsprintf( '%s%s-%s-%s-%s-%s%s%s', str_split(bin2hex(random_bytes(16)), 4));

        if (!$titulo){
            $msgErro = 'Informe o título do livro';
        } else if (!$genero){
            $msgErro = 'Informe o gênero do livro';
        } else if ($qtdPag < 1){
            $msgErro = 'Quantidade de páginas deve ser maior que 0';
        } else {
            $livro = array(
                'titulo' => $titulo,
                'genero' => $genero,
                'qtdPag' => $qtdPag,
                'id' => $id
            );
            $titulo = '';
            $genero = '';
            $qtdPag = '';
            array_push($livros, $livro);
            salvarDados($livros);
        }
    }

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cadastro Livros</title>
</head>
<body>
    <h1>Cadastro de livros</h1>
    <h3>Formulario de livros</h3>
    <form action="" method="POST">
        <input type="text" name="titulo" placeholder="Título" value="<?= $titulo?>">
        
        <br><br>
        
        <select name="genero">
            <option value="" >--Genero--</option>
            <option value="D">Drama</option>
            <option value="F">Ficcao</option>
            <option value="R">Romance</option>
            <option value="O">Outro</option>
        </select>
        
        <br><br>
        
        <input type="number" name="qtdPag" placeholder="Quantidade de Paginas" value="<?= $qtdPag?>">
        
        <br><br>
        
        <input type="hidden" name="submetido" value="1">
        <button type="submit">Enviar</button>
        <button type="reset">Limpar Respostas</button>


    </form>
    <h3>Listagem de livros</h3>
    <table border="1px">
        <tr>
            <td>Titulo</td>
            <td>Genero</td>
            <td>Qtd Paginas</td>
            <td>Qtd Paginas</td>
        </tr>
        <?php foreach($livros as $livro): ?>
            <tr>
                <td><?= $livro['titulo']?></td>
                <td><?php
                    switch($livro['genero']) {
                        case 'D':
                            print("Drama");
                            break;
                        case 'F':
                            print("Ficcao");
                            break;
                        case 'R':
                            print("Romance");
                            break;
                        case 'O':
                            print("Outro");
                            break;
                    }?></td>
                <td><?= $livro['qtdPag']?></td>
                <td><a href="livrosDel.php?id=<?= $livro['id']?>">Excluir</a></td>
            </tr>
        <?php endforeach; ?>
    </table>
    <br>
    <br>
    <div><?php $msgErro?></div>
</body>
</html>

<?


?>