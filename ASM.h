/* MINI ENTRENAMIENTO DE ASM' */
/* PARA COMPRENDER UN POCO EL FUNCIONAMIENTO DE ASM */
/* EN EL COMPUTADOR. */
/* CODIGO LIBRE PARA TODO EL MUNDO */
/* EL ARCHIVO SEGUIRA EN PROCESO/ACTUALIZADO */
/* @deqmega, @jhason */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
uint32_t eax,ebx,ecx,edx, esp;
uint8_t PUNTER_STCK=0;
#define _MAXIMO_STCK_ 256
uint32_t STACK_S[_MAXIMO_STCK_];
#define jmp(x)   goto x;
#define mov(x,z) x=z;
#define add(x,z) x+=z;
#define sub(x,z) x-=z;
#define jnz(x,z) if(x)goto z;
#define PRINT    printf
#define push(z)  { STACK_S[PUNTER_STCK]=z,PUNTER_STCK++; }
#define pop(z)   { z=STACK_S[PUNTER_STCK],PUNTER_STCK--; }
void ASM();int main(int argc, char const *argv[]){memset(STACK_S,0,(_MAXIMO_STCK_*sizeof(uint32_t)));ASM();return 0;}