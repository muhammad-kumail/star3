#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c=1;
    for(a=1;a<=10;a++)
    {
            for(c=2;c<=a;c++){
                printf(" ");
            }
        for(b=a;b<=10;b++)
        {
           printf("*");
        }
        printf("\n");
    }
    getch();
}
