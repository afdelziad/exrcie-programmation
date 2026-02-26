#include<stdio.h>
#include<math.h>
#define Nmax 100

void main ()
{
/* ( exercice 1 )
    int T[4] , i ;
    float N , M , S = 0 ;

    for ( i = 0 ; i < 4 ; i++)
    {
        printf("note %d : \n",i+1);
        scanf("%f",&N);

        S += N ;
    }
    M = S / 4.0 ;
    
    printf("la moyenne est : %.2f \n",M);

*//* ( exercice 2 )
    int T[10] , i ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        T[i] = 0 ;
    }
    for ( i = 0 ; i < 10 ; i++)
    {
        printf("T[%d] = %d \n",i,T[i]);
    }

*//* ( exercice 3 )    
    int i ;
    char T[6] ;

    T[0] = 'A' ;
    T[1] = 'E' ;
    T[2] = 'I' ;
    T[3] = 'O' ;
    T[4] = 'U' ;
    T[5] = 'Y' ;

    printf("les voyelles de l'alphabet francais sont : \n");
    for ( i = 0 ; i < 6 ; i++ )
    {
        printf(" %c \t",T[i]);
    }

*//* ( exercice 4 )    
    int i ;
    float T[10] , P = 1 , S = 0 , M ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        printf("note %d = \n",i+1);
        scanf("%f",&T[i]);

        S += T[i] ;
        P *= T[i] ;
    }
    M = S / 10.0 ; 
    
    printf("la somme : %.2f \n",S);
    printf("le produit : %.2f \n",P);
    printf("la moyenne : %.2f \n",M);

*//* ( exercice 5 )  
    float U[3] , V[3] , P = 0 ;
    int i ;

    printf("veuiller saisir les valeurs des deux vecteurs : \n");

    for ( i = 0 ; i < 3 ; i++)
    {
        printf("U[%d] = \n",i);
        scanf("%f",&U[i]);
        printf("V[%d] = \n",i);
        scanf("%f",&V[i]);
    }
    
    P = 0 ;

    for ( i = 0 ; i < 3 ; i++)
    {
        P += U[i] * V[i] ;
    }
    
    printf("le produit scalaire est : %.2f \n",P);

*//* ( exercice 6 )  
    int i , T[10] , Tmin ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        printf("T[%d] = \n",i);
        scanf("%d",&T[i]);
        
        if ( i == 0 )
        {
            Tmin = T[i] ;
        }

        if ( T[i] <= Tmin )
        {
            Tmin = T[i] ;
        }
    }
    printf("la valeur minimum du tableau est : %d \n",Tmin);

*//* ( exercice 7 ) 
    int i ,T[10] , Tmax = 0 ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        printf("T[%d] = \n",i);
        scanf("%d",&T[i]);
    }
    
    for ( i = 0 ; i < 10 ; i++ )
    {
        if ( Tmax <= T[i] )
        {
            Tmax = T[i] ;
        }
    }
    
    printf("la valeur maximal du tableau est : %d \n",Tmax);

*//*  ( exercice 8 )
    int T[10] , i , N , pos = 0 ;

    for ( i = 0 ; i < 10 ; i++)
    {
        printf("T[%d] = \n",i);
        scanf("%d",&T[i]);
    }
    printf("valeur de N : \n");
    scanf("%d",&N);

    for ( i = 0 ; i < 10 ; i++ )
    {
        if ( N == T[i]  )
        {
            pos++ ;
        }
    }

    if ( pos == 0 )
    {
        printf("N ne se trouve pas dans le tableau \n");
    }
    else 
    {
        printf("N se trouve dans le tableau \n");
    }

*//* ( exercice 9 )  
    int T[50] , N , cpt = 0 , i ;

    for ( i = 0 ; i < 50 ; i++)
    {
        printf("T[%d] = \n",i);
        scanf("%d",&T[i]);
    }

    printf("le nombre est : \n");
    scanf("%d",&N);

    for ( i = 0 ; i < 50 ; i++)
    {
        if ( N == T[i] )
        {
            cpt ++ ;
        }    
    }
    if ( cpt == 0 )
    {
        printf("%d ne se trouve pas dans le tableau \n");
    }
    else 
    {
    printf("le nombre d'occurence de %d dans T est : %d \n",N,cpt);
    }

*//* ( exercice 10 )
    int i , cpt = 0 ;
    float T[10] , N , S = 0 , M ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        printf("T[%d] = \n",i);
        scanf("%f",&T[i]);
        
        S += T[i] ;
    }

    M = S / 10.0 ;
    printf("la moyenne de la classe est : %.2f \n",M);
    printf("Notes superieures a la moyenne :\n");

    for ( i = 0 ; i < 10 ; i++ )
    {
        if ( T[i] > M )
        {
            printf("%.2f \n",T[i]);
            cpt++ ;
        }       
    }
    
    printf("il y'a %d notes superieurs a la moyenne \n",cpt);
    
*//* ( exercie 11 )
    int i ;
    float S = 1000 , T[20] ;

    for ( i = 1 ; i <= 20 ; i++)
    {
        S += S * 0.02 ;
        T[i] = S ;
    }
    for ( i = 1 ; i <= 20 ; i++)
    {
        printf("T[%d] = %.2f \n",i,T[i]);
    }
    
*//* ( exercice 12 )
    int T[6] , i , Tinv[6] ;

    for ( i = 0 ; i < 6 ; i++)
    {
        printf("T[%d] = \n",i);
        scanf("%d",&T[i]);
    }
    for ( i = 0 ; i <= 5 ; i++ )
    {
        Tinv[i] = T[5-i];
    }
    printf("le tableau invverse : \n");
    for ( i = 0 ; i <= 5 ; i++)
    {
        printf("Tinv[%d] = %d \n",i,Tinv[i]);
    }
    
*//* ( exercice 13 )
    int N , T[Nmax] , i , cpt = 0 , Premier , x = 2 ;

    do
    {
        printf("entrer le nombre de tailles : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    do 
    {
        Premier = 0 ;
        for ( i = 2 ; i <= N/2 ; i++)
        {
            if ( x % i == 0 )
            {
                Premier ++ ;
                break ;
            }
        }
        if ( Premier == 0 )
        {
            T[cpt] = x ;
            cpt ++ ;
        }
        x ++ ;
    } while ( cpt < N );

    printf("les %d premiers nombres premiers sont : \n",N);

    for ( i = 0 ; i < N ; i++)
    {
        printf("%d \n",T[i]);
    }
    
*//* ( exercice 14 )
    int i ;
    float Note[10] , N , Max1 = 0 , Tmin , Max2 = 0 ;

    for ( i = 1 ; i <= 10 ; i++)
    {
        printf("Note[%d] = \n",i);
        scanf("%f",&Note[i]);

        if ( i == 1 )
        {
            Tmin = Note[i] ;
        }
 
        if ( Max1 <= Note[i] )
        {
            Max2 = Max1 ;
            Max1 = Note[i] ;
        }

        if ( Max2 < Note[i] && Max1 > Note[i] )
        {
            Max2 = Note[i] ;
        }
        
        if ( Tmin >= Note[i] )
        {
            Tmin = Note[i] ;
        }
    }
    
    printf("la grande note est : %.2f \n",Max1);
    printf("la deuxieme plus grande note est : %.2f \n",Max2);
    printf("la plus petite note est : %.2f \n",Tmin);

*//* ( exerice 15 )
    int T[Nmax] , N , i , X , pos ;

    do
    {
        printf("entrer le nombres de tailles : \n");
        scanf("%d",&N) ;
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = \n",i);
        scanf("%d",&T[i]);
    }
    
    printf("entrer le numero que vous voulez inserer : \n");
    scanf("%d",&X);
    do
    {
    printf("entrer la position : \n");
    scanf("%d",&pos);
    } while ( pos <= 0 || pos >= N );

    for ( i = N ; i >= pos ; i-- )
    {
        T[i] = T[i-1] ;
    }

    T[pos-1] = N ;
    N ++ ;

    printf("les elements apres l'insertion sont : \n");

    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = %d \n",i,T[i]);
    }

*/ // ( exercice 16 )    

    int T[Nmax] , N , pos , i ;

    do
    {
        printf("entrer le nombres de tailles : \n");
        scanf("%d",&N) ;
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = \n",i);
        scanf("%d",&T[i]);
    }

    do
    {
    printf("entrer la position : \n");
    scanf("%d",&pos);
    } while ( pos <= 0 || pos >= N );

    for ( i = pos ; i < N ; i++)
    {
        T[i-1] = T[i] ;
    }

    N-- ;
    
    printf("les elements du tableau apres elimination sont : \n");

    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = %d \n",i,T[i]); 
    }
 
}