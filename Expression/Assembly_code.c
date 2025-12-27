#include <stdio.h>
int main()
{
    int x = 40, y = 30, a = 45, b = 55;
    int u;
   // assembly code for this expression u = x * y + a - b;
   __asm{
    MOV EAX,x
    MUL y
    ADD EAX, a
    SUB EAX, b
    MOV u,EAX
   }
    printf("u = %d", u);
 return 0;
}
