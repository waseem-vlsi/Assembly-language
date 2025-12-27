#include <stdio.h>
int main()
{
    int x = 40, y = 30, a = 45, b = 55;
    int u,v;
   //u = x * y + a - b;
   //v = (x^y) | (a&b);
   __asm{
    MOV EAX,x
    MUL y
    ADD EAX, a
    SUB EAX, b
    MOV u,EAX

    MOV EAX, x
    XOR EAX,y
    MOV EBX,a
    AND EBX,b
    OR EAX,EBX
    MOV v,EAX
   }
    printf("u = %d, v = %d", u,v);
 return 0;
}
