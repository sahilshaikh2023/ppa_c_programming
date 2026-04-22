class Arraydemojagged
{


       public static void main ( String A[])
       {

                int Arr [][] = new int [3][];
                Arr[0]   = new int [4];
                Arr[1]   = new int [7];
                Arr[2]   = new int [5];

                Arr[0][0] = 10 ;
                Arr[0][3] = 20 ;
                Arr[1][1] = 30 ;
                Arr[2][0] = 40 ;
                Arr[2][2] = 50 ;

                System.out.println(Arr.length);                                           //length is 3
                System.out.println(Arr[0].length);                                           //length is 4
                System.out.println(Arr[1].length);                                           //length is 7
                System.out.println(Arr[2].length);                                           //length is 5
       



       }
}