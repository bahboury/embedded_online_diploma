// Name : Bahy Mohy Mohamed

// ********** Homework 1 *********


// ########## Example 1 ##########
// Write C Program to Print a Sentence


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     printf("C Programming");
// }


// ########## Example 2 ##########
// Write C Program to Print a Integer Entered by a User


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


// ########## Example 3 ##########
// Write C Program to Add Two Integers


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


// ########## Example 4 ##########
// Write C Program to Multiply two Floating Point Numbers


// #include<stdio.h>
// #include<stdlib.h>


// int main()
// {
//     float num_1 , num_2 , product ;

//     printf("enter 2 numbers : ");
//     fflush(stdin);fflush(stdout);
//     scanf("%f %f", &num_1 , &num_2 );

//     product = num_1 * num_2 ;

//     printf("product = %.2f",product);

// }


// ########## Example 5 ##########
// Write C Program to Find ASCII Value of a Character

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


// ########## Example 6 ##########
// Write Source Code to Swap Two Numbers


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


// ########## Example 7 ##########
// Write Source Code to Swap Two Numbers without temp variable.


// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int x , y;

//     printf("Enter value of x = ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&x);

//     printf("Enter value of y = ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&y);
    
//     x += y ;  y = x - y ; x -= y ;

//     printf("\nAfter swapping: x = %d , y = %d\n", x , y);
// }