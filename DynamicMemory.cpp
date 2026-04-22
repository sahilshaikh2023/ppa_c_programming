#include<iostream>
using namespace std;

int main ()
{     

    int size = 0;

     float*Marks = NULL;
      int i =0 ;  // loop counter

    cout<<"Enter Number of Element ";
    cin>>size;


     // Dynamic  memory allocation

     Marks = new float[size];



     //  float Marks[5];                                                    // 20 byte static memory allocation


    //    int i =0 ;  // loop counter

    cout<<"Enter you marks : \n ";


       //iteration
       //         1         2        3 
       for  ( i=0 ; i<size ; i++)
           {
           
            cin>>Marks[i];  //4

           }
       cout<<"Entered Marks : \n";


             //         1         2        3 
       for  ( i=0 ; i<size ; i++)
           {
             
            cout<<Marks[i]<< endl;  //4

           }

           delete [ ] Marks;


       return 0;

}