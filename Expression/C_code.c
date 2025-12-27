#include <stdio.h>
int main()
{
    int x = 40, y = 30, a = 45, b = 55;
    int u,v;
   u = x * y + a - b;
   v = (x^y) | (a&b);

    printf("u = %d, v = %d", u,v);
 return 0;
}
