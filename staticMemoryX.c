#include <stdio.h>

int main ()
{     
       // static memory allocation
       float Marks[5];    // 20 byte static memory allocation


       printf("Enter you marks : \n ");



       // sequence 
       scanf("%f",&Marks[0]);
       scanf("%f",&Marks[1]);
       scanf("%f",&Marks[2]);
       scanf("%f",&Marks[3]);
       scanf("%f",&Marks[4]);

       printf("Entered Marks : \n");


       printf("%f\n",Marks[0]);
       printf("%f\n",Marks[1]);
       printf("%f\n",Marks[2]);
       printf("%f\n",Marks[3]);
       printf("%f\n",Marks[4]);

       return 0;

}