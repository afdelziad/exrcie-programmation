#include<stdio.h>

void main ()
{
   int i , N , X , sup = 0 , max , pos = 1 ;

    do
    {
        printf("entrer la valeur de X : \n");
        scanf("%d",&X);
    } while ( X < 0);
    
    for ( i = 1 ; i <= X ; i++ )
    {
        printf("entrer la note numero de %d : \n",i);
        scanf("%d",&N);

        max = N ;

        if ( N > 10 )
        {
            sup ++ ;
        }
        if ( N > max)
        {
            max = N ;
            pos = i ;
        }
    }
    printf("le nombre de note superieur a 10 : %d \n",sup);
    printf("la note maximale est : %d \n",max);
    printf("C'etait la note numero : %d \n",pos);
}