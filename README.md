# CFDI

(En progreso)

Facturación electrónica (SAT, México) en C++

# Progreso

La aplicación es capaz de:

    1 - crear XML de comprobante
    2 - leer el certificado
    3 - crear cadena original
    4 - crear XML con algunos datos del certificado(falta sello. La función para sellar
        se añadirá en la librería ssl_functions).


# Dependencies

(en linux)ejecuta el script `dependencies.sh`
(en Windows) descarga e instala las siguientes dependencias

libraries are:

    XercesC
    OpenSSL

# Building

    git submodule update --init --recursive
    cmake -S . -B build
    make -C build
    ./build/cfdi-project

# TODO

    remover librería chilkat --------------------------- (Hecho - 01/08/21)
    añadir repo xalanc                                   (Hecho - 30/07/21)
    añadir sslfunctions para reemplazar chilkat -------- (Hecho - 01/08/21)

    añadir XercesC como submódulo para construirlo automáticamente
    probar en windows

