#include<stdio.h>
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

*//* ( exercice 16 )    

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
*//* ( exercice 17 )
    int T[Nmax] , N , i , pos = -1 , X ;

    do
    {
        printf("le nombre de taille : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = \n",i);
        scanf("%d",&T[i]);
    }
    
    printf("X : \n");
    scanf("%d",&X);

    for ( i = 0; i < N ; i++)
    {
        if ( T[i] == X )
        {
            pos = i ;
        }
    }
    if ( pos == -1 )
    {
        printf("X n'existe pas \n");
    }
    else 
    {
        printf("X existe et ca position est %d \n",pos+1);
    }
*//* ( exercice 18 )
    int T1[Nmax] , T2[Nmax] , T3[Nmax] , N , P , X , i ;

    do
    {
        printf("entrer le nombre de taille de T1 : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    do
    {
        printf("entrer le nombre de taille de T2 : \n");
        scanf("%d",&P);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T1[%d] = \n",i+1);
        scanf("%d",&T1[i]);
    }
    for ( i = 0 ; i < P ; i++)
    {
        printf("T2[%d] = \n",i+1);
        scanf("%d",&T2[i]);
    }
    
    X = P + N ;

    for ( i = 0 ; i < N ; i++)
    {
        T3[i] = T1[i] ;
    }
    for ( i = 0 ; i < P ; i++)
    {
        T3[N+i] = T2[i] ;
    }
    
    for ( i = 0 ; i < X ; i++)
    {
        printf("T3[%d] = %d \t",i+1,T3[i]);
    }
*//* ( exercice 19 )
    int T[Nmax] , i , j , N , temp , pos ;
    
    do
    {
        printf("entrer le nombre de taille : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = \n",i+1);
        scanf("%d",&T[i]);
    }
    
    for ( i = 0 ; i < N-2 ; i++ )
    {
        pos = i ;
        
        for ( j = i+1 ; j < N - 1 ; j++)
        {
        
            if ( T[j] < T[pos] )
            {
                pos = j ;
            }
        }

        temp = T[i] ;
        T[i] = T[pos] ;
        T[pos] = temp ;
    }
    
    for ( i = 0 ; i < N ; i++ )
    {
        printf("%d \n",T[i]);
    }
*//* ( exercice 20 )
    int T[Nmax] , i , N , temp , X ;
    char permute ;
    
    do
    {
        printf("entrer le nombre de taille : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = \n",i);
        scanf("%d",&T[i]);
    }

    X = N - 1 ;
    do
    {
        permute = 'F' ;

        for ( i = 0 ; i < X-1 ; i++)
        {
            if ( T[i] > T[i+1] )
            {
                temp = T[i] ;
                T[i] = T[i+1] ;
                T[i+1] = temp ;
                permute = 'V' ;
            }
        }
        X-- ;
    } while ( X != 0 && permute != 'F' );
    
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
*//* ( exercice 21 )
    char T [6] ; 
    int i ;

    for ( i = 0 ; i < 5 ; i++ )
    {
        printf("entrer les valeurs : \n");
        scanf(" %c",&T[i]);
    }
    for ( i = 0 ; i < 5 ; i++)
    {
        printf("T[%d]= %c ",i,T[i]);
    }
*//* ( exercice 22 )
    int T [7] ;
    int i ;

    for ( i = 0 ; i < 6 ; i++)
    {
        T[i] = 0 ;
    }
    for ( i = 0 ; i < 6 ; i++)
    {
        printf("T[%d] = %d \n",i,T[i]);
    }
*//* ( exercice 23 )
    int i , S = 0 ;
    float M , T[5] ;

    for ( i = 1 ; i <= 5 ; i++ )
    {
        printf("la note : \n");
        scanf("%f",&T[i]);
      
        S += T[i] ;
    }
    M = S / 5.0 ;

    printf("la moyenne est : %.2f \n",M);
*//* ( exercice 24 )
    int T[5] ,i , pair = 0 ;

    for ( i = 0 ; i < 5 ; i++)
    {
        printf("entrer un nombre : \n");
        scanf("%d",&T[i]);

        if ( T[i] % 2 == 0 )
        {
            pair ++ ;
        }
        
    }
    printf("pair : %d \n",pair);
*//* ( exercice 25 )
    int N , T[N] , S = 0 , i , Tmax = 100 ;
    float M ;

    do
    {
        printf("entrer le nombre d'etudiants : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Tmax );
    
    for ( i = 0; i < N ; i++)
    {
        printf("la note : \n");
        scanf("%d",&T[i]);

        S += T[i] ;
    }
    M = S / (float)N ;

    printf("M = %.2f \n",M);
*//* ( exercice 26 ) 

    int T1[Nmax] , T2[Nmax] , i , N , val , Tmax = 100 , c = 0 ;

    do
    {
        printf("N:\n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i <= N-1 ; i++)
    {
        printf("val1 : \n");
        scanf("%d",&T1[i]);
        printf("val2 : \n");
        scanf("%d",&T2[i]);
    }
    
    for ( i = 0 ; i <= N-1 ; i++)
    {
        if ( T1[i] = T2[i] )
        {
            c += 1 ;
        }

    }
    if ( c == N )
    {
        printf("ils sont egaux \n");
    }
    else 
    {
        printf("ils ne sont pas egaux \n");
    }    
*//* ( exercice 27 )
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

*//* ( exercice 28 )
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

*//* ( exercice 29 )
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

*//* ( exercice 30 (1Methode) )
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

*//* ( exercice 30 (2Methode) )
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
*//* ( exercice 31 )
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
        
*//* ( exercice 32 )
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