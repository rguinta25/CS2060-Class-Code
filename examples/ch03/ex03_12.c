#include <stdio.h>

int main( void )
{
   unsigned int x = 1;
   unsigned int total = 0;
   unsigned int y;

   while ( x <= 10 ) {
      y = x * x;
      printf( "%d\n", y );
      total += y;
      ++x;
   } // end while 

   printf( "Total is %d\n", total );
} // end main 

/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/