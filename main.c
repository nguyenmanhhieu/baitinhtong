//
//  main.c
//  code test
//
//  Created by Hiếu Hee on 31/05/2022.
//
#include <stdio.h>
int main(void)
{
    int integer1;
    int integer2;
    int sum;
    
    printf("Enter firt integer\n");
    scanf("%d",&integer1);
    printf("Enter second integer\n");
    scanf("%d", &integer2);
    sum = integer1 + integer2;
    printf("Sum is %d\n",sum);
    return 0;
}
