# ILLEGAL C CODING
Because being unsafe is not enough!

## Para que serve este repositório?
Quando estamos estudando linguagens, aprendendo a lidar com suas limitações e possibilidades, é quase impossível evitar escrever código "ruim". Faz parte do aprendizado escrever códigos que sejam ineficientes, mal otimizados ou mal projetados. Em C/C++, escrever um código "ruim" geralmente leva a bugs relacionados a má administração de memória como por exemplo, trabalhar com lixo de memória, ponteiro apontando para o endereços errados etc

E o objetivo desse repositório, é justamente ter um ambiente onde eu possa criar programas que compilem sem errors ou warings, e funcionam da forma em que foram planejados para funcionar, por mais que pareça que o código indique uma "segmentation fault" eminente a cada linha.

Mas...
### !!ATENÇÃO!!!
Você não deve usar os códigos desse repositório sob NENHUMA circunstância em projetos reais. Você pode estar colocando a integridade dos seus dados, a segurança do seu sistema, a sua vida, e até mesmo a sua máquina em risco.
Para maior segurança, teste em equipamentos rodando Linux, com processador x86_64 e com mais de 4GB de RAM (que é a configuração da minha máquina), e com menos 5 de sanidade(configuração de minha pessoa).

## Rodando os códigos
Para rodar algum dos exemplos, basta entrar na pasta e rodar o compilador gcc. ex:

    cd garbage-collector
    gcc main.c -o garbage-collector
    ./garbage-collector

E o programa será executado.

