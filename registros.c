#include "registros.h"

char buscarSectorRegistro(TMV mv,int ipAct){
    char segmento;
    segmento = mv.memoria[ipAct + 1] >> 4;
    segmento = segmento & 0x0F;
    return segmento;
}

int getReg(TMV * mv,operando o){
    int num;
    if(o.segmentoReg == 0x11){ //segmento X
        num = mv->registros[o.registro];
        num = num << 16;
        num = num >> 16;
    }else{
        if(o.segmentoReg == 0x10){ // segmento H
            num = mv->registros[o.registro];
            num = num << 16;
            num = num >> 24;
        }else{
            if(o.segmentoReg == 0x01){ //segmento L
                num = mv->registros[o.registro];
                num = num << 24;
                num = num >> 24;
            }else
                if(o.segmentoReg == 0x00)
                    num = mv->registros[o.registro];

        }
    }

    return num;
}
