/* Jakie będą wyniki następujących działań?
    * 5&3
    * 5|3
    * 7<<2&7
    * 7<<(2&7)
    * ((-1)<<8)>>16
    * 13^9 */
    
#include <stdio.h>
int main () {
  printf ("%d\n", 23&15);
  printf ("%d\n", (-8)>>2);
  printf ("%d\n", 5&3);
  printf ("%d\n", 5|3);
  printf ("%d\n", 7<<2&7);
  printf ("%d\n", 7<<(2&7));
  printf ("%d\n", ((-1)<<8)>>16);
  printf ("%d\n", 13^9);
}
