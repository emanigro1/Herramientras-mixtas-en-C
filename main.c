#include <stdio.h>
#include <stdlib.h>

void factorial ();
void numeroPrimo();
void anioBisiesto();

int main()
{
    while(1)
    {
        char op;



        system("cls");
        fflush(stdin);

        printf("\n\tHerramientas\n\n");
        printf("1) Factorial de un numero\n");
        printf("2) Numero primo\n");
        printf("3) Anio bisiesto\n");
        printf("4) Salir\n");
        printf("\nOpcion: ");
        scanf("%c",&op);


        switch(op)
        {
        case '1':

            factorial ();

            break;
        case '2':
            numeroPrimo();

            break;


        case '3':

            anioBisiesto();

            break;
        case '4':
            printf("\nAdios!!\n");
            return 0;
        }
        printf("\nPresione una tecla para volver..");
        getch();
    }
    return 0;
}

void factorial ()
{
    long int n;
    int i;
    long int fac=0;
    do
    {
        printf ("Ingresa un numero entre 1-19: ");
        scanf ("%ld",&n);
        if (n>19||n<1)
        {
            printf("Numero no valido. ");
        }
    }
    while(n>19||n<1);

    for (i=1; i<=n; i++)
    {
        fac=fac*i;
    }
    printf ("\nSu factorial es %ld\n",fac);
}


void numeroPrimo()
{
    long int n;
    int cont=0;
    int i;
    printf ("Ingresa un numero: ");
    scanf("%ld",&n);

    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            cont=cont+1;
        }
    }
    if (cont>2)
    {
        printf ("\nNo es primo\n");
    }
    else
    {
        printf ("\nEs primo\n");
    }
}
void anioBisiesto()
{
    int anio;
    printf("Escriba un anio(ej. 2020): \n");
    scanf("%d",&anio);

    if (anio%4==0)
    {
        if (((anio%100)!=0)&&((anio%400)==0));
        {
            printf("\nEs bisiesto\n");
        }
    }
    else
    {
        printf("\nNo es bisiesto\n");
    }
}
