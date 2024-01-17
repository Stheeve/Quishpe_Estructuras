#include <stdio.h>
#include <string.h>

struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
};

int main()
{
    int opcion;
    struct alumno alumnos[20];
    int estudiantes = 0;

    do
    {
        printf("\nOpcion 1. Ingresar datos de un estudiante\n");
        printf("Opcion 2. Mostrar todos los alumnos ingresados\n");
        printf("Opcion 3. Salir\n");
        printf("Coloque el numero de opcion\n");
        scanf("%d", &opcion);

        
    } while (opcion != 3);

    return 0;
}
