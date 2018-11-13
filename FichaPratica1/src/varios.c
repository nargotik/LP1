/*!
 * @header      varios.c
 * @abstract    V�rias fun��es implementadas para a Ficha Pr�tica de LP1.
 * @discussion  Este ficheiro contem as fun��es que foram pedidas
 *              explicitamente na ficha
 * 
 * @author      Daniel Torres <a17442|at|alunos.ipca.pt>
 * @link        Daniel Torres GIT <https://github.com/nargotik>
 * @version     1.0 12 de Novembro de 2018
 */


#include "comum.h"

/*!
 * Fun��o que retorna o maior valor de 3
 * 
 * @param a valor 1
 * @param b valor 2
 * @param c valor 3
 * @return valor maior
 */
int Maior3(int a, int b, int c) {
    if (a>=b && a>=c) return a; // a � maior
    if (b>=a && b>=c) return b; // b � maior
    return c; // c � maior
}

/*!
 * Fun��o que retorna o maior valor de 2 valores
 * 
 * @param a valor 1
 * @param b valor 2
 * @return valor maior
 */
int Maior(int a, int b) {
    return (a>=b) ? a : b;
}


/*!
 * Fun��o para area do triangulo
 * 
 * @param base base do triangulo
 * @param altura altura do triangulo
 * @return area do triangulo
 */
float AreaT(float base, float altura) {
    return (base * altura) / 2;
}

/*!
 * Procedimento de mostrar a tabuada de um determinado valor
 * @discussion 
 *          
 * @param valor tabuada a mostrar
 */
void TabuadaX(int valor) {
    // de i=1 at� i<=10 fazer ...
    for (int i=1;i<=10; i++) 
        printf("\n%d * %i = %d",valor,i, (valor*i) );
}


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
int QuantosValoresLidos() {
    int valor=0,valores=0;
    do {
        valores++;
        printf("\nInsira valor %d:",valores);
        scanf("%d",&valor);
    } while (valor!=0);
    // O zero � considerado um valor lido
    // valores--; 
    // para n�o considerar o zero devemos subtrair um valor �
    // variavel valores
    return valores;
}
