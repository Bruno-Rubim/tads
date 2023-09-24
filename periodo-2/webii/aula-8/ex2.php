<?php

    class Livro{
        private $titulo;
        private $autor;
        private $genero;
        private $qtdPag;

        public function __construct($titulo="", $autor="", $genero="", $qtdPag=0){
            $this->titulo = $titulo;
            $this->autor = $autor;
            $this->genero = $genero;
            $this->qtdPag = $qtdPag;
        }

        public function getTitulo(){
                return $this->titulo;
        }

        public function setTitulo($titulo){
                $this->titulo = $titulo;

                return $this;
        }

        public function getAutor(){
                return $this->autor;
        }

        public function setAutor($autor){
                $this->autor = $autor;

                return $this;
        }

        public function getGenero(){
                return $this->genero;
        }

        public function setGenero($genero){
                $this->genero = $genero;

                return $this;
        }

        public function getQtdPag(){
                return $this->qtdPag;
        }

        public function setQtdPag($qtdPag){
                $this->qtdPag = $qtdPag;

                return $this;
        }

    }

    $livro1 = new Livro("titulo", "fernando de noronnha", "rock alternativo", 12);
    $livro2 = new Livro("os certoes", "certao", "simulador de certos", 734);
    $livro3 = new Livro("Unnamed diary nu 027", "unknown", "survival log", 216);

    $livros = array($livro1, $livro2, $livro3);
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <table border="1">
            <?php foreach($livros as $livro):?>
                <tr>
                <td><?= $livro->getTitulo() ?></td>
                <td><?= $livro->getAutor() ?></td>
                <td><?= $livro->getGenero() ?></td>
                <td><?= $livro->getQtdPag() ?></td>
                </tr>
            <?php endforeach;?>
    </table>
</body>
</html>
<?
