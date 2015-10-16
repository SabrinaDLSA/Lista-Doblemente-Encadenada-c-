#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct nodo{

    struct nodo *anterior;
    int x;
    struct nodo *siguiente;
};
typedef struct nodo *lista;


struct cabezal{

    lista pri;
    lista fin;
};
typedef struct cabezal *cabe;
lista crear_lista( lista l );
bool es_vacia( lista l );
lista insertar_principio( lista l );
lista insertar_final( lista l );
lista borrar_principio( lista l );
lista borrar_final( lista l );
void muestro_fin( lista l);
void muestro_principio( lista l );
void menu( lista l );

#endif // HEADER_H_INCLUDED
