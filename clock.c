#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<unistd.h>
#define or ||
int main()
{
    int h,m,s,d=1;
    printf("Enter the time format in (hr , min , sec) format\n");
    scanf("%d %d %d",&h,&m,&s);
    if(h>24 or m>60 or s>60)
    {
        printf("Incorrect time format\n");
        exit(1);
    }
    while(1)
    {
        s++;
        if(s==60)
        {
            m++;
            s=0;
        }
        if(m==60)
        {
            m=0;
            h++;
        }
        if(h>24)
        {
            h=1;
        }
        system("cls");
        printf("%.2d : %.2d : %.2d ",h,m,s);
        if(h>12)
        {
            printf("P.M");
        }
        else{
            printf("A.M");
        }
        sleep(d);
    }
    return 0;
}