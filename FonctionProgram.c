#include<stdio.h>
#define Nmax 100
/*
long Chiffres , temp , tempo ;
int n = 0 , Somme = 0 , k , r ;

void nChiffres()
{
    while ( temp != 0 )
    { 
        temp = temp / 10 ;
        n++ ;
    }
    printf("le nombre de chiffres est : %d \n",n);
}

void kchiffre()
{
    if ( k > n )
    {
        printf("Erreur !");
    }
    else
    {
        while ( tempo != 0 )
        { 
            r = tempo % 10 ;

            if ( r == k )
            {
                printf("le chiffre est : %d \n",r);
            }

            tempo = tempo / 10 ;
        }
    }
}

void SomChiffres()
{
    while ( Chiffres != 0 )
    {
        Somme += Chiffres % 10 ;
        Chiffres = Chiffres / 10 ; 
    }
    printf("la somme des chiffres : %d \n",Somme);
}

void main()
{
    printf("entrer le chiffre : ");
    scanf("%ld",&Chiffres); 
    printf("Quelle chiffre voulez-vous afficher : ");
    scanf("%d",&k);

    temp = Chiffres ;
    tempo = Chiffres ;

    nChiffres();
    kchiffre();    
    SomChiffres();
}
*//*
double X ;
int N ;

void Exp1()
{
    int Exp1 ;

    Exp1 = pow(X,N) ;

    printf("Exp1 = %i \n",Exp1);

    Exp2();
}

void Exp2()
{ 
    int Exp2 ;

    Exp2 = Exp1 ;
}

void main()
{
    printf("X : ");
    scanf("%f",&X);
    printf("N : ");
    scanf("%d",&N);

    Exp1();
}
*/
int N , T[Nmax] ;

void Saisir_Taille()
{
    do
    {
        printf("entrer la taille : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
}

void Remplir_Tableau()
{
    for ( int i = 0 ; i < N ; i++ )
    {
        scanf("%d",&T[i]);
    }
    printf("\n");
}

void Afficher_Tableau()
{
    for ( int i = 0 ; i < N ; i++ )
    {
        printf("%d \t",T[i]);
    }
    printf("\n");
}

void Supprimer_Zeros()
{
    for (int i = 0; i < N; i++)
    {
        if (T[i] == 0)
        {
            for (int j = i; j < N - 1; j++)
            {
                T[j] = T[j + 1];
            }

            N--; 
            i--;   
        }
    }
}

void Afficher_Tableau_Modifier()
{
    for ( int i = 0 ; i < N ; i++ )
    {
        printf("%d \t",T[i]);
    }
    
}

void main()
{
    Saisir_Taille();
    Remplir_Tableau();
    Afficher_Tableau();
    Supprimer_Zeros(); 
    printf("\n le tableau apres la suprression de 0 est : \n");
    Afficher_Tableau_Modifier();
}