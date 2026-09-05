#include<stdio.h>
#define Nmax 100

void main ()
{/* ( exerice 1 )
    int A = 2 , B = 5 , C , D ;
    int *P1 , *P2 ;

    P1 = &A ;
    P2 = &B ;
    C = *P1 ;
    D = *P2 - *P1 ;

    printf("A = %d \t B = %d \t C = %d \t D = %d \t",A,B,C,D);

*//* ( exercice 2 )
    int A = 10 , B = 20 , C , D ;
    int *P1 , *P2 ;

    P1 = &A ;
    P2 = &B ;
    C = *P1 + *P2 ;
    P1 = &C ;
    ++*P1 ;
    D = *P1 ;
    *P1 = *P2 ;
    *P2 = D ;

    printf("A = %d \t B = %d \t C = %d \t D = %d \t",A,B,C,D);

*//* ( exercice 3 )
    int A = 1 , B = 2 , C = 3 ;
    int *P1 , * P2 ;

    P1 = &A ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P2 = &C ;
    printf("\n %d \t %d \t %d ",A,B,C);
    *P1 = (*P2)++ ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P1 = P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P2 = &B ;
    printf("\n %d \t %d \t %d ",A,B,C);
    *P1 -= * P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    ++*P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    *P1 *= *P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    A = ++*P2 * *P1 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P1 = &A ;
    printf("\n %d \t %d \t %d ",A,B,C);
    *P2 = *P1 /= * P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);

*//* ( exercice 4 )
    int A = 3 , B = 4 , C = 6 ;
    int *P1 , *P2 ;

    P2 = &A ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P1 = &B ;
    printf("\n %d \t %d \t %d ",A,B,C);
    *P1 = --*P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P2 = P1 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    *P1 = *P2 + 2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P1 = &A ;
    printf("\n %d \t %d \t %d ",A,B,C);
    C = ++(*P2) - (*P1)++ ;
    printf("\n %d \t %d \t %d ",A,B,C);

*//* ( exercice 5 )
    int T[Nmax] , N , i ;
   
    do
    {
        printf("Taille : ");
        scanf("%d",&N);
    } while ( N < 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = ",i);
        scanf("%d",T+i);
    }
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("%d , %p \n",*(T+i),T+i);
    }
    printf("%d", sizeof(int));

*//* ( exercice 6 )      
    int T[]={12,23,34,45,56,67,78,89,90} , *P ;

    P = T ;

    printf("%d \n",*P+2);
    printf("%d \n",*(P+2));
    printf("%d \n",&T[4]-3);
    printf("%d \n",T+3);
    printf("%d \n",&T[7]-P);
    printf("%d \n",P+(*P-10));
    printf("%d \n",*(P+*(P+8)-T[7]));

*//* ( exercice 7 )
    int T[]={0,1,2,3,4} , i , *P ;
    
    for ( P = &T[0] ; P <= &T[4] ; P++)
    {
        printf("%d \t",*P);
    }
    
    printf("\n");

    for ( P = T , i = 0 ; P+i <= T+4 ; P++ , i++)
    {
        printf("%d \t",*(P+i));
    }
    
    printf("\n");

    for ( P = T+4 ; P >= T ; P--)
    {
        printf("%d \t",*P);
    }
    
    printf("\n");

    for ( P = T+4 ; P >= T ; P--)
    {
        printf("%d \t",T[P-T]);
    }

*//* ( exercice 8 )
    int T[Nmax] , N , *P , P = T , i ;
    
    do
    {
        printf("Taille : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( P = T ; P < T + N ; P++ )
    {
        printf("entrer l'element d'indice %d : ",P-T);
        scanf("%d",P);
    }
    
    for ( P = T ; P < T + N ; P++)
    {
        printf("%d \t",*P);
    }

*//* ( exercice 9 )    
    int A = 4 , B = 5 , C = 7 ;
    int *P1 , *P2 ;

    P2 = &A ;
    printf("%d %d %d\n",A,B,C);
    P1 = &B ;
    printf("%d %d %d\n",A,B,C);
    *P1 = --(*P2) ;
    printf("%d %d %d\n",A,B,C);
    P2 = P1 ;
    printf("%d %d %d\n",A,B,C);
    *P1 = *P2 - 2 ;
    printf("%d %d %d\n",A,B,C);
    P1 = &A ;
    printf("%d %d %d\n",A,B,C);
    C = ++*P2 - (*P1)++ ;
    printf("%d %d %d\n",A,B,C);
    C = ++*P2 - *P1++;
    printf("%d %d %d\n",A,B,C);

*//* ( exrecice 10 )
    int T[Nmax] , N , *P = T ;

    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    for ( P = T ; P <= T + N ; P++)
    {
        printf("val %d : ",P-T);
        scanf("%d",P);
    }
    
    for ( P = T ; P <= T + N ; P++)
    {
        if ( *P == 0 )
        {
            printf("element nul trouve d'indice %d !\n",P-T);
        }
    }

*//* ( exercice 11 )
    int T[Nmax] , *P1 , *P2 , N , temp ;
    
    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    for ( P1 = T  ; P1 < T + N ; P1 ++)
    {
        printf("val %d : ",P1 - T);
        scanf("%d",P1);
    }
    
    for ( P1 = T ; P1 < T + N - 1 ; P1 ++)
    {
        for ( P2 = P1 + 1 ; P2 < T + N ; P2 ++)
        {
            if ( *P1 > *P2 )
            {
                temp = *P1 ;
                *P1 = *P2 ;
                *P2 = temp ;
            }
        }
    }
    
    for ( P1 = T ; P1 < N + T ; P1 ++)
    {
        printf("%d \t",*P1);
    }

*//* ( exercice 12 )
    int A = -3 , B = 4 , C = 6 ;
    int *P1 , * P2 ;
    
    P2 = &A ;
    printf("%d \t %d \t %d \t %p \t %p \n",A,B,C,P1,P2);
    P1 = &B ;
    printf("%d \t %d \t %d \t %p \t %p \n",A,B,C,P1,P2);
    *P1 = --(*P2) ;
    printf("%d \t %d \t %d \t %p \t %p \n",A,B,C,P1,P2);
    P2 = P1 ;
    printf("%d \t %d \t %d \t %p \t %p \n",A,B,C,P1,P2);
    *P1 = *P2 + 2 ;
    printf("%d \t %d \t %d \t %p \t %p \n",A,B,C,P1,P2);
    P1 = &A ;
    printf("%d \t %d \t %d \t %p \t %p \n",A,B,C,P1,P2);
    C = ++*P2 - *P1++ ;
    printf("%d \t %d \t %d \t %p \t %p \n",A,B,C,P1,P2);

*//* ( exercice 13 )
    int T[] = {10,20,30,40,50,60,70,80,90};
    int *P = T ;

    printf("%d \n",*P-5);
    printf("%d \n",*(P+0));
    printf("%p \n",*P++);
    printf("%p \n",P-T+1);
    printf("%p \n",++P + 3);

*//* ( exercice 14 )
    int A[Nmax] , B[Nmax] , M , N , *P1 , *P2 ;       

    do
    {
        printf("M : ");
        scanf("%d",&M);
        printf("N : ");
        scanf("%d",&N);
    } while ( M < 0 || M >= Nmax || N < 0 || N >= Nmax );
    
    for ( P1 = A  ; P1 < A + M ; P1 ++)
    {
        printf("val %d : ",P1 - A);
        scanf("%d",P1);
    }
    
    for ( P2 = B  ; P2 < B + N ; P2 ++)
    {
        printf("val %d : ",P2 - B);
        scanf("%d",P2);
    }

    for ( P1 = A + M , P2 = B ; P2 < B + N ; P1++ , P2++)
    {
        *P1 = *P2;
    }
    
    for ( P1 = A ; P1 < A+M+N ; P1++ )
    {
        printf("%d \t",*P1);
    }
        
*//* ( exercice 15 )   
    int A[Nmax] , X , *P1 , *P2 , N ;
    
    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    for ( P1 = A ; P1 < A + N ; P1++)
    {
        printf("val %d : ",P1-A);
        scanf("%d",P1);
    }
    
    printf("entrer la valeur que vous voulez supprimer : ");
    scanf("%d",&X);

    P2 = A ;

    for ( P1 = A ; P1 < A + N ; P1++)
    {
        if ( *P1 == X )
        {
            for ( P2 = P1 ; P2 < A + N ; P2++)
            {
                *P2 = *(P2 + 1) ;
            }
            N-- ;
            P1 -- ;
        }
    }
    
    printf("le tableau apres la suppretion de %d est : \n",X);
    
    for ( P1 = A ; P1 < A + N ; P1++)
    {
        printf("%d \t",*P1);
    } 
*//* ( exercice 16 )
    int A , B ;
    int *P1 , *P2 ;

    P1 = &A ;
    P2 = &B ;

    printf("Entrer la valeur de A : ");
    scanf("%d",&A);
    printf("Entrer la valeur de B : ");
    scanf("%d",&B);

    printf("A + B = %d \n",*P1 + *P2);
    printf("A * B = %d \n",*P1 * *P2);
    printf("A - B = %d \n",*P1 - *P2);
    
    if ( *P2 != 0 )
    {
        printf("A / B = %.2f \n",*P1 / (float)*P2);
    }
    else
    {
        printf("Difference impossible \n");
    }

*//*  ( exercice 17 )
    int X , *P ;
    
    P = &X ;

    printf("entrer la valeur de X : ");
    scanf("%d",&X);

    if ( *P % 2 == 0 )
    {
        printf("%d est un nombre pair \n",*P);
    }
    else
    {
        printf("%d est un nombre impair \n",*P);
    }

*//*  ( exercice 18 )
    int X , *P , i ;

    P = &X ;

    do
    {
        printf("entrer un nombre : ");
        scanf("%d",P);
    } while ( *P <= 0 );
    
    printf("les diviseurs de %d sont : \n",*P);

    for ( int i = 1 ; i < *P ; i++)
    {
        if ( *P % i == 0 )
        {
            printf("%d \t",i);
        }
    }

*//* ( exercice 19 )
    int T[Nmax] , *P = T , n ;

    do
    {
        printf("La taille : ");
        scanf("%d",&n);
    } while ( n <= 0 || n > Nmax );
    
    for ( P = T ; P < T + n ; P++ )
    {
        printf("val : ");
        scanf("%d",P);
    }
    
    for ( P = T ; P < T + n ; P++ )
    {
        printf("%d \t",*P);
    }
    
*//* ( exercice 20 )
    int T[Nmax] , *P1 = T , n , *P2 = T , X ;

    do
    {
        printf("La taille : ");
        scanf("%d",&n);
    } while ( n <= 0 || n > Nmax );
     
    for ( P1 = T ; P1 < T + n ; P1++ )
    {
        printf("val %d : ",P1 - T);
        scanf("%d",P1);
    }
    
    printf("Veuillez entrer le numero que vous voulez supprimer : ");
    scanf("%d",&X);

    P2 = T ;

    for ( P1 = T ; P1 < T + n ; P1++)
    {
        *P2 = *P1 ;

        if ( *P2 != X )
        {
            P2++ ;
        }
    }

    n = P2 - T ;

    printf("le tableau apres la supretion de %d est : \n",X);

    for ( P1 = T ; P1 < T + n ; P1++)
    {
        printf("%d \t",*P1);
    }
    
*//* ( exercice 21 )
    int T[Nmax] , *P1 = T , n , *P2 = T , temp ;

    do
    {
        printf("La taille : ");
        scanf("%d",&n);
    } while ( n <= 0 || n > Nmax );
     
    for ( P1 = T ; P1 < T + n ; P1++ )
    {
        printf("val %d : ",P1 - T);
        scanf("%d",P1);
    }

    P2 = T ;

    for ( P1 = T ; P1 < T + n - 1 ; P1++)
    {
        for ( P2 = P1 + 1 ; P2 < T + n ; P2++)
        {
            if ( *P2 < *P1 )
            {
                temp = *P1 ;
                *P1 = *P2 ;
                *P2 = temp ;
            }   
        }
    }
    
    printf("le tableau en ordre croissant est : \n");

    for ( P1 = T ; P1 < T + n ; P1++)
    {
        printf("%d \t",*P1);
    }
    
*//* ( exercice 22 )
    int T[Nmax] , N , *P1 , *P2 , temp ;

    do
    {
        printf("entrer la taille : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    for ( P1 = T ; P1 < T + N ; P1++ )
    {
        printf("val %d : ",P1 - T);
        scanf("%d",P1);
    }
    
    printf("\n le tableau est : \n");

    for ( P1 = T ; P1 < T + N ; P1++ )
    {
        printf("%d \t",*P1);
    }

    for ( P1 = T , P2 = T + N - 1 ; P1 < P2 ; P1++ , P2-- )
    {
        temp = *P1 ;
        *P1 = *P2 ;
        *P2 = temp ;
    }
    
    printf("\n le tableau dan l'ordre inverse est : \n");

    for ( P1 = T ; P1 < T + N ; P1++ )
    {
        printf("%d \t",*P1);
    }
    
*//* ( exercice 23 )
    int A[Nmax] , B[Nmax] , N , M , *PA , *PB ;
    
    do
    {
        printf("entrer la taille du tableau A : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );

    do
    {
        printf("entrer la taille du tableau B : ");
        scanf("%d",&M);
    } while ( M < 0 || M > Nmax );

    printf("remplissage de tableau A : \n");

    for ( PA = A ; PA < A + N ; PA++ )
    {
        printf("val %d : ",PA - A + 1);
        scanf("%d",PA);
    }
    
    printf("remplissage de Tableau B : \n");

    for ( PB = B ; PB < B + M ; PB++ )
    {
        printf("valA %d : ",PB - B + 1);
        scanf("%d",PB);
    }

    for ( PA = A + N , PB = B ; PB < B + M ; PB++ , PA++ )
    {
        *PA = *PB ;
    }
    
    N += M ;

    printf("le tableau final est : \n");

    for ( PA = A ; PA < A + N ; PA++ )
    {
        printf("%d \t",*PA);
    }
    
*/
    int T[Nmax] , N , *P1 , *P2 , temp ;
    
    do
    {
        printf("entrer la taille de tableau : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    for ( P1 = T ; P1 < T + N ; P1++ )
    {
        printf("val %d : ",P1 - T + 1);
        scanf("%d",P1);
    }
    
    P2 = T ;

    for ( P1 = T ; P1 < T + N - 1 ; P1++ )
    {
        for ( P2 = P1 + 1 ; P2 < T + N ; P2++ )
        {
            if ( *P2 > *P1 )
            {
                temp = *P1 ;
                *P1 = *P2 ;
                *P2 = temp ;
            }   
        }
    }
    
    printf("le tableau en ordre decroissant : \n");

    for ( P1 = T ; P1 < T + N ; P1++)
    {
        printf("%d \t",*P1);
    }

}