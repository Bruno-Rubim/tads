<?php

    class Pessoa {
        private $nome;
        private $sobrenome;

        public function __construct($nome="", $sobrenome=""){
            $this->nome = $nome;
            $this->sobrenome = $sobrenome;
        }

        public function getNomeSobrenome(){
            return $this->nome . " " . $this->sobrenome;
        }

        public function getNome(){
                return $this->nome;
        }

        public function setNome($nome){
                $this->nome = $nome;

                return $this;
        }

        public function getSobrenome(){
                return $this->sobrenome;
        }

        public function setSobrenome($sobrenome){
                $this->sobrenome = $sobrenome;

                return $this;
        }
    }

    $pessoa1 = new Pessoa();
    $pessoa1->setNome("Alehandro");
    $pessoa1->setSobrenome("AleAlehandro");
    print($pessoa1->getNomeSobrenome());
?>