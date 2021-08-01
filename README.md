# CFDI

(En progreso)

Facturación electrónica (SAT, México) en C++


# Dependencies

ejecuta el script `dependencies.sh`

libraries are:

    XercesC

# Building

    git submodule update --init --recursive
    cmake -S . -B build
    make -C build
    ./build/cfdi-project

# TODO

    remover librería chilkat(Hecho - 01/08/21)
    añadir repo xalanc(Hecho)
    añadir sslfunctions para reemplazar chilkat(Hecho - 01/08/21)
    
    añadir XercesC como submódulo para construirlo automáticamente
    probar en windows

