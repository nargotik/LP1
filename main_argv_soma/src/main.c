/**
 * @header      main.c
 * @abstract    Teste das caracteristicas da funcao main
 * @discussion  Estudo das caracteristicas da função main
 *              ir'a fazer a soma do argv[1] e argv[2]
 * 
 * @author      Daniel Torres <a17442|at|alunos.ipca.pt>
 * @link        Daniel Torres GIT <https://github.com/nargotik>
 * @ref         some reference
 * @version     1.0 18 de Outubro de 2018
 */


#include <stdio.h>
#include <stdlib.h>

/*!
 * @function    main
 * @abstract    main program function.
 * @param       argc    contagem de argumentos
 * @param       argv    array de elementos passados para o main
 * @result      An integer result of this function.
 */
int main(int argc, char** argv)
{
    
    printf("Numero de parametros: %d\n", argc);
    
    // Verifica se tem 3 parametros
    if (argc == 3) {
       int op1,op2;
       op1 = atoi(argv[1]);
       op2 = atoi(argv[2]);
       
       printf("Soma de %d + %d = %d\n\n",op1,op2, op1+op2 );
    }
    
    
    return (EXIT_SUCCESS);
}

