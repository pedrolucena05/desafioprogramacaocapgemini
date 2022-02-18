# Desafio Programação Capgemini

Programas em C e com a IDE Codeblocks;

Fiz o upload dos arquivos gerados pelo codeblocks após o build;

Os códigos tem comentarios explicando o que cada sessão do programa faz;

-------------------------------- Principal algoritmo de cada questão -------------------------------------

Questão 1: Fiz um For dentro de outro For, sendo o primeiro responsável pela linha do triangulo e
o segundo responsável por printar a linha, tendo uma variavel que define se o caractere a printar
é um espaço (" ") ou uma estrela ("*");

Obs: O algoritmo printa triangulos retangulos de altura 1 a 50;

Questão 2: Percorro a string (senha) com um For, verificando cada caractere e definindo se cada 
requisito está sendo atendido, tendo um vetor flag de tamanho 6 que implemento com 0 se o requisito 
foi atendido e 1 caso contrário;

Questão 3: Dentro de um while responsável por identificar anagramas em substrings, começando com um 
índice (igual a tamanho da string menos um) e decrescendo até um, depois uso um vetor para armazenar
todas as substrings daquele índice (uma adjacente a outra no vetor), e depois faço um somatório de
cada caractere (ASCII) para as substrings serem comparadas e verificar se existe algum anagrama naquele 
índice;

Obs: Uso um For dentro de outro For para percorrer o somatório de cada substring e para garantir que 
todas as substrings serão comparadas (todas combinações possíveis);  


