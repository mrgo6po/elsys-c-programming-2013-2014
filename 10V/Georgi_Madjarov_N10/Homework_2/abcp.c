#include <stdio.h>

int main()

{
    int a = 0, b = 0, c = 0, d = 0 , i = 0;
    while ( a < 10 )
 {
        b = 0;
        for ( c = 2; c <= i / 2; c++ )
   {
            if ( i % c == 0 )
       {
               b = 1;
                break;
       }
   }
        if ( b == 0 )
       {
            if ( i == d + 2 )
           {
                printf("(%d, %d)\n", d, i);
                a++;
           }
            d = i;
       }
        i++;
      }


return 0;
}
