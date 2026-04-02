#include<stdio.h>
#include<math.h>
#define Nmax 100

void main ()
{
/* ( exercice 1 )
    int T[Nmax] , N , S = 0 , P = 1 , min , max = 0 , i ;
    float M , Mpg , Dif ;

    do
    {
        printf("entrer le nombre de taille : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);

        S += T[i] ;
        P *= T[i] ;

    }
    
    min = T[0] ;
    max = T[0] ;

    for ( i = 0 ; i < N ; i++)
    {
        if ( T[i] > max )
        {
            max = T[i] ;
        }
        if ( T[i] > min )
        {
            min = T[i] ;
        }
        
    }
    
    M = S / (float) N ;
    M = ( max + min ) / 2.0 ;

    Dif = M - Mpg ;

    printf("la somme : %d \n",S);
    printf("le produit : %d \n",P);
    printf("la moyenne : %.2f \n",M);
    printf("la moyenne du plus petit et du plus grand des elements : %.2f \n",Mpg);
    printf("la difference entre la moyenne des elements et de la moyenne du plus petit et du plus grand des elements : %.2f \n",Dif);

*//* ( exercice 2 )
    int U[Nmax] , V[Nmax] , W[Nmax] , i , N , P = 0 , Su = 0 , Norme ;

    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("U[%d] = ",i+1);
        scanf("%d",&U[i]);
        printf("V[%d] = ",i+1);
        scanf("%d",&V[i]);

        W[i] = V[i] + U[i] ;    
        
        P += ( V[i] * U[i] ) ;

        Su += pow(U[i],2);
    }
    
    Norme = sqrt(Su) ;

    for ( i = 0 ; i < N ; i++)
    {
        printf("%d \t",U[i]);
        printf("\n");
        printf("%d \t",V[i]);
        printf("\n");
        printf(" %d \t",W[i]);
        printf("\n");
    }
    printf("--------------------------\n");
    printf("le produit scalaire : %d \n",P);
    printf("--------------------------\n");
    printf("Norme : %d \n",Norme);

*//* ( exercice 3 )
    int T[Nmax] , i , Pg , Pp , ip , ig , N ;
    
    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] =",i+1);
        scanf("%d",&T[i]);
    }
    
    Pg = T[0] ;
    Pp = T[0] ;

    for ( i = 0 ; i < N ; i++)
    {
        if ( T[i] > Pg )
        {
            Pg = T[i] ;
            ig = i ;
        }
        if ( T[i] > Pp )
        {
            Pp = T[i] ;
            ip = i ;
        }
    }
    
    printf("le nombre le plus grand est %d et ça position est %d \n",Pg,ig);
    printf("le nombre le plus petit est %d et ça position est %d \n",Pp,ip);

*//* ( exercice 4 (1Methode) )
    int T[Nmax] , i , N , Tinv[Nmax] ;
    
    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] =",i+1);
        scanf("%d",&T[i]);
    }

    for ( i = 0 ; i < N ; i++)
    {
        Tinv[i] = T[N-1-i] ;
    }
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("%d \t",Tinv[i]);
    }

*//* ( exercice 4 (2Methode) )
    int T[Nmax] , N , i , j , temp ;
    
    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] =",i+1);
        scanf("%d",&T[i]);
    }

    for ( i = 0 ; i < N ; i++)
    {
        for ( j = 0 ; i < N-1 ; j++)
        {
            temp = T[i] ;
            T[i] = T[j] ;
            T[j] = temp ;
        }
    }
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
*//* ( exercice 5 )
    int T[Nmax] , i , N , pos , j ;
    
    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] =",i+1);
        scanf("%d",&T[i]);
    }

    for ( i = 0 ; i < N ; i++ )
    {
        if ( T[i] == 0 )
        {
            pos = i ;

            for ( j = pos ; j <= N-2 ; j++ )
            {
                T[j] = T[j+1] ;
            }

            N-- ;
            i-- ;
        }
    }
    printf("le tableau apress la suppression est : \n");
    for ( i = 0 ; i < N ; i++ )
    {
        printf("%d \n",T[i]);
    }
        
*//* ( exercice 6 )
    int A[Nmax] , B[Nmax] , i , N , T1[Nmax] , T2[Nmax] , X ;

    do
    {
        printf("entrer le nombre de taille de A : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );

    do
    {
        printf("entrer le nombre de taille de B : ");
        scanf("%d",&X);
    } while ( X <= 0 || X >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("A[%d] =",i+1);
        scanf("%d",&A[i]);
    }    

    for ( i = 0 ; i < X ; i++)
    {
        printf("B[%d] =",i+1);
        scanf("%d",&B[i]);
    }  

    for ( i = 0 ; i < N ; i++)
    {
        T1[i] = A[i] ;
    }
    
    for ( i = 0 ; i < N ; i++)
    {
        T1[N+i] = B[i] ;
    }
    
    for ( i = 0 ; i < N ; i++)
    {
        T2[2*i] =A[i] ;
        T2[2*i+1] = B[i] ;
    }
    
    for ( i = 0 ; i < X+N ; i++)
    {
        printf("%d \t",T1[i]);
    }
    printf("\n");
    for ( i = 0; i < X+N ; i++)
    {
        printf("%d \t",T2[i]);
    }
*/
    int T[Nmax] , i , j , N , r , inv = 0 , temp ;

    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d]= \n",i);
        scanf("%d",&N);
    }
    
    for ( i = 0 ; i < N ; i++)
    {
        temp = T[i] ;

        while ( temp != 0 )
        {
            r = temp % 10 ;
            inv = inv * 10 + r ;
            temp = temp / 10 ;
        }
        
        if ( T[i] == inv )
        {
            printf("%d est un nombre palindrome \n",T[i]);
        }
        
    }
    
}
