# CFDI

(En progreso)

Facturación electrónica (SAT, México) en C++

# Progreso

La aplicación es capaz de:

1. crear XML de comprobante
2. leer el certificado
3. crear cadena original
4. crear XML con algunos datos del certificado(falta sello. La función para sellar
    se añadirá en la librería ssl_functions).


# Requerimientos

En linux ejecuta el script `dependencies.sh`.

En Windows descarga e instala las siguientes dependencias

    XercesC
    OpenSSL

# Building

    git submodule update --init --recursive
    cmake -S . -B build
    make -C build
    ./build/cfdi-project

# TODO

    [x] remover librería chilkat --------------------------- (Hecho - 01/08/21)
    [x] añadir repo xalanc                                   (Hecho - 30/07/21)
    [x] añadir sslfunctions para reemplazar chilkat -------- (Hecho - 01/08/21)
    [x] probar en windows                                    (Hecho - 02/08/21)
            (Fallos con librería xalanc y MinGW)
    [x] añadir XercesC como submódulo para construirlo automáticamente
    [x] sustituir xalanc con libXSLT

    [ ] probar en Windows con Visual Studio
    [ ] añadir icu como submodule si aún es necesario al remover xalanc

