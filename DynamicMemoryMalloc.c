#include <stdio.h>
#include<stdlib.h>

int main ()
{     

    int size = 0;

     float*Marks = NULL;
      int i =0 ;  // loop counter

    printf("Enter Number of Element ");
    scanf("%d",&size);



     // Dynamic  memory allocation

     Marks = (float * )malloc ( size *sizeof(float));



     //  float Marks[5];                                                    // 20 byte static memory allocation


    //    int i =0 ;  // loop counter

       printf("Enter you marks : \n ");



       //iteration
       //         1         2        3 
       for  ( i=0 ; i<size ; i++)
           {
           
            scanf("%f",&Marks[i]);  //4

           }
       printf("Entered Marks : \n");


             //         1         2        3 
       for  ( i=0 ; i<size ; i++)
           {
             
            printf("%f\n",Marks[i]);  //4

           }

           free(Marks);


       return 0;

}