
#include "memoria.h"

int getMem(TMV *mv,operando o){
    int num = 0

    if(o.segmentoReg == 0x11){ //segmento 2 bytes
        num |= mv->memoria[mv->TDD[0] + o.registro + o.desplazamiento] << 8;
        num |= mv->memoria[mv->TDD[0] + o.registro + o.desplazamiento + 1];
    }else
        if(o.segmentoReg == 0x00){ //segmento de 4 bytes

            num |= mv->memoria[mv->TDD[0] + o.registro + o.desplazamiento] << 24;
            num |= mv->memoria[mv->TDD[0] + o.registro + o.desplazamiento + 1] << 16;
            num |= mv->memoria[mv->TDD[0] + o.registro + o.desplazamiento + 2] << 8;
            num |= mv->memoria[mv->TDD[0] + o.registro + o.desplazamiento + 3];

        }else //segmento de 1 byte
            num = mv->registro[mv->TDD[0] + o.registro + o.desplazamiento];

    }
    return num;
}


