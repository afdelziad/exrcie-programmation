#include<stdio.h>
#define Cmax 100
#define Lmax 100
#define Nmax 100

void main ()
{
    int T1[Lmax][Cmax] , T2[Lmax][Cmax] , T3[Lmax][Cmax] , C1 , L1 , C2 , L2 , i , j , k , l ;

    do
    {
        printf("ligne / colonne de la premiere matrice : ");
        scanf("%d%d",&L1,&C1);
    } while ( L1 <= 0 || L1 >= Lmax || C1 <= 0 || C1 >= Cmax );

    do
    {
        printf("colonne de la deuxieme matrice : ");
        scanf("%d%d",&C1,&C2);
    } while ( C2 <= 0 || C2 >= Cmax );

    for ( i = 0 ; i < L1 ; i++)
    {
        for ( j = 0 ; j < C1 ; j++ )
        {
            printf("T1[%d][%d] = ",i,j);
            scanf("%d",&T1[i][j]);
        }
        
    }    

    for ( i = 0 ; i < C1 ; i++ )
    {
        for ( j = 0 ; j < C2 ; j++ )
        {
            printf("T2[%d][%d] = ",i,j);
            scanf("%d",&T2[i][j]);
        }
        
    }

    printf("le produit vectoriel des deux matrices : \n");

    do
    {
        for( i = 0; i < L1 ; i++)
        {
            for( j = 0 ; j < C2 ; j++)
            {
                T3[i][j] = 0;

                for( k = 0 ; k < C1 ; k++)
                {
                    T3[i][j] += T1[i][k] * T2[k][j];
                }
            }
        }
    } while ( C1 != C1 );
    
    for ( i = 0 ; i < L1 ; i++)
    {
        for ( j = 0 ; j < C2 ; j++)
        {
            printf("%d \t",T3[i][j]);
        }
        
        printf("\n");
    }

}