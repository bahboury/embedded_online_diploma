//Name : bahy mohy mohamed

// ********** Homework 1 *********
// ########## Example 2 ##########

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int num ;
    
//     printf("enter an integer : ");

//     fflush(stdin);fflush(stdout);

//     scanf("%d",&num);

//     printf("you entered : %d",num);
// }

//########## Example 3 ##########

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int num_1 , num_2 , sum ;

//     printf("enter 2 integers : ");

//     fflush(stdin);fflush(stdout);

//     scanf("%d%d",&num_1,&num_2);

//     sum = num_1 + num_2;

//     printf("sum = %d",sum);
// }

//########## Example 4 ##########

// #include<stdio.h>
// #include<stdlib.h>


// int main()
// {
//     float num_1 , num_2 , product ;

//     printf("enter 2 numbers : ");

//     fflush(stdin);fflush(stdout);

//     scanf("%f %f",&num_1,&num_2);

//     product = num_1 * num_2 ;

//     printf("product = %.2f",product);

// }


//########## Example 5 ##########


// #include<stdio.h>
// #include<stdlib.h>


// int main()
// {
//     char _char ;

//     printf("enter a character : ");

//     fflush(stdin);fflush(stdout);

//     scanf("%c",&_char);

//     printf("ASCII value of G = %d",_char);
// }

//########## Example 6 ##########


// #include<stdio.h>
// #include<stdlib.h>


// int main()
// {
//     double a , b , temp = 0;

    // printf("Enter value of a = ");
    // fflush(stdin);fflush(stdout);
    // scanf("%lf",&a);


    // printf("Enter value of b = ");
    // fflush(stdin);fflush(stdout);
    // scanf("%lf",&b);

//     temp = a ; a = b ; b = temp ;

//     printf("After swapping , value of a = %.2lf",a);
//     printf("\nAfter swapping , value of b = %.2lf",b);

// }


#include <stdio.h>
#include <stdlib.h>

int main() {

    int x , y;

    printf("Enter value of x = ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);


    printf("Enter value of y = ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&y);
    
    x = x + y ;  y = x - y; x = x - y ;

    printf("\nAfter swapping: x = %d , y = %d\n", x, y);

    return 0;
}
