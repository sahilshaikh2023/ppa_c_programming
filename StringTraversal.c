#include<stdio.h>

int main()
{

  
       char Str[] = "Ganesh";

       char*ptr = NULL;

       ptr = Str ;


       while( *ptr != '\0')
      {                                                                                                                              

       printf("%c\n",*ptr);   //G
       ptr++ ;   // 101
      }


         return 0 ;
}