GENCCODE_ASSEMBLY_TYPE=-a gcc-mingw64
SO=dll
SOBJ=dll
A=a
LIBPREFIX=
LIB_EXT_ORDER=53.dll
COMPILE=gcc   -DHAVE_DLOPEN=0 -DU_HAVE_ATOMIC=0 -DU_HAVE_MMAP=0  -DU_ATTRIBUTE_DEPRECATED= -O3 -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -mthreads  -c
LIBFLAGS=-I/d/dev/icu/53-1/mingw-builds-4.9.1-posix-seh-64/include -DPIC 
GENLIB=gcc -O3 -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -mthreads   -shared -Wl,-Bsymbolic -Wl,--enable-auto-import -Wl,--out-implib=./all.dll.a
LDICUDTFLAGS=
LD_SONAME=
RPATH_FLAGS=
BIR_LDFLAGS=
AR=ar
ARFLAGS=r
RANLIB=ranlib
INSTALL_CMD=/bin/install -c
