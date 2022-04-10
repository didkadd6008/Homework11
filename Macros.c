#include <stdio.h>

#define MAXONE(x,y)  ((x)>(y)?(x):(y))
#define MAX(x, y, z) MAXONE(MAXONE(x,y),z)
#define MINONE(x,y)  ((x)<(y)?(x):(y))
#define MIN(x, y, z) MINONE(MINONE(x,y),z)
#define SETBIT(mask, bit) (mask|= (1<<bit))
#define CLEARBIT(mask, bit) (mask&= ~(1<<(bit)))
#define INVERSEBIT(mask, bit) (mask^=(1<<(bit)))
#define CHECKBIT(mask, bit)   (bit=(mask)&(1<<(bit))
#define SWAP(a,b) {a = a +b;\
                    b = a-b;\
                   a -=b; }


int main(){
    int mask = 0x00;
    int bit = 1;
    int a =7;
    int b = 9;
    printf("%d\n",MAX(9,12,1));
    printf("%d\n",MIN(1,78,12));
    printf("%x\n",SETBIT(mask,bit));
    printf("%x\n",CLEARBIT(mask,bit));
    printf("%x\n",INVERSEBIT(mask,bit));
    printf("%d\n",CHECKBIT(mask,bit)));
   SWAP(a,b);
   printf("%d %d",a,b);

}