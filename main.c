#include <stdio.h>
#include "conjunto.h"

int main(){
    CONJUNTO c, d, e;
    c = conjunto_vacio();
    d = conjunto_vacio();
    e = conjunto_vacio();
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);
    printf("El conjunto c está vacío %d\n", es_vacio(c));
    c = agregar(c, 2);
    c = agregar(c, 3);
    c = agregar(c, 19);
    c = agregar(c, 11);
    c = agregar(c, 15);
    print_conjunto(c);

    d = agregar(d, 8);
    d = agregar(d, 44);
    d = agregar(d, 2);
    print_conjunto(d);

    e = _union(c, d);
    print_conjunto(e);
    
    printf("QUITAR\n");
    print_conjunto(quitar(c, 3));
    return 0;
}

