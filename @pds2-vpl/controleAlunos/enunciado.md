Você foi contratado pela UFMG para fazer um controle dos alunos matriculados. Para isso você vai ter que implementar um TAD com os dados e as operações sobre um aluno e um programa (main) que faz a leitura dos dados e emite um relatório.

TAD Aluno:

Você deverá implementar um TAD "Aluno" que armazena o nome (string), número de matrícula (int), e um vetor de tamanho indeterminado com notas obtidas pelo aluno (notas com valores inteiros). O seu TAD deverá possuir métodos para calcular a média das notas, retornar a nota máxima, além de métodos acessórios, como construtor, métodos para acesso aos dados, etc. 

Main: 

No seu arquivo main, você deverá ler dos dados de um conjunto de alunos e depois imprimir um relatório. Mais especificamente, você deverá ler, para cada aluno, o nome, número de matrícula e o conjunto de notas. Você não tem informação sobre o número de notas de cada aluno, portanto use o flag -1 para terminar a leitura das notas. Da mesma forma, você não tem informações sobre o número de alunos. Portanto, use o flag "END" para terminar a entrada de dados. Você pode considerar que o nome será fornecido em uma linha, o número de matrícula na linha seguinte e as notas na terceira linha, separadas por espaço (ver exemplo abaixo).

Como saída, você deverá imprimir para cada aluno: na primeira linha, o número de matrícula, nome e o vetor de notas. Na segunda linha, a média das notas (com duas casas decimais) a maior nota e menor nota. Os alunos deveram ser impressos em ordem alfabética.

Exemplo: </br>

Entrada: </br>

Luiz </br>
2021153 </br>
60 75 90 80 75 -1 </br>
Joao </br>
2022098 </br>
85 95 90 -1 </br>
Maria </br>
2022051 </br>
90 100 100 90 -1 </br>
END </br>

Saída: </br>

2022098 Joao 85 95 90 </br> 
90.00 95 85 </br>
2021153 Luiz 60 75 90 80 75 </br> 
76.00 90 75 </br>
2022051 Maria 90 100 100 90 </br> 
95.00 100 90 </br>

Você deverá submeter 3 arquivos: aluno.hpp, aluno.cpp, e main.cpp. No seu programa principal, você não deverá acessar diretamente os atributos dos seu TAD. Todo o acesso deverá ser feito através dos métodos implementados.

