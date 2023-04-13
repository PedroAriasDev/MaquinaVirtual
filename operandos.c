

#include "operandos.h"

int get(TMV *mv,operando o){
    char t_reg = 0x02, t_mem = 0x00, t_inm = 0x01;
    if(getType(o) == t_reg){
        return getReg(mv,o);
    }else if(getType == t_mem){
        return getMem(mv,o);
    }else if(getType == t_inm){

    }

}
