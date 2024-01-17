#include <stdio.h>
#include <string.h>
// estructura echa en clases 
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
        // do para poner opciones 
        printf("\nOpcion 1. Ingresar datos de un estudiante\n");
        printf("Opcion 2. Mostrar todos los alumnos ingresados\n");
        printf("Opcion 3. Salir\n");
        printf("Coloque el numero de opcion\n");
        scanf("%d", &opcion);
        //switch para hacer el menu
        switch (opcion)
        {
        case 1:
        //case 1 donde se van a ingresar los datos de los estudiantes maximo 20
            if (estudiantes < 20)
            {
                printf("\nDatos del estudiante %d:\n", estudiantes + 1);

                printf("Ingrese la matricula: ");
                scanf("%d", &alumnos[estudiantes].matricula);

                printf("Ingrese el nombre: ");
                fflush(stdin);
                //fflush para limpiar la memoria
                gets(alumnos[estudiantes].nombre);

                printf("Ingrese la direccion: ");
                fflush(stdin);
                gets(alumnos[estudiantes].direccion);
                //Se usa para leer una line de caracteres 

                printf("Ingrese la materia: ");
                fflush(stdin);
                gets(alumnos[estudiantes].materia);

                printf("Ingrese la nota: ");
                fflush(stdin);
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
        //case 2 para imprimir los resultados de los diferentes estudiantes
            printf("\nDatos de todos los alumnos:\n");
            for (int i = 0; i < estudiantes; i++)
            {
                printf("\nEstudiante %d:\n", i + 1);
                printf("Nombre: ");
                puts(alumnos[i].nombre);
                //la funcion puts se utiliza para imprimir una cadena de caracteres, asi mismo el puts agrega una nueva linea al final de la cadena para que no se imprima todo de seguido

                printf("Direccion: ");
                puts(alumnos[i].direccion);

                printf("Materia: ");
                puts(alumnos[i].materia);

                printf("Matricula: %d\n", alumnos[i].matricula);
                printf("Nota: %.2f\n", alumnos[i].nota);
            }
            break;

        case 3:
        //opcion 3 para salir del menu
            printf("Eligio la opcion salir");
            break;

        default:
            printf("Opcion no valida. Intente nuevamente.\n");
        }
    } while (opcion != 3);

    return 0;
}
