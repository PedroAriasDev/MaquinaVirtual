

typedef char instruccion;
typedef struct{
    instruccion memoria[16384];
    int TDD[8];
    unsigned int registros[16]; // 16 registros de 4 bytes
}TMV;

