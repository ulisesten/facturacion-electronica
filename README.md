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

Compilación de las dependencias

## XercesC

entra en la carpeta de xerces-c y corre el siguiente comando con cmake:

    cmake -G "Visual Studio 15 2017 Win64" -S . -B build -DCMAKE_INSTALL_PREFIX=C:\xerces-c

ahora contruye el proyecto con:

    cmake --build build --config Debug

y finalmente lo instalas con:

    cmake --build build --config Debug --target install


## XalanC

Ahora hay que compilar xalanc

    cmake -DCMAKE_PREFIX_PATH=C:\xerces-c -G "Visual Studio 15 2017 Win64" -S . -B build -DCMAKE_INSTALL_PREFIX=C:\xalan-c

antes del siguiente paso necesitas localizar el archivo `xerces-c_3_2D.dll` en `/xerces-c/bin(carpeta de instalación)`  y copiarlo a `xalanc/build/src/xalanc/Utils/MsgCreator/Debug` o en la carpeta donde se encuentra `MsgCreator.exe` dentro de la carpeta build creada por cmake

ahora estas listo para construir xalanc con:

    cmake --build build --config Debug

y ahora lo instalas

    cmake --build build --config Debug --target install


por ahora los siguientes pasos están pendientes



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
    [x] Probado con msys2(No se ejecuta correctamente)       (Hecho - 11/08/21)

    [x] probar en Windows con Visual Studio                  (Hecho - 12/08/21)
        Se compilaron las librerías xerces-c y xalan-c exitosamente

    [ ] añadir icu como submodule si aún es necesario al remover xalanc

