#ifndef musicas_genericas
#define musicas_genericas

//Definindo porta do arduino onde estará conectado o speaker/buzzer
#define SPK 11
/*
  Os defines seguintes fornecem uma forma mais fluida e natural de escrever as músicas, utilizando os códigos básicos da música ocidental 
*/
#define C 0
#define C_S 1
#define D 2
#define D_S 3
#define E 4
#define F_ 5
#define F_S 6
#define G 7
#define G_S 8
#define A 9
#define A_S 10
#define B 11
/*
---------------------------- BIBLIOTECA DE MUSICAS ------------------------------------
*/

/*
Modo de uso:
O cadastro da música envolve o preenchimento de dois vetores: ordem[] e tom[]

1)ordem[]: O vetor ordem[] contem as notas a serem pressionadas em sequência para a reprodução da musica.
           Tríades e tétrades não são possíveis nesse projeto, por isso cadastre apenas a melodia da música em questão.
2)tom[]: O vetor tom contem os tons das notas a serem pressionadas em sequência para a reprodução da música.
         Os elementos desse vetor devem estar em sincronia com as notas sequenciadas presentes no vetor ordem[].
         Caso contrário, a música estará fora do seu tom original.
    
Obs: os vetores ordem[] e tom[] devem possuir o mesmo tamanho, ou seja, numero de teclas/notas
Ao final, basta descomentar os dois vetores relacionados a sua musica, comentar todos e demais e você está pronto pra tocar :)
*/
  
// Musica do re mi fa
//int ordem[] = {C, D, E, F_, F_, F_, C, D, C, D, D, D, C, G, F_, E, E, E, C, D, E, F_, F_, F_};
//int tom[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

// Musica UP 
//int ordem[] = {D, F_S, D, C_S, D, F_S, C_S, B, B, D, B, A, A, F_S, E, B, F_S, E, D, B, D, E, D, C_S, C_S, E, C_S, A, A, D_S, A, G, G, B, A, F_S, A, G_S, G_S, G, B, D, C_S};
//int tom[] =   {5, 5, 5, 5, 5, 5, 5, 3, 3, 5, 3, 3, 3, 5, 5, 3, 5, 5, 5, 3, 5, 5, 5, 5, 5, 5, 5, 3, 3, 5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 5};

// Musica Parabens pra tu bro
//int ordem[] = {A, A, B, A, D, C_S, A, A, B, A, E, D, A, A, A, F_S, D, C_S, B, G, G, F_S, D, E, D};
//int tom[] =  {3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 4, 4, 3, 3, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 4};

//65 segundos de como é grande o meu amor por voce                                                                                          
//int ordem[] = {A, C, A, C, A, C, A, B, G, E, C, E, E, G, G, F_, D, F_, D, F_, D, D, F_, F_, E, D, E, C, B, B, A, C, A, A, C, A, B, G, A, E, E, E, G, G, F_, D, F_, D, F_, D, D, F_, F_, E, D, E, C, B, B, A, C, A, A, C, A, B, G, E, C};
//int tom[] ={3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 4, 3, 3, 4, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 4, 3, 3, 4, 3, 3, 3, 4, 3};

//mARIO
//int ordem[] = {E, E, E, C, E, G, G, C, G, E, A, B, A_S, A, G, E, G, A, F, G, E, C, D, B}
//int tom[] =   {5, 5, 5, 5, 5, 5, 4, 5, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 4}

//42 segundos de pantera cor de rosa
int ordem[] = {D_S, E, F_S, G, D_S, E, F_S, G, C, B, E, G, B, A_S, A, G, E, D, E, D_S, E, F_S, G, D_S, E, F_S, G, C, B, G, B, E, D_S, D_S, E, F_S, G, D_S, E, F_S, G, C, B, E, G, B, A_S, A, G, E, D, E, E, D, B, A, G, E, A_S, A, A_S, A, A_S, A, A_S, A, G, E, D, E, E};
int tom[] = {4, 4, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

//Desperte o músico em vc e escreva uma nova música! :)
//int ordem[] = {};
//int tom[] = {};

#endif
