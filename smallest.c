/*Write a program to find the smallest of the three numbers*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
  {  int num1, num2, num3;
     printf("\n Enter three numbers:");
     scanf("%d%d%d",&num1, &num2, &num3);
     if(num1<num2)
         { if(num1<num3)
             printf("num1 is smallest");
           else
             printf("num3 is the smallest");
         } else if(num2<num3)
              printf("num2 is the smallest");
           else
              printf("num3 is the smallest");
 getch();
  }
