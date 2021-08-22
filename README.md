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

instala las siguientes dependencias

    XercesC
    XalanC
    xsdcxx

# Building

    cmake -S . -B build
    make -C build
    ./build/cfdi-project

# TODO

    [ ] Añadir función para sellar factura

