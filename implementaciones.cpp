#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "header.h"

void menu( lista l ){
    int op;
 do
 {   std::cout << " Menu"<<std::endl;
    std::cout << "1- Crear lista"<<std::endl;
    std::cout << "2- Mostrar lista principio"<<std::endl;
    std::cout << "3- Mostrar lista final"<<std::endl;
    std::cout << "4- Insertar principio"<<std::endl;
    std::cout << "5- Insertar final"<<std::endl;
    std::cout << "6- Borrar al principio"<< std::endl;
    std::cout << "7- Borrar al final"<< std::endl;
    std::cout << "8- Salir"<< std::endl;
    std::cin >> op;

    switch( op )
    {
        case 1:
        l = crear_lista( l );
        break;
        case 2:
        muestro_principio( l );
        break;
        case 3:
        muestro_fin( l );
        break;
        case 4:
        l = insertar_principio( l );
        break;
        case 5:
        l = insertar_final( l );
        break;
        case 6:
        l = borrar_principio( l );
        break;
        case 7:
        l = borrar_final( l );
        break;
        default:
        std::cout << "Seleccione una opcion correcta"<<std::endl;
        menu( l );
        break;

    }
    }
    while( op != 8 );
    return;
}
lista crear_lista( lista l ){

        std::cout << "Lista creada"<<std::endl;
        return NULL;
}
bool es_vacia( lista l ){
        if( l ==  NULL)
        {
            return true;
        }
    return false;

}
lista insertar_principio( lista l ){

    if( es_vacia( l ) == false )
    {
        int nro;
        std::cout << "Que valor desea ingresar"<<std::endl;
        std::cin >> nro;
        lista comienzo =  new nodo;
        l->anterior = comienzo;
        comienzo->siguiente =  l;
        comienzo->x = nro;
        comienzo->anterior = NULL;
        l = comienzo;
        return l;
    }
    else
    {
        std::cout <<"Su lista esta vacia"<<std::endl;
        l = crear_lista( l );
        int nro;
        std::cout << "Que valor desea ingresar"<<std::endl;
        std::cin >> nro;
        lista comienzo =  new nodo;
        comienzo->siguiente =  NULL;
        comienzo->anterior = NULL;
        comienzo->x = nro;
        l = comienzo;
        return l;
    }

}

lista borrar_final( lista l ){


}
void muestro_fin( lista l ){

if( es_vacia( l ) == true )
{
    std::cout << "Su lista es vacía "<<std::endl;
    return;
}
else
{
    lista reco;
    reco = l;
    while( reco->siguiente != NULL )
    {
        reco = reco->siguiente;
    }
    std::cout << "Final"<<std::endl;
        while( reco != NULL )
    {
        std::cout << "Nodo: "<<reco->x<<std::endl;
        reco = reco->anterior;
    }

}

}
void muestro_principio( lista  l ){

if( es_vacia( l ) == true )
{
    std::cout << "Su lista es vacía "<<std::endl;
    return;
}
else
{
    lista reco;
    reco = l;
    while( reco != NULL )
    {
        std::cout << "Nodo: "<<reco->x<<std::endl;
        reco = reco->siguiente;
    }

}

}


lista insertar_final( lista l )
{

    if( es_vacia( l ) == true )
    {
        int op;
        crear_lista( l );
        std::cout << "Que valor desea ingresar"<<std::endl;
        std::cin >> op;
        lista comienzo =  new nodo;
        comienzo->siguiente =  NULL;
        comienzo->anterior = NULL;
        comienzo->x = op;
        l = comienzo;
        return l;

    }
    else
    {
        int nro;
        lista reco = l;
        while ( reco->siguiente != NULL )
        {
            reco = reco->siguiente;
        }
        std::cout << "Que valor desea ingresar"<<std::endl;
        std::cin >> nro;
        lista comienzo =  new nodo;
        comienzo->siguiente =  NULL;
        comienzo->anterior = reco;
        reco->siguiente = comienzo;
        comienzo->x = nro;
        return l;

    }
}

lista borrar_principio( lista l )
{
    if( es_vacia( l ) == true )
    {
        std::cout <<"Su lista se encuentra vacía"<<std::endl;
        return l;
    }
    else
    {
        lista reco;
        reco = l;
        reco = reco->siguiente;
        reco->anterior = NULL;
        l = reco;
    return l;
    }
}




