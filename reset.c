#include<stdio.h>
#include<math.h>

void main ()
{
      int b200 , b100 , b50 , b20 , p10 , p5 , p1 ;
      int Argent ;

    printf ("entrer la somme d argent : \n ");
    scanf("%d",&Argent);

    b200 = Argent / 200 ; 
    b100 = ( Argent % 200 ) / 100 ;
    b50 = (( Argent % 200 ) % 100 ) / 50 ;
    b20 = ((( Argent % 200 ) % 100 ) % 50) / 20 ;
    p10 = (((( Argent % 200 ) % 100 ) % 50) % 20) / 10 ;
    p5 = ((((( Argent % 200 ) % 100 ) % 50) % 20) % 10) / 5 ;
    p1 = (((((( Argent % 200 ) % 100 ) % 50) % 20) % 10) % 5) / 1 ;

    printf ("les billets de 200 sont : %d \n , les billets de 100 sont : %d \n , les billets de 50 sont : %d \n , les billets de 20 sont : %d \n , les pieces de 10 : %d \n , les pieces de 5 sont : %d \n , les pieces de 1 sont : %d \n ",b200,b100,b50,b20,p10,p5,p1);
}