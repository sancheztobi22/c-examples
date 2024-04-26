#include <stdio.h>
#include "9-encabezados.h"

int main() {

    int v;
    int z;

    // Llama a las 3 funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);
    z = funcion4(4);

    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);

    /// imprimir el valor que retorno funcion4()
    ///
    printf("z = %d\n", z);


    return 0;

}

// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion3(int x) {
    printf("En funcion3()...\n");
    int y = x + 2;
    return y;
}

/// implementacion de funcion4 para la resta
///
int funcion4(int x){
	printf("En funcion4() ...\n");
        int z = x - 2;
	return z;
}

