#include <stdio.h>
#include <stdlib.h>

void factorial ();
void numeroPrimo();
void anioBisiesto();
int pasarABinario(int n);
void estrucBinario();

int main()
{
    char op=99;

    while(op!=5)
    {
        system("cls");
        fflush(stdin);

        printf("\n\tHerramientas\n\n");
        printf("1) Factorial de un numero\n");
        printf("2) Numero primo\n");
        printf("3) Anio bisiesto\n");
        printf("4) Convercion a binario\n");
        printf("5) Salir\n");
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
            estrucBinario();
            break;

        case '5':
            printf("\nAdios!!\n");
            op=5;
            break;

        default:
            printf("Opción incorrecta");
            break;
        }

        if (op!=5)
        {
            printf("\nPresione una tecla para volver..");
            getch();
        }
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

void estrucBinario()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    int binario=pasarABinario (numero);

    printf("\nSu binario es: %d\n",binario);
}

int pasarABinario(int n)
{

    if(n < 2)
    {
        return n;
    }
    else
    {
        return (n%2 + (10 * pasarABinario(n/2)));
    }
}
