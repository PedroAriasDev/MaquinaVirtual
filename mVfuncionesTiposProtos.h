#ifndef MVFUNCIONESTIPOSPROTOS_H_INCLUDED
#define MVFUNCIONESTIPOSPROTOS_H_INCLUDED
#include "mVTipos.h"

typedef void t_funcion(TMV *,operando *);



void mov(TMV *mv,operando *op){
    setOP(mv,op[0],getOp(mv,op[1]));
}
void add(int *operando1,int operando2);
void sub(int *operando1,int *operando2);
void intercambia(int *operando1,int *operando2);
void cmp(int *operando1,int *operando2,int *cc);
void shl(int *operando);
void shr(int *operando);
void and(int *operando1,int *operando2,int *cc);
void or(int *operando1,int *operando2,int *cc);
void xor(int *operando1,int *operando2,int *cc);
void sys(int operando);
void jmp(int direccion,int *ip);
void jz(int direccion,int *ip);
void jp(int direccion,int *ip);
void jn(int direccion,int *ip);
void jnz(int direccion,int *ip);
void jnp(int direccion,int *ip);
void jnn(int direccion,int *ip);
void ldl()


#endif // MVFUNCIONESTIPOSPROTOS_H_INCLUDED

