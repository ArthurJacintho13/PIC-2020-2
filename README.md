# PIC-2020-2
Trabalho final de Projeto Integrado de Computação - Engenharia de computação - Ufes

# RESUMO
Construção de um teclado simples com 12 teclas, 7 notas e 5 acidentes (sustenidos), com o objetivo de familiarizar qualquer um com a dinâmica básica de um teclado real e de ensinar a tocar algumas músicas nesse instrumento.

# DESCRIÇÃO:
O projeto inclui a construção de um circuito elétrico simples em uma protoboard, onde estão as teclas do teclado e os leds (um por tecla). O projeto conta com dois modos: freestyle e aprendizado. O modo freestyle consiste em tocar o instrumento livremente, permitindo assim que o usuário toque o que quiser. Já o modo aprendizado consiste em aprender a tocar algumas músicas previamente cadastradas e subidas para o arduino. A alternância entre o modo freestyle e aprendizado deve ser realizada pela chamada das funções freeStyle() e musica(), respectivamente, na função loop() do programa do arduino. Além disso, devem ser incluídas as bibliotecas "notas.h" e "musicas.h" para que o teclado funcione. A biblioteca "notas.h" apresenta os macros com os valores específicos de cada nota e seu tom. A biblioteca "musicas.h" apresenta os macros necessários para a escrita de novas músicas, que poderão ser subidas no arduino e tocadas pelo usuário, e também algumas músicas já pre-cadastradas pelos criadores.

# ESQUEMÁTICO:
https://imgur.com/see8qT8

Obs: o visual do esquemático pode ser melhorado para que se assemelhe mais a um teclado real. Isso pode ser feito colocando as teclas dos sustenidos acima do nível das teclas das notas, como em um teclado real.

# CODIGO
O código na versão presente permite ainda a implementação de um dispositivo sonoro que melhore a qualidade do som gerado pelo teclado. Fica ao bom grado do usuário adicionar as linhas de codigo necessárias para isso.

#VIDEO DEMONSTRATIVO
https://youtu.be/l5gIYVnVHKg
