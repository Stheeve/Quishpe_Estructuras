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

        switch (opcion)
        {
        case 1:
            if (estudiantes < 20)
            {
                printf("\nDatos del estudiante %d:\n", estudiantes + 1);

                printf("Ingrese la matricula: ");
                scanf("%d", &alumnos[estudiantes].matricula);

                printf("Ingrese el nombre: ");
                gets(alumnos[estudiantes].nombre);

                printf("Ingrese la direccion: ");
                gets(alumnos[estudiantes].direccion);

                printf("Ingrese la materia: ");
                gets(alumnos[estudiantes].materia);

                printf("Ingrese la nota: ");
                scanf("%f", &alumnos[estudiantes].nota);

                estudiantes++;

                printf("Estudiante ingresado exitosamente.\n");
            }
            else
            {
                printf("Limite de estudiantes alcanzado. No es posible ingresar mas.\n");
            }
            break;

        case 2:
            printf("\nDatos de todos los alumnos:\n");
            for (int i = 0; i < estudiantes; i++)
            {
                printf("\nEstudiante %d:\n", i + 1);
                printf("Nombre: ");
                puts(alumnos[i].nombre);

                printf("Direccion: ");
                puts(alumnos[i].direccion);

                printf("Materia: ");
                puts(alumnos[i].materia);

                printf("Matricula: %d\n", alumnos[i].matricula);
                printf("Nota: %.2f\n", alumnos[i].nota);
            }
            break;

        case 3:
            printf("Eligio la opcion salir");
            break;

        default:
            printf("Opcion no valida. Intente nuevamente.\n");
        }
    } while (opcion != 3);

    return 0;
}
