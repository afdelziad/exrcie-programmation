#include<stdio.h>
#include<math.h>

void main ()
{
    int a , b , c , D ; 
    float x , x1 , x2 ;
    printf("entrez les valeurs de a,b et c \n");
    scanf("%d%d%d",&a,&b,&c);
 
    if (a==0)
      {if (b==0)
         {if (c==0)
           {
            printf("l ensemble des solutions est R \n");
           }
          else
           {
            printf("l equation n admet aucune solution \n");
           }
         }
       else
         {
          printf("elle devient une equation du premier degre %.2f",(float)-c/b);
         }
      }
    else
    {
    D=pow(b,2)-4*a*c ;
     if (D>0)
         {
          printf("l equation admet deux solution x1 = %.2f et x2 = %.2f \n",x1=(float)((-b-sqrt(D))/(2*a)),x2=(float)((-b+sqrt(D))/(2*a)));
         } 
     if (D==0)
         {
          printf("l equation admet une seule solution est : %.2f \n",x=(float)-b/(2*a));
         }
     if (D<0)
         {
          printf("l ensemble vide \n");
         }
    }


}