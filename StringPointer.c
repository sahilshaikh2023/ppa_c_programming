#include<stdio.h>

int main()
{

  
       char Str[] = "Ganesh";

       char*ptr = NULL;

       ptr = Str ;

       printf("%c\n",*ptr);   //G
       ptr++ ;   // 101

        printf("%c\n",*ptr);   //a
        ptr++ ;


         printf("%c\n",*ptr);  // n
         ptr++; //103






       return 0 ;
}