// Name : Bahy Mohy Mohamed

// ********** Homework 2 *********


// ########## Example 1 ##########
// C Program to Check whether a num is Even || Odd


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int num ;

//     printf("Enter an int you want to check : ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&num);

//     num % 2 == 0 ? printf("%d is even.",num) : printf("%d is odd.",num) ; 

// }


// ########## Example 2 ##########
// C Program to Check Vowel or Consonant


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     char _char ;

//     printf("Enter an alphabet : ");
//     fflush(stdin);fflush(stdout);
//     scanf("%c",&_char);

//     switch (_char) 
//     {
//     case 'a': case 'A': case 'e': case 'E': case 'i':
//     case 'I': case 'o': case 'O': case 'u': case 'U':

//         printf("%c is a vowel",_char);break;
    
//     default:
//         printf("%c is a consonant",_char);
//     }
// }


// ########## Example 3 ##########
// C Program to Find the Largest Number Among 3 numbers


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     double num_1 , num_2 , num_3 ;

//     printf("Enter 3 numbers : ");
//     fflush(stdin);fflush(stdout);
//     scanf("%lf%lf%lf",&num_1,&num_2,&num_3);

//     if (num_1 > num_2) {

//         if (num_1 > num_3)
//             printf("the largest number = %.2lf",num_1);
//         else
//             printf("the largest number = %.2lf",num_3);
    
//     } else {
//         if (num_2 > num_3)
//             printf("the largest number = %.2lf",num_2);
//         else 
//             printf("the largest number = %.2lf",num_3);     

//     }
    
// }


// ########## Example 4 ##########
// C Program to Check Whether a num is +ve || -ve


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int num ;

//     printf("Enter a number : ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&num);
    
//     if (num == 0){ printf("you entered zero") ; return 0 ; }
    
//     num > 0 ? printf("%d is positive.",num) : printf("%d is negative.",num) ; 

// }


// ########## Example 5 ##########
// C Program to Check Whether a Character is an Alphabet || not


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     char _char ;

//     printf("Enter a character: ");
//     fflush(stdin);fflush(stdout);
//     scanf("%c",&_char);

//     ((_char >= 'a' && _char <= 'z') || (_char >= 'A' && _char <= 'Z')) ?
//     printf("%c is an alphabet",_char) : printf("%c isn't an alphabet",_char) ;
// }


// ########## Example 6 ##########
// C Program to Calculate Sum of Natural Numbers


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int num , Sum = 0;

//     printf("Enter an integer: ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&num);

//     for (int i = 0; i <= num; ++i)
//         Sum +=i;
    
//     printf("Sum = %d",Sum);
// }


// ########## Example 7 ##########
// C Program to Find Factorial of a Number


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int Factorial = 1 , num ;

//     printf("Enter an integer: ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&num); 

//     for (int i = 1 ; i <= num; ++i)
//         Factorial *= i ;

//     if (num == 0)
//         Factorial = 1 ;
    
//     num < 0 ? 
//     printf("Error!!! Factorial of negative num doesn't exist"): printf("Factorial = %d",Factorial) ; 
    
// }


// ########## Example 8 ##########
// C Program to Make a Simple Calculator Using switch...case 


#include<stdio.h>
#include<stdlib.h>

int main()
{
    double num_1 , num_2 , result ;
    char decision ;

    printf("Enter operator either {+ / - / * / div } : ");
    scanf("%c",&decision);

    printf("Enter two operands : ");
    scanf("%lf%lf",&num_1,&num_2);
    
    switch (decision){

    case '+':
        result = num_1 + num_2 ; break;
    case '-':
        result = num_1 - num_2 ; break;
    case '*':
        result = num_1 * num_2 ; break;
    case '%':
        result = num_1 / num_2 ; break;
    default:
        printf("invalid choice"); return 0 ; }
    
    printf("%.2lf %c %.2lf = %.2lf",num_1,decision,num_2,result);

}