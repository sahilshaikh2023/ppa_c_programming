import java.util.Scanner;

class DynaminMemory 
{
       public static void main ( String A [])
       {
            Scanner sobj = new Scanner(System.in);

            int size =  0 ;

            System.out.println("Enter Number of element");

            size = sobj.nextInt();

            // Dynamic memory allocation

            float Marks[] = new float[size];

            // use the memory

            Marks = null;

            System.gc();
       }


}
