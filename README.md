# Scalator

Scalator é um software de gerenciamento de reservas de um hotel desenvolvido em C++ e fazendo uso do [Qt](https://www.qt.io/) para renderizar a interface gráfica.

## Ferramentas necessárias

Como o programa utiliza uma interface gráfica é necessário instalar o compilador dela, que no nosso caso é o *qmake-qt4*.

**Para distribuição Linux Ubuntu:**

```bash
$ sudo apt-get install qt4-qmake
$ sudo apt-get install libqt4-dev
```

**Para distribuição Linux Fedora:**

```bash
$ sudo dnf install qt-devel
```

**Para distribuição Linux Archlinux:**

```bash
$ sudo pacmam -S qt4 4.8.7-26
```

***OBS: Caso ainda não tenha o compilador para *C e C++* *(gcc/g++)* no seu ambiente.***

**Para distribuição Linux Ubuntu:**

```bash
$ sudo apt install build-essential
```

**Para distribuição Linux Fedora:**

```bash
$ sudo dnf group install 'Development Tools'
```

**Para distribuição Linux Archlinux:**

```bash
$ sudo pacman -S base-devel
```

## Utilização

Primeiro realize o clone do repositório:

```bash
$ git clone https://github.com/CC4652/hotelProject.git
```

Navege até o diretório onde o repositório foi clonado:

```bash
$ cd path/to/hotelProject
```

Compile o projeto:

```bash
$ qmake-qt4 -project
$ qmake-qt4 Hotel.pro
$ make
```

Execute o script gerado:

```bash
$ ./Hotel
```

## Workflow do programa

Quando o Programa for inicializado pela primeira vez, é necessário realizar o cadastro de uma senha do administrador. Aparecerá um pop-up informando:

![http://i.imgur.com/K36Y9LY.png](http://i.imgur.com/K36Y9LY.png)

Realize o cadastro de uma senha:

![http://i.imgur.com/earc4WI.png](http://i.imgur.com/earc4WI.png)

Realize o cadastro de um funcionário para gerenciar o sistema, clicando no texto *"Não tem cadastro? Clique"*. Feito isso retorne a tela inicial e faça o login com o usuário e senha recem criados:

![http://i.imgur.com/n3Dj4aY.png](http://i.imgur.com/n3Dj4aY.png)

* Para realizar o *check in* de um novo hóspede clique em *"Nova reserva"*.

    * Preencha com todos os dados solicitados e salve.

* Caso queira consultar apenas os hóspedes ativos no hotel clique em *"Gerenciar todos os clientes do hotel no momento"*.

    * Para realizar o *checkout* do hóspede selecione o cliente desejado e clique em *"checkout"*.

* Para consultar o faturamento do Hotel ou consultar o controle de todos os hóspedes que já passaram pelo hotel, clique em *"Avançado"*:

![http://i.imgur.com/JUjqCKd.png](http://i.imgur.com/JUjqCKd.png)


## Sobre o desenvolvimento do programa

O programa foi desenvolvido com a intenção de realizar a implementaçã de estruturas de dados manualmente, sem fazer uso de bibliotecas que são para tal fim.

Foram implementadas 3 estruturas sendo elas, *LES* (Lista Estática Sequencial), *LDE* (Lista Dinâmica Encadeada) e *FDE* (Fila Dinâmica Encadeada.

* LES - foi utilizada para fazer o gerenciamento dos quartos.

* LDE - foi utilizada para realizar o gerenciamento dos hóspedes.

* FDE - foi utilizada para realizar a fila de faturamento dos hóspedes.

## Autores

* [Victor Lima](https://github.com/VictorLima1)
* [Lucas Alves](https://github.com/PhreidL) 
* [Guilherme Ferreira](https://github.com/gferreir)

## Licensa

[MIT](https://choosealicense.com/licenses/mit/)

