#include<stdio.h>
#include<math.h>
#define Nmax 100

/* ( exercice 1 )
void somme(int a , int b)
{
    int S ;

    S = a + b ;

    printf("S : %d \n",S);
}

void main ()
{
    int a , b ;

    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);

    somme(a,b);
}
*//* ( exercice 2 )
void multiplication(int N )
{
    int P ;

    for( int i = 1 ; i <= 10 ; i++ )
    {
        P = N * i ;

        printf("%d * %d = %d \n",N,i,N*i);
    }
}

void main ()
{
    int N ;

    printf("N : ");
    scanf("%d",&N);

    multiplication(N);
}
*//* ( exercice 3 )
void voyelle_consonne(char lettre)
{
    
    if ( lettre == 'a' || lettre == 'e'|| lettre == 'o'|| lettre == 'u'|| lettre == 'i'|| lettre == 'y' || lettre == 'A' || lettre == 'E'|| lettre == 'O'|| lettre == 'U'|| lettre == 'I'|| lettre == 'Y')
    {
        printf("lettre %c est une voyelle \n",lettre);
    }
    else
    {
        printf("lettre %c est une consonne \n",lettre);
    }
}

void main()
{
    char lettre ;

    printf("lettre : ");
    scanf("%c",&lettre);

    voyelle_consonne(lettre);
}
*//* ( exercice 4 )
void calculatrice(int a ,int b)
{
    int Somme , Produit , Soustraction , X ;
    float Division ;

    printf("Entrer l'operateur : ");
    scanf("%d",&X);

    switch ( X )
    {
    case 1 :
        Somme = a + b ;
        printf("Somme : %d \n",Somme);
        break;
    case 2 :
        Produit = a * b ;
        printf("Produit : %d \n",Produit);
        break;
    case 3 :
        Division = a / (float)b ;
        printf("Division : %.2f \n",Division);
        break;
    case 4 :
        Soustraction = a - b ;
        printf("Soustraction : %d \n",Soustraction);
        break;
    default :
        printf("Erreur ! \n");
    }
}

void main()
{
    int a , b , X ;

    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);

    calculatrice(a,b);
}
*//* ( exercice 5 )
void puissance(int X ,int n)
{
    int P ;

    P = pow(X,n);

    printf("Puissance : %d \n",P);
}

void main()
{
    int X , n ;

    printf("X : ");
    scanf("%d",&X);
    printf("n : ");
    scanf("%d",&n);

    puissance(X,n);
}
*//* ( exercice 6 )
void absolue(int a)
{
    if ( a < 0 )
    {
        printf("la valeur absolue de a est %d \n",(-1)*a);
    }
    else
    {
        printf("la valeur absolue de a est %d \n",a);
    }
}
void main ()
{
    int a ;

    printf("a : ");
    scanf("%d",&a);

    absolue(a);
}
*//* ( exercice 7 )
void maximum(int a,int b)
{
    if ( a > b )
    {
        printf("le maximum est %d \n",a);
    }
    else
    {
        printf("le maximum est %d \n",b);
    }
}
void main()
{
    int a , b ;

    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);

    maximum(a,b);
}
*//* ( exercice 8 )
void somme(int N)
{
    int S = 0 ;

    for ( int i = 1 ; i <= N ; i++)
    {
        S += i ;
    }

    printf("S : %d \n",S);
}
void main()
{
    int N ;

    printf("N : ");
    scanf("%d",&N);

    somme(N);
}
*//* ( exercice 9 )
void factorielle(int N)
{
    int F=1 ;

    for ( int i = 0 ; i < N ; i++)
    {
        F *= ( N - i );
    }
    
    printf("Factorielle de %d est %d \n",N,F);
}
void main ()
{ 
    int N ;

    printf("N : ");
    scanf("%d",&N);

    factorielle(N);
}
*//* ( exercice 10 )
int Somme , Produit , Division , Soustraction , a , b ;

void calculatrice(int a,int b)
{
    int X ;

    printf("Entrer l'operateur : ");
    scanf("%d",&X);

    switch ( X )
    {
    case 1 :
        Somme = a + b ;
        printf("Somme : %d \n",Somme);
        break;
    case 2 :
        Produit = a * b ;
        printf("Produit : %d \n",Produit);
        break;
    case 3 :
        Division = a / (float)b ;
        printf("Division : %.2f \n",Division);
        break;
    case 4 :
        Soustraction = a - b ;
        printf("Soustraction : %d \n",Soustraction);
        break;
    default :
        printf("Erreur ! \n");
    }
}
void main()
{
    printf("entrer la valeur de a : ");
    scanf("%d",&a);
    printf("entrer la valeur de a : ");
    scanf("%d",&b);

    calculatrice(a,b);
}
*//* ( exercice 11 )
int F = 1 , N ;
void factorielle(int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        F *= ( N - i );
    }
    
    printf("fectorielle de %d est : %d \n",N,F);
}
void main()
{
    printf("entrer la valeur de N : ");
    scanf("%d",&N);

    factorielle(N);
}
*//* ( exercice 12 )
int temp , A , B ;
void Permutation(int *X,int *Y)
{
    temp = *X ;
    *X = *Y ;
    *Y = temp ;
}
void main()
{
    printf("entrer la valeur de A : ");
    scanf("%d",&A);
    printf("entrer la valeur de B : ");
    scanf("%d",&B);

    Permutation(&A,&B);

    printf("Apres !\n");
    printf("la valeur de A est devenu : %d \n",A);
    printf("la valeur de B est devenu : %d \n",B);
}
*/
int N , S = 0 , T[Nmax] ;

void Somme_Tableau(int T[],int N)
{
    for (int i = 0 ; i < N ; i++)
    {
        S += T[i] ;
    }
    printf("\n la somme des elements est : %d \n",S);
}
void Remplissage()
{
    for ( int i = 0 ; i < N ; i++)
    {
        scanf("%d",&T[i]);
    }
    
}
void Affichage()
{
    for (int i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
}
void main()
{
    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N < 0 || N > Nmax );
    
    printf("le Remplissage : \n");
    Remplissage();
    Affichage();
    Somme_Tableau(T,N);
}

