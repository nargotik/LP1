/* 
 * File:   comum.h
 * Author: Daniel Torres <a17442|at|alunos.ipca.pt>
 * 
 * Created on 12 de Novembro de 2018, 21:09
 */

#ifndef ALL
#define ALL

#include <stdio.h>
#include <locale.h>
//#include <stdlib.h>



/**
 * Fun��o que retorna o maior valor de 3
 * 
 * @param a valor 1
 * @param b valor 2
 * @param c valor 3
 * @return valor maior
 */
int Maior3(int a, int b, int c);

/**
 * Fun��o que retorna o maior valor de 2 valores
 * 
 * @param a valor 1
 * @param b valor 2
 * @return valor maior
 */
int Maior(int a, int b);

/**
 * Fun��o para area do triangulo
 * 
 * @param base base do triangulo
 * @param altura altura do triangulo
 * @return area do triangulo
 */
float AreaT(float base, float altura);

/*!
 * Fun��o que le n de valores at� inserirem o valor 0
 * Quando o valor 0 for inserido retorna o numero de valores lido
 * 
 * @discussion 
 *              V.
 *              QuantosValoresLidos: l� um conjunto de valores 
 *              num�ricos at� que o valor zero (0) seja inserido. 
 *              Devolve quantos valores foram lidos.
 *              
 * @return Quantidade de valores lidos (zero incluido)
 */
int QuantosValoresLidos();

/*!
 * Procedimento de mostrar a tabuada de um determinado valor
 * @discussion 
 *          
 * @param valor tabuada a mostrar
 */
void TabuadaX(int valor);
#endif