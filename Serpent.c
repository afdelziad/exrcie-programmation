#include<stdio.h>
#define Lmax 100
#define Cmax 100

void main ()
{
    int T[Lmax][Cmax] , i , j , L , C ;

    do
    {
        printf("entrer le nombre de ligne et de colonne : ");
        scanf("%d%d",&L,&C);
    } while ( L <= 0 || L > Lmax || C <= 0 || C > Cmax );
    
    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0 ; j < C ; j++)
        {        
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }
    }

    printf("le tableau en forme de serpent : \n");

    for ( i = 0 ; i < L ; i++)
    {
        if ( i % 2 == 0 )
        {
            for ( j = 0 ; j < C ; j++ )
            {
                printf("%d \t",T[i][j]);
            }
            
        }
        
        else 
        {
            for ( j = C - 1 ; j >= 0 ; j-- )
            {
                printf("%d \t",T[i][j]);
            }
            
        }

        printf("\n");
    }
      
}