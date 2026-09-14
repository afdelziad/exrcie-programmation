#include<stdio.h>
#include<string.h>
#define Nmax 1000
void main()
{
    char sentence[Nmax] ;

    printf("Write a sentence : ");
    fgets(sentence,Nmax,stdin);

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] == '\n' )
        {
            sentence[i] = '\0' ;
            break ;
        }
        
    }
    
    for ( int i = 0 , j ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] != ' ' )
        {
            if ( i == 0 || sentence[i-1] == ' ' )
            {
                j = i ;
            }

            while ( sentence[j] != ' ' && sentence[j] != '\0' )
            {
                j++ ;
            }
            
            for ( int k = j ; sentence[k] != '\0' ; k++)
            {
                if ( sentence[k] != ' ' )
                {
                    if ( k == 0 || sentence[k-1] == ' ' )
                    {
                        int a = i , b = k ;
                        int different = 0 ;

                        while ( sentence[a] != ' ' && sentence[b] != ' ' )
                        {
                            if ( sentence[a] != sentence[b] )
                            {
                                different = 1 ;
                            }

                            a++ ;
                            b++ ;
                        }

                        if ( sentence[a] == ' ' && sentence[b] == ' ' && different == 0 )
                        {
                            for ( int x = k ; sentence[x] != '\0' ; x++ )
                            {
                                sentence[x] = sentence[x+(b-k+1)] ;
                            }
                            
                        }   
                    }   
                }   
            }    
        }
    }

    printf("New sentence : %s \n",sentence);

}