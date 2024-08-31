# ED1
Exercico 1 
Add: É uma função para realizar uma adição de dois números inteiros fornecidos como parametros.
Parâmetros:
a: o primeiro número inteiro a ser somado.
b: o segundo número inteiro a ser somado.
Retorno: A função retorna um valor inteiro que é a soma dos dois parâmetros (a + b)
Não tem efeito colateral.

Subtract:
A função subtract é projetada para calcular a diferença entre dois números inteiros.
Ela recebe dois parâmetros, a e b e retorna o resultado da operação a - b.
Ex: Se a = 10 e b = 4, a função retorna 6.
Parâmetros:
a: o primeiro número do qual o segundo número será subtraído.
b: o número que será subtraído do primeiro.
Valor de Retorno:
A função retorna um valor inteiro que é a diferença entre a e b.

Contribuição para Modularidade:
Encapsulamento: A função subtract encapsula a lógica da subtração, permitindo que o programa principal ou outras funções a utilizem sem precisar lidar com os detalhes da operação.
Reutilização: Ao isolar a subtração em uma função separada, ela pode ser reutilizada em diversas partes do programa ou em diferentes programas, evitando duplicação de código.
Manutenção: Se houver necessidade de alterar a forma como a subtração é realizada (por exemplo, para adicionar validações), isso pode ser feito diretamente na função subtract sem afetar outras partes do programa.
Testabilidade: A função subtract pode ser testada isoladamente com diferentes entradas, facilitando a identificação de problemas ou verificações de desempenho e precisão.

Multiply:

Funcionalidade:
A função multiply realiza a multiplicação de dois números inteiros.
Recebe dois parâmetros inteiros a e b e retorna o resultado da multiplicação a * b.
Ex: Se a = 3 e b = 5, a função retorna 15, pois 3 * 5 = 1
Parâmetros:
a: O primeiro número inteiro (multiplicando), que será multiplicado pelo segundo número.
b: O segundo número inteiro (multiplicador), que multiplica o primeiro numero

Valor de Retorno:
A função retorna um valor inteiro que é o produto de a e b.

Efeitos Colaterais:
A função multiply é uma função pura.
A saída da função depende exclusivamente dos valores dos parâmetros de entrada (a e b).

Contribuição para Modularidade:
Encapsulamento: Ao encapsular a lógica da multiplicação em uma função separada, o programa pode realizar multiplicações sem duplicar código ou se preocupar com os detalhes internos da operação.
Reutilização: A função pode ser reutilizada facilmente em outras partes do programa ou em programas diferentes. Isso promove a reutilização do código e reduz a redundância.
Manutenção: Qualquer alteração na lógica de multiplicação precisa ser feita apenas na função multiply, facilitando o gerenciamento e manutenção do código. Por exemplo, se houvesse uma necessidade futura de adicionar validações, seria fácil ajustar apenas nesta função.
Testabilidade: A função multiply pode ser testada isoladamente com diversos conjuntos de valores para garantir que ela funciona corretamente em todos os casos previstos. Isso simplifica o processo de teste e depuração



Divide:
dividendo: O valor que será dividido. Pode ser um número inteiro ou decimal
divisor: O valor pelo qual o dividendo será dividido. Deve ser diferente de zero para evitar erros de divisão por zero.

Valor de Retorno:
A função retorna um número (float) que é o resultado da divisão do dividendo pelo divisor.

Efeitos Colaterais:
Esta função não possui efeitos colaterais, pois apenas realiza uma operação matemática e retorna o resultado. Não modifica nenhuma variável externa, não realiza I/O (entrada/saída) e não altera o estado do programa de maneira inesperada

Contribuição para o Conceito de Modularidade:
Encapsulamento: Ao encapsular a lógica de divisão dentro de uma função, o programa se torna mais modular. Isso significa que a função pode ser chamada em qualquer parte do código onde essa operação seja necessária, sem precisar repetir a lógica.

Reutilização de Código: A função pode ser reutilizada diversas vezes, promovendo DRY (Don't Repeat Yourself). Isso reduz a redundância no código e facilita a manutenção.

Facilidade de Testes: Funções modulares como divide são mais fáceis de testar de maneira isolada, garantindo que cada parte do programa funcione conforme o esperado.

Clareza e Manutenção: Com a lógica da divisão isolada, o código se torna mais claro e fácil de manter, pois cada função tem uma responsabilidade bem definida.

Flexibilidade: Se a lógica de divisão precisar ser alterada (por exemplo, para adicionar tratamento de erros mais sofisticado ou alterar o tipo de retorno), as mudanças precisam ser feitas apenas na função divide, em vez de em múltiplos locais do programa.

Main:
Funcionalidade:
A função main é responsável por inicializar o programa, ou seja, preparar tudo o que é necessário para que o programa possa começar a funcionar. Isso inclui alocar memória, abrir arquivos, etc.

Retorno:
A função main retorna um valor inteiro para o sistema operacional. Esse valor geralmente indica se o programa foi executado com sucesso ou se ocorreu algum erro

Contribuição para o Conceito de Modularidade:

Dividir o programa em partes menores: Ao chamar outras funções, a função main divide o programa em partes menores e mais fáceis de entender e manter.
Esconder a complexidade: As funções chamadas pela função main podem ter uma implementação complexa, mas a função main apenas precisa saber como chamá-las. Isso torna o código mais fácil de ler e entender.
Reutilizar código: As funções podem ser reutilizadas em diferentes partes do programa, o que evita a duplicação de código e facilita a manutenção

Efeitos colaterais:

A função main pode ter diversos efeitos colaterais, dependendo da sua implementação. Alguns exemplos de efeitos colaterais incluem:

Alteração de variáveis globais: Se a função main alterar o valor de uma variável global, essa alteração será visível em todas as partes do programa.
Criação de arquivos: A função main pode criar novos arquivos no sistema de arquivos.
Exibição de mensagens na tela: A função main pode exibir mensagens para o usuário.
Conexão com outros programas ou dispositivos: A função main pode se conectar a outros programas ou dispositivos, como uma base de dados ou uma impressora.
