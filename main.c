#include <stdio.h>
#include <stdlib.h>

int main()
{  float N1,N2;
   char S;
   do{
    printf("\nDonner le premier nombre\n");
    scanf("%f",&N1);
    printf("Donner le deuxieme nombre\n");
    scanf("%f",&N2);
    printf("Donner un operateur\n");
    scanf("%s",&S);

    switch (S)
  {
      case'+':printf("%f+%f=%f",N1,N2,N1+N2);
      break;
      case'-':printf("%f-%f=%f",N1,N2,N1-N2);
      break;
      case'*':printf("%f*%f=%f",N1,N2,N1*N2);
      break;
      case'/':
          if(N2!=0){
           printf("%f/%f=%f",N1,N2,N1/N2);
          }
          else{
                printf("impossible");
          }

      break;

  }
  }while(S!='q');

    return 0;

}
