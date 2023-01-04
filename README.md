# Programa em C - Método de Gauss-Seidel
_Este repositório conta com um programa em C para demonstrar o uso do método de cálculo numérico de Gauss-Seidel._

O método de Gauss-Seidel é um método iterativo para resolver sistemas de equações lineares. Para usar o método, o sistema de equações deve ser escrito na forma de `Ax = b`, onde `A` é uma matriz quadrada e `x` e `b` são vetores. O método então começa com uma suposição inicial para as variáveis `x` e, em seguida, atualiza sucessivamente cada variável usando as equações do sistema até que as estimativas atinjam uma precisão satisfatória.

O método de Gauss-Seidel é geralmente mais rápido do que o método de Jacobi (outro método iterativo para resolver sistemas de equações lineares) mas pode ser menos preciso. No entanto, ele é frequentemente usado em problemas que exigem uma solução rápida e aproximada.

Sistemas lineares utilizados no programa:

* Sistema linear 01:

![image](https://user-images.githubusercontent.com/16453928/210641991-a536e5f5-ff0c-4c40-996f-d1abda9b3ee0.png)

* Sistema linear 02:

![sistema](https://user-images.githubusercontent.com/16453928/210643623-f349d6cc-5c3d-4832-a852-f8cef0cde0d4.jpeg)

</br>

## Como utilizar o programa

**1. Execute o programa.**

Execute o programa em alguma IDE para linguagem C, como por exemplo o DevC++

**2. Verifique qual sistema você está utilizando.**

O código a principio foi desenvolvido para sistemas `Linux`  , mas pode funcionar também no `Windows` apenas fazendo as seguintes modificações no código:

* Acrescente a biblioteca `windows.h` no cabeçalho do código da seguinte maneira: `#include <windows.h>`
* Em todas as linhas que existir o comando `system("clear");` troque para `system(“cls”);`

Após fazer está modificação, o seu programa já está apto para ser executado no Windows.


**3. Definindo os sistemas lineares.**

Neste código existem dois exemplos de sistemas lineares predefinidos. Para calcular os resultados de um sistema específico basta escolher no prompt quando executar o programa, assim como indica na imagem a seguir.

![image](https://user-images.githubusercontent.com/16453928/210644360-8813cff1-0126-4c82-98b2-2aefac31a9e3.png)

</br>

## Modificando os sistemas para um de sua escolha.

![image](https://user-images.githubusercontent.com/16453928/210644992-e38f910c-a9ba-40d6-bdbe-0e97557672e3.png)

Os sistemas lineares podem ser substituidos por qualquer outro de sua escolha, basta seguir as instruções abaixo para modificar os predefinidos em código:

**1. Substitua a primeira linha do sistema linear.**

![image](https://user-images.githubusercontent.com/16453928/210645378-d8d272a0-3196-4455-99be-2c0259c31e54.png)

* Substitua a letra `a` pelo valor que estará após o simbolo `=` da primeira linha do seu sistema.

* Substitua a letra `b` pelo valor que estará junto a variável `y`.

* Substitua a letra `c` pelo valor que estará junto a variável `z`.

* E por último, substitua a letra `d` pelo primeiro valor desta linha que é parte da diagonal* do sistema linear.

> *Diagonal do sistema linear: Na notação de matriz, a diagonal principal de uma matriz é a sequência de elementos da matriz que vão da esquerda para a direita, da parte superior para a parte inferior. Em uma matriz quadrada n x n, os elementos da diagonal principal são aqueles com índices (i, j), onde i = j. Por exemplo, na matriz abaixo:

> [ㅤ**a**ㅤㅤㅤbㅤㅤㅤcㅤ]

> [ㅤdㅤㅤㅤ**e**ㅤㅤㅤfㅤ]

> [ㅤgㅤㅤㅤhㅤㅤㅤ**i**ㅤ]

> Os elementos da diagonal principal são `a`, `e` e `i`.


**2. Substitua a segunda linha do sistema linear.**

![image](https://user-images.githubusercontent.com/16453928/210649686-6c2a3426-aa75-4e20-a33b-0eee38168b2f.png)

* Substitua a letra `a` pelo valor que estará após o simbolo `=` da primeira linha do seu sistema.

* Substitua a letra `b` pelo valor que estará junto a variável `x`.

* Substitua a letra `c` pelo valor que estará junto a variável `z`.

* E por último, substitua a letra `d` pelo primeiro valor desta linha que é parte da diagonal do sistema linear.


**3. Substitua a terceira linha do sistema linear.**

![image](https://user-images.githubusercontent.com/16453928/210650039-5d2d6b72-f317-44c0-be21-3bc280a24c32.png)

* Substitua a letra `a` pelo valor que estará após o simbolo `=` da primeira linha do seu sistema.

* Substitua a letra `b` pelo valor que estará junto a variável `x`.

* Substitua a letra `c` pelo valor que estará junto a variável `y`.

* E por último, substitua a letra `d` pelo primeiro valor desta linha que é parte da diagonal do sistema linear.
