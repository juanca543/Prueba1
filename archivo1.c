#include <stdio.h>
#include <string.h>

int main() {
    char nombreArchivo[100];  // Buffer para almacenar el nombre del archivo
    FILE *archivo;            // Puntero al archivo

    // Solicitar el nombre del archivo al usuario
    printf("Introduce el nombre del archivo: ");
    fgets(nombreArchivo, 100, stdin);  // Leer el nombre del archivo con espacios si es necesario

    // Eliminar el salto de línea (\n) que fgets añade al final
    if (nombreArchivo[strlen(nombreArchivo) - 1] == '\n') {
        nombreArchivo[strlen(nombreArchivo) - 1] = '\0';
    }

    // Crear o abrir el archivo para escritura ("w" indica escritura)
    archivo = fopen(nombreArchivo, "w");

    // Verificar si el archivo fue creado exitosamente
    if (archivo == NULL) {
        printf("Error al crear el archivo.\n");
        return 1;  // Terminar con un código de error
    }

    // Escribir algo en el archivo
    fprintf(archivo, "Este es un archivo de texto creado por el usuario.\n");

    // Cerrar el archivo
    fclose(archivo);

    printf("Archivo '%s' creado exitosamente.\n", nombreArchivo);

    return 0;
}
