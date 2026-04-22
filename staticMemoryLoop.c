#include <stdio.h>

int main ()
{     
       // static memory allocation
       float Marks[5];    // 20 byte static memory allocation


       int i =0 ;  // loop counter

       printf("Enter you marks : \n ");



       //iteration
       //         1         2        3 
       for  ( i=0 ; i<5 ; i++)
           {
           
            scanf("%f",&Marks[i]);  //4

           }
       printf("Entered Marks : \n");


             //         1         2        3 
       for  ( i=0 ; i<5 ; i++)
           {
             
            printf("%f\n",Marks[i]);  //4

           }


       return 0;

}