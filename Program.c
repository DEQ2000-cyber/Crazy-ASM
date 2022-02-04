#include "ASM.h"
void ASM(){

	mov( eax, 90 );

	MAIN:

	sub( eax, 1 );

	PRINT("Hola: %i\n", eax );

	jnz( eax, MAIN );

}