#include "mVTipos.h"

typedef void t_funcion(TMV * mv,char tOp1,char tOp2,int ipAct);

void mov(TMV * mv,char tOp1,char tOp2,int ipAct){

    unsigned int registro,registroOp2;
    char sectorDeRegistro;
    unsigned int valor,valor2;
    char offset,offset2;
    ipAct++;

    if(tOp1 == 0x00){ // Operando 1 de tipo Memoria


void add(TMV * mv,char tOp1,char tOp2,int ipAct){
    if(tOp1 == 0x00){

    }



}
void sub(TMV * mv,char tOp1,char tOp2,int ipAct);
void intercambia(TMV * mv,char tOp1,char tOp2,int ipAct);
void mul(TMV * mv,char tOp1,char tOp2,int ipAct);
void div(TMV * mv,char tOp1,char tOp2,int ipAct);
void cmp(TMV * mv,char tOp1,char tOp2,int ipAct);
void shl(TMV * mv,char tOp1,char tOp2,int ipAct);
void shr(TMV * mv,char tOp1,char tOp2,int ipAct);
void and(TMV * mv,char tOp1,char tOp2,int ipAct);
void or(TMV * mv,char tOp1,char tOp2,int ipAct);
void xor(TMV * mv,char tOp1,char tOp2,int ipAct);

//operaciones de 1 operando
void sys(TMV * mv,char tOp1,char tOp2,int ipAct);
void jmp(TMV * mv,char tOp1,char tOp2,int ipAct){
    int valor;
    char aux1,aux2;
    int registro;
    if(tOp1 == 0x00){
        registro = mv->memoria[++ipAct];
        aux2 = mv->memoria[mv->TDD[0] + registro];
        aux1 = mv->memoria[mv->TDD[0] + registro + 1];
        valor = (int) (aux2 >> 16) | (aux1 >> 24);
        mv->registros[5] = valor;
    }else{
        if(tOp1 == 0x01){
            aux1 = mv->memoria[++ipAct];
            aux2 = (aux1 & 0x30) >> 8;
            aux1 = aux1 & 0x0f;

            if(aux2 == 0x00){
                mv->registros[5] = mv->registros[aux1];
            }else{
                if(aux2 == 0x01){
                    mv->registros[5] = mv->registros[aux1] & 0x000000ff;
                }else{
                    if(aux2 == 0x10)
                        mv->registros[5] = (mv->registros[aux1] >> 8) & 0x000000ff;
                    else
                        mv->registros[5] = mv->registros[aux1] & 0x0000ffff;
                }
            }
        }else{

        }
    }


}
void jz(TMV * mv,char tOp1,char tOp2,int ipAct);
void jp(TMV * mv,char tOp1,char tOp2,int ipAct);
void jn(TMV * mv,char tOp1,char tOp2,int ipAct);
void jnz(TMV * mv,char tOp1,char tOp2,int ipAct);
void jnp(TMV * mv,char tOp1,char tOp2,int ipAct);
void jnn(TMV * mv,char tOp1,char tOp2,int ipAct);
void ldl(TMV * mv,char tOp1,char tOp2,int ipAct);
void ldh(TMV * mv,char tOp1,char tOp2,int ipAct);
void rnd(TMV * mv,char tOp1,char tOp2,int ipAct);
void not(TMV * mv,char tOp1,char tOp2,int ipAct);

//t_funcion *vecFuncionesMV[]={
//                                mov,
//                                add,
//                                sub,
//                                intercambia,
//                                mul,
//                                div,
//                                cmp,
//                                shl,
//                                shr,
//                                and,
//                                or,
//                                xor,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                0,
//                                sys,
//                                jmp,
//                                jz,
//                                jp,
//                                jn,
//                                jnz,
//                                jnp,
//                                jnn,
//                                ldl,
//                                ldh,
//                                rnd,
//                                not
//                                };
