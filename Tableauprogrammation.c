#include<stdio.h>
#define Nmax 100
#define Lmax 100
#define Cmax 100
 
void main ()
{/*
    int T[Nmax] , i ;

    for ( i = 1 ; i <= Nmax ; i++)
    {
        printf("val : \n");
        scanf("%d",&T[i]);
    }
    for ( i = 0 ; i <= Nmax ; i++)
    {
        printf("T[%d]=%d \t",i,T[i]);
    }
*//*
    int N , S = 0 , cpt = 0 , i ;
    float M , Note[Nmax] ;

    do
    {
        printf("entrer le nombre de cases a remplir : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= 100 );
    
    for ( i = 1 ; i <= N ; i++)
    {
        printf("Note : \n");
        scanf("%f",&Note[i]);
        
        S += Note[i] ;  
    }
    for ( i = 1 ; i <= N ; i++ )
    {
        printf("Note[%d] = %.2f \t",i,Note[i]);
    }
    
    M = S / (float)N ;

    for ( i = 1 ; i < N ; i++ )
    {
        if ( Note[i] < M )
        {
            cpt ++ ;
        }
    }
    
    printf("\n la moyenne : %.2f \n",M);
    printf("le nombre note inferieur a la moyenne est : %d \n",cpt);

*//*
    float T[Nmax] , Tpos[Nmax] , Tneg[Nmax] ;
    int N , i , ineg = 1 , ipos = 1 ;
    
    do
    {
        printf("entrer le nombre de cases a remplir : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 1 ; i <= N ; i++ )
    {
        printf("note : \n");
        scanf("%f",&T[i]);

        Tpos[i] = 0;
        Tneg[i] = 0;

        if ( T[i] >= 0)
        {
            Tpos[ipos] = T[i] ;
            ipos ++ ;
        }
        else 
        {
            Tneg[ineg] = T[i] ;
            ineg ++ ;
        }     
    }
    for ( ipos = 1 ; i <= ipos ; i++)
    {
        printf("\n Tpos[%d] = %.2f \t",ipos,Tpos[i]);
    }
    for ( ineg = 1 ; i <= ineg ; i++)
    {
        printf("\n Tneg[%d] = %.2f \t",ineg,Tneg[i]);
    }
*//*
    int T[Nmax] , i , Tinv[Nmax] , N ;

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
    for ( i = 0 ; i < N ; i++ )
    {
        Tinv[i] = T[N-1-i];
    }
    printf("le tableau inverse : \n");
    for ( i = 0 ; i < N ; i++)
    {
        printf("Tinv[%d] = %d \n",i,Tinv[i]);
    }

*//* ( 1er Methode )
    int T[Nmax] , i , N , j , temp ;

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
    
    for ( i = 0 ; i < N - 2 ; i++ )
    {
        for ( j = i + 1 ; j < N ; j++ )
        {
            if ( T[i] > T[j] )
            {
                temp = T[i] ;
                T[i] = T[j] ;
                T[j] = temp ;
            }
        }
    }
    
    for ( i = 0 ; i < N ; i++ )
    {
        printf("T[%d] = %d \n",i,T[i]);
    }
*//* ( 2eme Methode )
    int T[Nmax] , N , pos , j , temp , i ;   

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
        
        for ( j = 0 ; i < N - 1 ; i++)
        {
        
            if ( T[pos] > T[j] )
            {
                pos = j ;
            }
        
            temp = T[pos] ;
            T[pos] = T[i] ;
            T[pos] = temp ;
        }
    }
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = %d \n",i,T[i]);
    }
*//*    
    int T[Nmax] , i , N , T1[Nmax] , T2[Nmax] , j = 0 , k = 0 ;

    do
    {
        printf("entrer le nombre de taille : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++ )
    {
        printf("T[%d] = \n",i+1);
        scanf("%d",&T[i]);

        if ( T[i] % 2 == 0 )
        {
            T1[j] = T[i] ;
            j++ ;
        }
        else if ( T[i] % 2 != 0 )
        {
            T2[k] = T[i] ;
            k++ ;
        }
    }
    
    printf("\n les nombres pairs sont : \n");

    for ( i = 0 ; i < j ; i++ )
    {
        printf("T[%d] = %d \t",j,T1[i]);
    }
    printf("\n les nombres impaires sont : \n");

    for ( i = 0 ; i < k ; i++)
    {
        printf("T[%d] = %d \t",k,T2[i]);
    }
*//*

    int T[Nmax] , i , N , X , pos ;
    
    do
    {
        printf("entrer le nombre de taille : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++ )
    {
        printf("T[%d] = \n",i+1);
        scanf("%d",&T[i]);
    }
    
     for ( i = 0 ; i < N ; i++ )
    {
        if ( X == T[i]);
        {
            pos = i ;

            for ( int j = pos ; i <= N-2 ; j++ )
            {
                T[j] = T[j+1] ;
            }

            N-- ;
            i-- ;
        }
    }
    printf("le tableau apress la suppression de %d est : \n",X);
    for ( i = 0 ; i < N ; i++ )
    {
        printf("T[%d] = %d \n",i,T[i]);
    }
*//*
    int T[Lmax][Cmax] , i , j , max , nl , nc ;  
    
    do
    {
        printf("entrer ligne / colonne : ");
        scanf("%d%d",&nl,&nc); 
    } while ( nl < 0 || nl > Nmax || nc < 0 || nc >= Cmax );
    
    for ( i = 0 ; i < nl ; i++)
    {
        for ( j = 0 ; j < nc ; j++)
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }
    }
    
    max = T[0][0] ;

    for ( i = 0 ; i < nl ; i++)
    {
        for ( j = 0 ; j < nc ; j++)
        {
            if ( max < T[i][j] )
            {
                max = T[i][j] ;
            }
        }
    }
    
    printf("%d est la valeur maximal de la matrice \n",max); 

*//*
    int T[Lmax][Cmax] , i , j , Sl = 0 , Sc = 0 , nl , nc ;

    do
    {
        printf("entrer ligne / colonne : ");
        scanf("%d%d",&nl,&nc);
    } while ( nl < 0 || nl > Nmax || nc < 0 || nc >= Cmax );

    for ( i = 0 ; i < nl ; i++)
    {
        for ( j = 0 ; j < nc ; j++)
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }
    }

    for ( i = 0 ; i < nl ; i++)
    {
        Sl = 0 ;

        for ( j = 0 ; j < nc ; j++)
        {
            Sl += T[i][j] ;
        }

        printf("la somme de la %d ligne est : %d \n",i+1,Sl);
    }
    
    for ( j = 0 ; j < nc ; j++)
    {
        Sc = 0 ;

        for ( i = 0 ; i < nl ; i++)
        {
            Sc += T[i][j] ;
        }

        printf("la somme de la %d colonne est : %d \n",j+1,Sc);
    }
*//*
    int T[Nmax][Nmax] , dim , i , j , S_diagonal_principal = 0 ;

    do
    {
        printf("entrer la dimension : ");
        scanf("%d",&dim);
    } while ( dim < 0 || dim >= Nmax );
    
    for ( i = 0 ; i < dim ; i++ )
    {
        for ( j = 0 ; j < dim ; j++)
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }        
    }
    
    printf("la diagonale printcipal : \n");

    for ( i = 0 ; i < dim ; i++ )
    {
        for ( j = 0 ; j < dim ; j++)
        {
            if ( i == j )
            {
                printf("%d \t",T[i][j]);
                S_diagonal += T[i][j] ;
            }
        }
    }
    
    printf("\n");
    printf("la somme des diagonales est : %d \n",S_diagonal_principal);

*//**
    int T[Nmax][Nmax] , i , j , dim , S_diagoal_secondaire = 0 ;

    do
    {
        printf("la dimension : ");
        scanf("%d",&dim);
    } while ( dim <= 0 || dim >= Nmax );
    
    for ( i = 0 ; i < dim ; i++)
    {
        for ( j = 0 ; j < dim ; j++)
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }
    }
    
    printf("la digonal secondaire est : \n");

    for ( i = 0 ; i < dim ; i++)
    {
        for ( j = 0 ; j < dim ; j++)
        {
            if ( i == dim-j-1 )
            {
                S_diagoal_secondaire += T[i][j] ;
                printf("%d \t",T[i][j]);
            }
        }
    }
    
    printf("\n");
    printf("la somme de la diagonal secondaire est : %d \n",S_diagoal_secondaire);

*/
    int T[Nmax][Nmax] , i , j , dim , cpt = 0 ;
    
    do
    {
        printf("la dimension : ");
        scanf("%d",&dim);
    } while ( dim <= 0 || dim >= Nmax );
    
    for ( i = 0 ; i < dim ; i++ )
    {
        for ( j = 0 ; j < dim ; j++ )
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }
    }
    
    for ( i = 0 ; i < dim ; i++)
    {
        for ( j = 0 ; j < dim ; j++)
        {
            if ( i != j )
            {
                if ( T[i][j] != T[j][i] )
                {
                    cpt ++ ;
                }
            }
        }
    }
    
    if ( cpt == 0 )
    {
        printf("la matrice est symetrique \n");
    }
    else
    {
        printf("la matrice n'est pas symetrique \n");
    }
}