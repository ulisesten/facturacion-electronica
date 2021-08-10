# facturacion-electronica

El proyecto está en la rama beta. Se pasará a la master cuando se agregue la función de sellado sin fallos.

Si te interesa el proyecto no olvides poner una estrella o dejar para una cerveza.

# Nota:

Actualmente el proyecto corre perfectamente en linux, pero se está complicando compilarlo en windows. Contribuciones y sugerencias son bienvenidas.

El problema es procesar la cadena original en windwos(librería xslt)

## las ramas para windows son:

- win32
- win32-qt

Se han probad las siguientes librerías:

- Qt parece no ser compatible con la version de xsl de la cadena original
- libxslt tiene demasiadas dependencias, pero podría funcionar
- xalanc devuelve un error relacionado con los threads

- queda por probar ms-xslt o desarrollar una librería propia para procesar la cadena original(complicado)

[Hacer una donación](https://paypal.me/ulisesten?locale.x=es_XC)
