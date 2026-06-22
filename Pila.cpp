#include "Pila.h"

Pila::Pila(): _ultimo(NULL)
{
}

void Pila::Agregar(Elemento* elemento)
{
    elemento->SetSiguiente(_ultimo);
    _ultimo = elemento;
}

Elemento* Pila::Extraer()
{
    if(_ultimo == NULL)
        return NULL;

    Elemento* extraido = _ultimo;
    _ultimo = _ultimo->GetSiguiente();
    return extraido;
}
