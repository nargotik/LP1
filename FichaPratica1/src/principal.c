/*!
 * @header      principal.c
 * @abstract    Programa principal
 * @discussion  Este ficheiro é o programa principal 
 *              pedido no trabalho prático de LP1
 *              O ficheiro contem procedimentos e funcoes nao explicitamente 
 *              pedidas na solucao
 * 
 * @author      Daniel Torres <a17442|at|alunos.ipca.pt>
 * @link        Daniel Torres GIT <https://github.com/nargotik>
 * @version     1.0 12 de Novembro de 2018
 */


#include "comum.h"

/**
 * Mostra Cabecalho
 * @param str Texto a mostrar no cabeçalho
 */
void MostraCabecalho(char* str) {
    printf( "\n\n"
            "================================================\n"
            "%s\n"
            "================================================\n"
            , str);
    
}

/*!
 * Função que le um valor inteiro
 * @return Valor inteiro
 */
int LeInteiro(char* str) {
    int valor=0;
    do {
        printf("\nInsira valor %s:",str);
        scanf("%d",&valor);
    } while (!(valor>=0));
    return valor;
}

/*!
 * Função que le um valor float
 * @return Valor Float
 */
float LeFloat(char* str) {
    float valor=0;
    do {
        printf("\nInsira valor para %s:", str);
        scanf("%f",&valor);
    } while (!(valor>=0));
    return valor;
}


/*!
 * @function        main
 * @abstract    main program function.
 */
void main()
{
    
    MostraCabecalho("Problema D-I \n Maior3");
    int a = LeInteiro("a");
    int b = LeInteiro("b");
    int c = LeInteiro("c");
    printf("O maior valor de %d,%d,%d é %d",a,b,c,Maior3(a,b,c));
    
    MostraCabecalho("Problema D-II \n Maior2");
    a = LeInteiro("a");
    b = LeInteiro("b");
    printf("O maior valor de %d,%d é %d",a,b,Maior(a,b));
    
    MostraCabecalho("Problema D-III \n AreaT");
    float base = LeFloat("Base");
    float altura = LeFloat("Altura");
    printf("A area do triangulo com base %2.f e altura %.2f é %.2f", 
            base, altura, AreaT(base, altura) );
    
    MostraCabecalho("Problema D-IV \n TabuadaX");
    TabuadaX( LeInteiro("tabuada") );
    
    MostraCabecalho("Problema D-V \n QuantosValoresLidos \n"
            "Insira valores termine com 0");
    int valoreslidos = QuantosValoresLidos();
    printf("Result foram lidos %d valores",valoreslidos);



}

