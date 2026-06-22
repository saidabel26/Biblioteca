# Biblioteca en C++

Proyecto académico de gestión de libros con estructura de pila (stack) desarrollado en C++ para practicar programación modular y estructuras de datos lineales.

## Descripción

Este proyecto implementa un sistema de biblioteca en consola.
Permite listar libros, insertar nuevos libros, consultar el último libro ingresado y buscar libros por categoría, usando una pila como estructura de almacenamiento.

## Estructura general

- `main.cpp`: punto de entrada del programa y menú interactivo.
- `Pila.h` y `Pila.cpp`: implementación de la pila (stack) con punteros enlazados.
- `Elemento.h` y `Elemento.cpp`: modelo de datos de un libro (título, autor, editora, fecha, categoría).
- `Makefile`: compilación del proyecto.

## Compilación

Si tienes `g++` instalado, puedes compilar con:

```bash
g++ *.cpp -o output/main.exe
```

## Ejecución

Luego de compilar, ejecuta el programa con:

```bash
output/main.exe
```

## Nota

En este proyecto también se usa un archivo `tasks.json` de VS Code para automatizar la compilación desde el editor.
