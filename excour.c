#include<stdio.h>
#define Nmax 1000
#define Lmax 100
#define Cmax 120

void main ()
{
/*    int A[Lmax][Cmax] , B[Lmax][Cmax] , nl , nc , i , j ;

    do
    {
        printf("ligne / colonne : \n");
        scanf("%d%d",nl,nc);
    } while ( nl < 1 || nl > 100 || nl < 1 || nl > 120);
    
    for ( i = 0 ; i < nl ; i++ )
    {
        for ( j = 0 ; j < nc ; j++ )
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for ( i = 0 ; i < nl ; i++)
    {
        for ( j = 0 ; j < nc ; j++)
        {
            printf("%d \t",A[i][j]);
            printf("\n");
        }
    }
    
    for ( i = 0 ; i < nc ; i++)
    {
        for ( j = 0 ; j < nl ; j++)
        {
            printf("%d \t",B[i][j]);
            printf("\n");
        }
    }
*//*
    int T1[Lmax][Cmax] , t2[Lmax*Cmax] , i , j , k , nl , nc ;

    do
    {
        printf("Entrez le nombre de lignes \n");
        scanf("%d",&nl);

        printf("Entrez le nombre de colognes \n");
        scanf("%d",&nc);
    } while ( nl < 1 || nl > 100 || nl < 1 || nl > 120) ;

    for( i = 0 ; i < nl ; i++ )
        {
        for( j = 0 ; j < nc ; j++ )
            {
                printf("t1[%d][%d]:",i,j);
                scanf("%d",&t1[i][j]);
            }
        }
    
    for( i = 0 , k = 0 ; i < nl ; i++ )
        {
            for( j = 0 ; j < nc ; j++ , k++ )
            {
                t2[k]=t1[i][j];
            }
        }

    for ( i = 0 ; i < nl*nc ; i++)
    {
        printf("%d\t",t2[i]);
    }

*//*
    int M[Lmax][Cmax] , i , j , l , c , nl , nc , Sl , Sc ;
   
    do
    {
        printf("Entrez le nombre de lignes puis de colognes\n");
        scanf("%d%d",&l,&c);
    } while ( nl < 1 || nl > 100 || nc < 1 || nc > 120 ) ;

    for( i = 0 ; i < l ; i++ )
        { 
            Sl=0;

            for( j = 0 ; j < c ; j++ )
            {
                printf("M[%d][%d]:",i,j);
                scanf("%d",&M[i][j]);

                Sl+=M[i][j];
            }

            printf("la somme de la ligne %d est %d\n",i,Sl);
        }

    for( i = 0 ; i < nc ; i++ )
    { 
        Sc=0;

        for( j = 0 ; j < nl ; j++ )
        {
            Sc += M[j][i];
        }

        printf("la somme de la cologne %d est %d \n",i,sc);
    }

*//*
    int M[Lmax][Cmax] , i , j , d , k ;
    
    do
    {
        printf("entrer la dimension : ");
        scanf("%d",&d);
    } while ( d < 0 || d > Nmax );
    
    for( i = 0 ; i < d ; i++ )
    { 
        for( j = 0 ; j < d ; j++ )
        {
            printf("M[%d][%d]:",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    
    for( i = 1 ; i < d ; i++ )
    {
        for( j = 0 ; j < d-1 ; j++ )
        {
            if( i > j )
            {
                if( M[i][j] != 0 )
                {
                    k++;
                }
            }
        }
    }
    
    if(k==0)
    {
        printf("C'est une matrice triangulaire sup%crieure\n",130);
    }
    else 
    {
        printf("Ce n'est pas une matrice triangulair sup%crieure\n",130);
    }

*/
    int M[Lmax][Cmax] = {0} , i , j , d ;
   
    do
    {
        printf("entrer la dimension : ");
        scanf("%d",&d);
    } while ( d < 0 || d > Nmax );
    
    for( i = 0 ; i <= d ; i++)
    {
        for( j = 0 ; j <= d ; j++)
        {
            if( i >= j )
            {
                if( i == j || j == 0 )
                {
                  M[i][j] = 1 ;
                }
                else
                {
                  M[i][j] = M[i-1][j] + M[i-1][j-1] ;
                }
            }
        }
    }

    for( i = 0 ; i <= d ; i++ )
    {
        for( j = 0 ; j <= d ; j++ )
        {
            if( i >= j )
            {
                printf("%d\t",M[i][j]);
            }
        }
        
        printf("\n");
    }
}
