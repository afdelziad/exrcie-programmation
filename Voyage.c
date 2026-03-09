#include<stdio.h>
#include<math.h>
#define Nmax 100

void main ()
{
    int Nbclient , Tduree[Nmax] , i ;
    float Tdis[Nmax] , Tprix_finale[Nmax] , Red[i] , Aug[i] , Tprix_initial[Nmax] ;
    char Ttype[Nmax] ;
    
    do
    {
        printf("entrer le nombre de client : \n");
        scanf("%d",&Nbclient);
    } while ( Nbclient <= 0 || Nbclient > Nmax );

    for ( i = 1 ; i <= Nbclient ; i++ )
    {
        printf("Client : %d \n",i);  
        do
        {
            printf("Distance : \n");
            scanf("%f",&Tdis[i]);
        } while ( Tdis[i] <= 0 );
    
        if ( Tdis[i] <= 100 )
        {
            Tprix_initial[i] = Tdis[i] * 2 ;
        }
        else if ( Tdis[i] <= 300 )
        {
            Tprix_initial[i] = Tdis[i] * 1.8 ;
        }
        else if ( Tdis[i] <= 500 )
        {
            Tprix_initial[i] = Tdis[i] * 1.5 ;
        }
        else
        {
            Tprix_initial[i] = Tdis[i] * 10 ;
        }
    
        do 
        {
            printf("Classe : \n");
            scanf(" %c",&Ttype[i]);
        } while ( Ttype[i] != 'L' && Ttype[i] != 'l' && Ttype[i] != 'S' && Ttype[i] != 's'&& Ttype[i] != 'E' && Ttype[i] != 'e' );
    
        switch ( Ttype[i] )
        {
        case 'L' :
        case 'l' :
            Aug[i] = Tprix_initial[i] * 0.2 ;
            break;
        case 'S' :
        case 's' :
            Aug[i] = Tprix_initial[i] * 0.1 ;
            break;
        default :
            Aug[i] = 0 ;
        }

        do
        {
            printf("entrer la duree de location : \n");
            scanf("%d",&Tduree[i]);
        } while ( Tduree[i] <= 0 );
        
        if ( Tduree[i] > 5 )
        {
            Red[i] = Tprix_initial[i] * 0.1 ;
        }
        else 
        {
            Red[i] = 0 ;
        }

        Tprix_finale[i] = Tprix_initial[i] + Aug[i] - Red[i] ;
    }
    for ( i = 1 ; i <= Nbclient ; i++)
    {
        printf("Pour le client %d \n",i);
        printf("Prix initial du voyage : %.2f \n",Tprix_initial[i]);
        printf("Augmentation de la type : %.2f \n",Aug[i]);
        printf("Reduction pour la duree est : %.2f \n",Red[i]);
        printf("Prix final : %.2f \n",Tprix_finale[i]);
    }
    
}