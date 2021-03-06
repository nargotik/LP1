/**
 * @header      main.c
 * @abstract    Teste das caracteristicas da funcao main
 * @discussion  Estudo das caracteristicas da fun��o main
 *              Parametros argc e argv
 *              argc - 'e o numero de parametros que foi passado 
 *                      de comandos
 *              argv - 'e o array dos parametros passados na linha
 *                      de comandos
 * 
 *              nota: as variaveis do parametro main nao tem que se chamar
 *                    argv e argc
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
    int parametros = argc;
    
    printf("Numero de parametros: %d\n", parametros);
    
    // Ciclo para correr os parametros e mostrar
    int i;
    for (i = 0; i < parametros; i++) {
        printf("Parametro %d - %s\n",i,argv[i]);
    }
    
    return (EXIT_SUCCESS);
}

