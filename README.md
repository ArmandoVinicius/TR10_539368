<h1 align="center">Vetor Ordenado</h1>

<p style="font-size: 14px">
    O código tem 3 funções principais, dentre elas:
    <ul>
        <li>Criar um vetor estático de tamanho N.</li>
        <li>Adicionar números dentro do vetor criado de forma ordenada (de forma crescente).</li>
        <li>Remover o menor número do vetor.</li>
    </ul>
</p>

<p style="font-size: 16px">⁖ Exemplo:</p>
<img src="https://i.imgur.com/FIfqpeS.png">

<hr>
<h1 style="font-size: 24px">Passo a passo para executar:</h1>
<h2>Pré-requisitos:</h2>

- <p>GCC</p>

<hr>
<h2>📂 Baixando os arquivos</h2>
<p>O primeiro passo para rodar o programa é baixar os arquivos necessários, para isso, vá no terminal do seu computador e digite:</p>

<code>
<span style="color: tomato">»</span> git clone https://github.com/ArmandoVinicius/TR10_539368
</code>
<br>

<hr>

<h2>📚 Gerando as bibliotecas</h2>
<p>Para gerar as bibliotecas necessárias paraa rodar o código, vá no terminal do seu computador e digite:</p>

<code>
<span style="color: tomato">»</span> gcc -c TR4_539368.c
</code>

<br>

<p>Note que o arquivo <span style="font-weight: bold; color: tomato">TR4_539368.o</span> será criado nos seus arquivos, essa é a biblioteca necessária para executar o programa.</p>

<hr>

<h2>💿 Gerando o arquivo executável:</h2>
<p>Para gerar o arquivo executável vá ao terminal e digite:</p>


<code>
<span style="color: tomato">»</span> gcc .\TR4_539368.o main.c -o main
</code>

<br>

<p>Note que para o comando anterior funcionar é necessário já ter os arquivos <span style="font-weight: bold; color: tomato">TR4_539368.o, TR4_539368.h, TR4_539368.c e main.c</span> na sua pasta.</p>

<p>Explicação:

<li><span style="font-weight: bold; color: tomato">.\TR4_539368.o</span> é a biblioteca usada na execução do código.</li>
<li><span style="font-weight: bold; color: tomato">main.c</span> é a parte principal do código, a primeira parte que vai executar do seu programa.</li>
<li><span style="font-weight: bold; color: tomato">-o</span> é uma flag utilizada para nomeação de arquivos.</li>
<li><span style="font-weight: bold; color: tomato">main</span> é a nomeação do arquivo executável resultante (normalmente main.exe).</li>
</p>

<hr>
<h2>💻 Executando o programa</h2>
<p>Finalmente para executar o programa vá ao seu terminal e digite:</p>
Linux: <br>
<code>
<span style="color: tomato">»</span> ./main </code>

Windows: <br>
<code>
<span style="color: tomato">»</span> ./main.exe 
</code>