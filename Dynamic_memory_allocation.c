#include<stdio.h>
#include<stdlib.h>
#define Nmax 100

void main()
{/*
    char *P1 , *P2 , *P3 ;

    P1 = malloc(100) ;
    printf("Allocation of 100 octets in %p \n",P1);

    P2 = malloc(50) ;
    printf("Allocation of 50 octets in %p \n",P2);

    free(P1) ;
    printf("Release of 100 octets in %p \n",P1);

    P3 = malloc(40) ;
    printf("Allocation of 40 octets in %p \n",P3);
*//*
    int *X = malloc(3*sizeof(int));

    printf("%d \n",*(X+0));
    printf("%d \n",*(X+1));
    printf("%d \n",*(X+2));

    *(X+0) = 1 ;
    *(X+1) = 3 ;
    *(X+2) = 15 ;

    printf("%d \n",*(X+0));
    printf("%d \n",*(X+1));
    printf("%d \n",*(X+2));

    int *Y = calloc(3,sizeof(int));

    if ( Y == NULL )
    {
        printf("The memory has been not allocates \n");

        exit(0) ;
    }
    
    else
    {
        printf("%d \n",*(Y+0));
        printf("%d \n",*(Y+1));
        printf("%d \n",*(Y+2));

        *(Y+0) = 1 ;
        *(Y+1) = 3 ;
        *(Y+2) = 15 ;

        printf("%d \n",*(Y+0));
        printf("%d \n",*(Y+1));
        printf("%d \n",*(Y+2));

        free(Y);
    }
*//*
    int N , i ;
    float S = 0 , M ;

    do
    {
        printf("Enter the value of N : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
 
    float *T = calloc(N,sizeof(float));

    if ( T == NULL )
    {
        printf("The memory has been not allocates \n");
    }
    else
    {
        for ( i = 0 ; i < N ; i++)
        {
            printf("Notes %d : ",i+1);
            scanf("%f",(T+i));

            S += *(T+i) ;
        }
        
        M = S / (float) N ;

        printf("The sum of the grades : %.2f \n",S);
        printf("The average is : %.2f \n",M);

        free(T);
    }
*//*
    float *P_cost = malloc(sizeof(float)); 
    float *P_selling = malloc(sizeof(float));
    float *P = malloc(sizeof(float));

    printf("Enter the cost price : ");
    scanf("%f",P_cost);

    printf("Enter the selling price : ");
    scanf("%f",P_selling);

    *P = *P_selling - *P_cost ;

    if ( *P > 0 )
    {
        printf("A profit of %.2f \n",*P);
    }
    else if ( *P < 0 )
    {
        printf("At a lost of %.2f \n",*P);
    }
    else
    {
        printf("Neutral \n");
    }

    free(P);
    free(P_cost);
    free(P_selling);
*//*
    int *N = malloc(sizeof(int));
    int *S = malloc(sizeof(int));

    *S = 0 ;

    do
    {
        printf("Enter the value of N : ");
        scanf("%d",N);
    } while ( *N < 0 || *N > Nmax );
    
    int *T = calloc(*N,sizeof(int));


    if ( T == NULL || S == NULL )
    {
        printf("The memory has been not allocate \n");
        return 1 ;
    }
    else
    {
        for ( int i = 0 ; i < *N ; i++)
        {
            printf("Enter numbers : ");
            scanf("%d",(T+i));

            if ( *(T+i) % 2 != 0 )
            {
                *S += *(T+i) ; 
            }
            
        }
        
        printf("The sum of the odd numbers : %d \n",*S);
    }
    
    free(T);
    free(N);
    free(S);
*//*
    int *N = malloc(sizeof(int));
    int *S = malloc(sizeof(int));

    *S = 0 ;

    do
    {
        printf("Enter the value of N : ");
        scanf("%d",N);
    } while ( *N < 0 || *N > Nmax );
    
    for ( int i = 1 ; i <= *N ; i += 2 )
    {
        *S += i ;
    }
    
    printf("The sum of the odd nombres from 1 to %d is : %d \n",*N,*S);

    free(N);
    free(S);
*//*
    int *N = malloc(sizeof(int));
    int min ;

    do
    {
        printf("Enter the value of N : ");
        scanf("%d",N);
    } while ( *N < 0 || *N > Nmax );
    
    int *T = calloc(*N,sizeof(int));

    if ( T == NULL )
    {
        printf("The memory has been not allocate \n");
    }
    else
    {
        printf("Number 1 : ");
        scanf("%d",T);

        min = *T ;

        for ( int i = 1 ; i < *N ; i++)
        {
            printf("Number %d : ",i+1);
            scanf("%d",(T+i));
        
            if ( min > *(T+i) )
            {
                min = *(T+i) ;
            }
            
        }
        
        printf("The smallest number is : %d \n",min);
    } 
    
    free(T);
    free(min);
    free(N);
*/
    int *N = malloc(sizeof(int));
    int S = 0 , X ;
    float M ;
    char answer ;
    
    do
    {
        printf("Enter the value of N : ");
        scanf("%d",N);
    } while ( *N < 0 || *N > Nmax );
    
    int *T = calloc(*N,sizeof(int));

    for ( int i = 0 ; i < *N ; i++)
    {
        printf("Note %d : ",i+1);
        scanf("%d",(T+i));

        S += *(T+i) ;
    }

    M = S / (float) *N ; 
        
    printf("The sum of the notes : %d \n",S);
    printf("The average is : %.2f \n",M);
    
    printf("Do you want to add another Notes (Y/N) : ");
    scanf(" %c",&answer);

    while (answer != 'N')
    {
        printf("Enter how many notes you want add : ");
        scanf("%d",&X);

        *N += X ;

        T = realloc(T,*N * sizeof(int));

        for (int i = 0 ; i < *N - X ; i++)
        {
            printf("Note %d : %d \n",i+1,*(T+i));
        }

        printf("Enter the new notes :\n");

        for (int i = *N - X ; i < *N ; i++)
        {
            printf("Note %d : ",i+1);
            scanf("%d",(T+i));

            S += *(T+i);
        } 

        M = S / (float)*N;

        printf("The new average is : %.2f\n", M);
    
        printf("Do you want to add another Notes (Y/N) : ");
        scanf(" %c",&answer);
    }
    
    
}