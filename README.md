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

    remover librería chilkat
    añadir repo xalanc(Hecho)
    añadir repo sslfunctions para reemplazar chilkat

