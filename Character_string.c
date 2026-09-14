#include<stdio.h>
#include<string.h>
#define Nmax 100

void main()
{/*
    char nom[21] ;

    printf("Quel est votre nom :");
    fgets(nom,21,stdin);

    printf("Enchante %s ",nom);
*//*
    char a[11] = "fifa";
    char b[11] = "fortnite";
    char c[11] ;

    int longueur = strlen(a);
    int result = strcmp(a,b);
    
    strcpy(c,a); 

    strcat(a,b);

    printf("strcmp(%s,%s) est %d \n",a,b,result);
    printf("strlen(a) = %d \n",longueur); 
    printf("a = %s et c = %s \n",a,c); 
    printf("a = %s",a);
*//*
    char nom[Nmax] ;

    printf("Quelle est votre nom : ");
    fgets(nom,Nmax,stdin);

    for ( int i = 0 ; nom[i] != '\0' ; i++ )
    {
        if ( nom[i] == '\n' )
        {
            nom[i] == '\0' ;
            break;
        }
    }

    printf("nom : %s",nom);
*//*
    char first[Nmax] , last[Nmax] , Full_name[Nmax] ;

    printf("First name :");
    scanf("%s",first);

    strcpy(Full_name,first) ;

    printf("Last name : ");
    scanf("%s",last);

    strcat(Full_name," ");
    strcat(Full_name, last);

    printf("Your full name is : %s \n",Full_name);
*//*
    char sentence[Nmax];
    int cpt = 0 , length ;

    printf("Write a sentence: ");
    fgets(sentence, Nmax, stdin);

    for ( int i = 0 ; sentence[i] != '\0'; i++ )
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
        {
            cpt++;
        }
    }

    length = strlen(sentence);

    if ( sentence[length - 1] == '\n' )
    {
        length -- ;
    }

    printf("In this sentence , we have %d vowels and his length is %d \n",cpt,length);
*//*
    char sentence[Nmax] , character ;
    int cpt = 0 ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);
    
    printf("enter a character : ");
    scanf("%c",&character);

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] == character )
        {
            cpt ++ ;
        }
        
    }
    
    printf("In this sentence , the character appears %d times \n",cpt);
*//*
    char sentence[Nmax] , Old_char , New_char ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);

    printf("enter character to replace : ");
    scanf(" %c",&Old_char);

    printf("enter replacement character : ");
    scanf(" %c",&New_char);

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] == Old_char )
        {
            sentence[i] = New_char ;
            break ;
        }
        
    }
    
    printf("New sentence : %s \n",sentence);
*//*
    char sentence[Nmax] , rev_sentence[Nmax] ;
    int length , i , j ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);

    for ( i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] == '\n' )
        {
            sentence[i] = '\0' ;
            break ;
        }
        
    }
    
    length = strlen(sentence);

    for ( i = length - 1 , j = 0 ; i >= 0 && sentence[j] != '\0' ; i-- , j++)
    {
        rev_sentence[j] = sentence[i] ;
    }
    
    rev_sentence[j] = '\0' ;

    printf("Reversed sentence : %s \n",rev_sentence);
*//*
    char sentence[Nmax] , rev_sentence[Nmax] ;
    int length , i , j , cpt = 0 ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);

    for ( i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] == '\n' )
        {
            sentence[i] = '\0' ;
            break ;
        }
        
    }
    
    length = strlen(sentence);

    for ( i = length - 1 , j = 0 ; i >= 0 && sentence[j] != '\0' ; i-- , j++)
    {
        rev_sentence[j] = sentence[i] ;
    }

    for ( i = 0 ; sentence[i] != '\0' && rev_sentence[i] != '\0' ; i++ )
    {
        if ( sentence[i] != rev_sentence[i] )
        {
            cpt = 1 ;
            break ;
        }
    }
    
    if ( cpt == 0 )
    {
        printf("the sentence is palindrome \n");
    }
    else 
    {
        printf("It's not a palindrome \n");
    }
*//*
    char sentence[Nmax] , most_frequent ;
    int cpt = 0 , max = 0 ;

    printf("write the sentence : ");
    fgets(sentence,Nmax,stdin);

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] == ' ' )
        {
            continue ;
        }
        
        cpt = 0 ;

        for ( int j = 0 ; sentence[j] != '\0' ; j++)
        {
            if ( sentence[i] == sentence[j] )
            {
                cpt ++ ; 
            }
        }
        if ( cpt > max )
        {
            max = cpt ;
            most_frequent = sentence[i] ;
        }
    }
    
    printf("The most frequet character is : %c \n",most_frequent);
    printf("It appears %d times \n",max);
*//*
    char sentence[Nmax] , character ;
    int length ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);

    printf("enter the character to remove : ");
    scanf(" %c",&character);

    length = strlen(sentence);

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] == character )
        {
            for ( int j = i ; j < length ; j++)
            {
                sentence[j] = sentence[j+1];
            }

            i-- ; 
        }
    }
    
    printf("New sentence : %s ",sentence);
*//*
    char sentence[Nmax] ;
    int length ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);

    length = strlen(sentence) ;

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] == ' ' )
        {
            for ( int j = i ; j < length ; j++)
            {
                sentence[j] = sentence[j+1];
            }

            i-- ;
        }
    }

    printf("New sentence : %s ",sentence);
*//*
    char sentence[Nmax] ;
    int cpt = 0 ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] != ' ' )
        {
            if ( i == 0 || sentence[i-1] == ' ' )
            {
                cpt++ ;
            }
        }
    }
    
    printf("Numbers of words : %d",cpt);
*//*
    char sentence[Nmax] ;
    int cpt = 0 ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] >= 'A' && sentence[i] <= 'Z' )
        {
            cpt++ ;
        }
        
    }
    
    printf("Uppercase lettres : %d \n",cpt);
*//*
    char sentence[Nmax] ;
    int cpt = 0 ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] >= '0' && sentence[i] <= '9' )
        {
            cpt++ ;
        }
        
    }
    
    printf("Numbers : %d \n",cpt);
*//*
    char sentence[Nmax] ;
    int cpt = 0 ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( !( sentence[i] >= '0' && sentence[i] <= '9' ) && !( sentence[i] >= 'A' && sentence[i] <= 'Z' ) && !( sentence[i] >= 'a' && sentence[i] <= 'z' ) && sentence[i] != '\n' && sentence[i] != ' ' )
        {
            cpt++ ;
        }
        
    }
    
    printf("Special characters : %d \n",cpt);
*//*
    char sentence[Nmax] ;
    int length , i , j ;

    printf("write a sentence : ");
    fgets(sentence,Nmax,stdin);

    for ( int i = 0 ; sentence[i] != '\0' ; i++)
    {
        if ( sentence[i] == '\n' )
        {
            sentence[i] = '\0' ;
            break ;
        }
        
    }
    
    length = strlen(sentence);

    printf("Reverse worlds : ");

    for ( i = length - 1 , j = i ; i >= 0 ; i-- )
    {
        if ( sentence[i] == ' ' )
        {
            for ( int k = i + 1 ; k <= j ; k++ )
            {
               printf("%c",sentence[k]);
            }

            printf(" ");
            j = i - 1 ;
        }
    }

    for ( int k = 0 ; k <= j ; k++)
    {
        printf("%c",sentence[k]);
    }

*//*
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

    printf("%s \n",sentence);
*//*
    char sentence1[Nmax] , sentence2[Nmax] ;
    int cpt = 0 , length1 , length2 , i , j ;

    printf("Write the first sentence : ");
    fgets(sentence1,Nmax,stdin);

    printf("Write the seconf sentence : ");
    fgets(sentence2,Nmax,stdin);

    for ( int i = 0 ; sentence1[i] != '\0' ; i++)
    {
        if ( sentence1[i] == '\n' )
        {
            sentence1[i] = '\0' ;
            break ;
        }
    }
    
    for ( int i = 0 ; sentence2[i] != '\0' ; i++)
    {
        if ( sentence2[i] == '\n' )
        {
            sentence2[i] = '\0' ;
            break ;
        }
    }

    for ( int i = 0 ; sentence1[i] != '\0' ; i++)
    {
        if ( sentence1[i] == ' ' )
        {
            for ( int j = i ; sentence1[j] != '\0' ; j++)
            {
                sentence1[j] = sentence1[j+1] ;
            }

            i-- ;
        }
    }
    
    for ( int i = 0 ; sentence2[i] != '\0' ; i++)
    {
        if ( sentence2[i] == ' ' )
        {
            for ( int j = i ; sentence2[j] != '\0' ; j++)
            {
                sentence2[j] = sentence2[j+1] ;
            }

            i-- ;
        }
    }

    for ( int i = 0 ; sentence1[i] != '\0' ; i++)
    {
        if ( sentence1[i] >= 'A' && sentence1[i] <= 'Z' )
        {
            sentence1[i] = sentence1[i] + 32 ;
        } 
    }
    
    for ( int i = 0 ; sentence2[i] != '\0' ; i++)
    {
        if ( sentence2[i] >= 'A' && sentence2[i] <= 'Z' )
        {
            sentence2[i] = sentence2[i] + 32 ;
        }
    }

    length1 = strlen(sentence1) ;
    length2 = strlen(sentence2) ;

    if ( length1 != length2 )
    {
        printf("The two sentences are NOT anagrams \n");
    }    

        else
    {
        for ( int i = 0 ; sentence1[i] != '\0' ; i++)
        {
            int j ;

            for ( j = 0 ; sentence2[j] != '\0' ; j++)
            {
                if ( sentence1[i] == sentence2[j] )
                {
                    sentence2[j] = '#' ;
                    break ;
                }
            }

            if ( sentence2[j] == '\0' )
            {
                cpt = 1 ;
                break ;
            }
        }

        if ( cpt == 1 )
        {
            printf("The two sentences are NOT anagrams \n");
        }
        else
        {
            printf("The two sentences are anagrams \n");
        }
    }
*/
    char sentence1[Nmax] , sentence2[Nmax] , *PA , *PB ;
    int i ;

    printf("Write the first sentence : ");
    fgets(sentence1,Nmax,stdin);

    printf("write the seconde sentence : ");
    fgets(sentence2,Nmax,stdin);

    for ( PA = sentence1 ; *PA != '\0' ; PA++)
    {
        if ( *PA == '\n' )
        {
            *PA = '\0' ;
            break ;
        }
    }
    
    for ( PB = sentence2 ; *PB != '\0' ; PB++)
    {
        if ( *PB == '\n' )
        {
            *PB = '\0' ;
            break ;
        }
    }

    PA = sentence1 ;
    PB = sentence2 ;

    for ( PA = sentence1 ; *PA != '\0' ; PA++)
    {    
    }

    *PA = ' ' ;
    PA++ ;
    
    for ( PB = sentence2 ; *PB != '\0' ; PA++ , PB++ )
    {
        *PA = *PB ;
    }
    
    *PA = '\0' ;

    printf("The sentence : %s \n",sentence1);

}