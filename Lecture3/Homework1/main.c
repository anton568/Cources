#include <stdio.h>

unsigned int Shifr(unsigned int number)
{
   unsigned int twobitnumber [32];
   unsigned int sum;
   sum=0;
    unsigned int mask;
        for (int i = sizeof(unsigned int) * 8 - 1; i >= 0; i--)
        {
            mask = (1 << i);
            if (number & mask)
                twobitnumber[31-i]=1;
            else
                 twobitnumber[31-i]=0;
             printf("%u",twobitnumber[31-i]);
        }
        printf("\n");
        for (int m=0; m <= 31; m=m+2)
        {
           unsigned  int temp;
            temp=twobitnumber[m];
            twobitnumber[m]=twobitnumber[m+1];
            twobitnumber[m+1]=temp;
             printf("%u",twobitnumber[m]);
              printf("%u",twobitnumber[m+1]);
        }
         printf("\n");
        for (unsigned int p=0; p <= 31; p++)
        {
          unsigned int stepen=2;
          unsigned int temp=0;
            temp=twobitnumber[p];
            for (unsigned int y=1; y<=31-p; y++)
                temp=temp*stepen;
            sum=sum+ temp;
        }
    return sum;
}
int main()
{
    unsigned int number=14;
 unsigned int encrypt= Shifr(number);//scanf
 printf("%u",encrypt);
}
