#include<stdio.h>
#define LIGmax 100
#define COLmax 100

void  main ()
{

    float Notes[LIGmax][COLmax]  , S , M ;
    int NbEtud , NbMat , i , j ;

    do
    {
        printf("entrer le nombre d'etudiant : \n");
        scanf("%d",&NbEtud);
    } while ( NbEtud <= 0 || NbEtud >= LIGmax );

    do
    {
        printf("entrer le nombre de mati%cre : \n",130);
        scanf("%d",&NbMat);
    } while ( NbMat <= 0 || NbMat >= COLmax );
    // Remplissage
    for ( i = 0 ; i < NbEtud ; i++)
    {
        printf("Etudiant %d : \n",i+1);
        
        for ( j = 0 ; j < NbMat ; j++)
        {
            printf("\t Matiere %d : \n",j+1);
            scanf("%f",&Notes[i][j]);

            S += Notes[i][j] ;
        }
        
    }
    // Affichage
    for ( i = 0 ; i < NbEtud ; i++)
    {
        printf("Etudiant %d : \n",i+1);

        for ( j = 0 ; j < NbMat ; j++)
        {
            printf("\t %.2f ",Notes[i][j]);
        }
        printf("\n");
    }
    // Moyenne des etudiant
    for ( i = 0 ; i < NbEtud ; i++)
    {
        S = 0 ;
        for ( j = 0 ; j < NbMat ; j++)
        {
            S += Notes[i][j] ;
        }
        M = S / (float) NbMat ;

        printf("Moyenne de l'etudiant %d : %.2f \n",i+1,M);
    }
    // Moyenne des matiere   
    for ( i = 0 ; i < NbMat ; i++)
    {
        S = 0 ;
        for ( j = 0 ; j < NbEtud ; j++)
        {
            S += Notes[i][j] ;
        }
        M = S / (float) NbEtud ;

        printf("Moyenne de la mati%cre %d : %.2f \n",130,i+1,M);
    }
}