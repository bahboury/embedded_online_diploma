// Name : Bahy Mohy Mohamed

// ********** Homework 3 *********

// ########## Example 1 ##########
// c program to find sum of 2 matrix of order 2*2

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char _char1, _char2;
//     float matrix[2][2], num[2][2], sum[2][2];

//     printf("Enter 2 characters: ");
//     scanf(" %c %c", &_char1, &_char2);

//     printf("Enter the elements of the 1st matrix:\n");
//     for (int i = 0; i < 2; ++i)
//     {
//         for (int j = 0; j < 2; ++j)
//         {
//             printf("Enter %c%d%d: ", _char1, i + 1, j + 1);
//             scanf("%f", &num[i][j]);
//         }
//     }

//     printf("Enter the elements of the 2nd matrix:\n");
//     for (int i = 0; i < 2; ++i)
//     {
//         for (int j = 0; j < 2; ++j)
//         {
//             printf("Enter %c%d%d: ", _char2, i + 1, j + 1);
//             scanf("%f", &matrix[i][j]);
//         }
//     }

//     for (int i = 0; i < 2; ++i)
//     {
//         for (int j = 0; j < 2; ++j)
//             sum[i][j] = matrix[i][j] + num[i][j];
//     }

//     printf("Sum of Matrix:\n");
//     for (int i = 0; i < 2; ++i)
//     {
//         for (int j = 0; j < 2; ++j)
//             printf("%.1f\t", sum[i][j]);
//         printf("\n");
//     }
// }

// ########## Example 2 ##########
// c program to calculate Average Using Arrays

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int num ;
//     float result[6] , average , sum = 0;

//     printf("Enter the numbers of data : ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&num);

//     for (int i = 0 ; i < num ; ++i) {
//         printf("%d. Enter number : ",i+1);
//         fflush(stdin);fflush(stdout);
//         scanf("%f",&result[i]); sum +=result[i] ;
//     }

//     average = sum / num ;

//     printf("Average = %.2f",average);
// }

// ########## Example 3 ##########
// c program to find Transpose of a Matrix

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int rows , columns , matrix[3][3] , trans[3][3];

//     printf("Enter rows & columns of matrix : ");
//     fflush(stdin);fflush(stdout);
//     scanf(" %d %d",&rows,&columns);

//     printf("Enter elements of matrix :\n");

//     for (int i = 0 ; i < rows ; ++i)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             printf("Enter elements a%d%d: ",i+1,j+1);
//             fflush(stdin);fflush(stdout);
//             scanf("%d",&matrix[i][j]);
//         }
//     }

//     printf("Entered Matrix:\n");

//     for (int i = 0 ; i < rows ; ++i) {
//         for (int j = 0; j < columns; j++)
//             printf("%d\t",matrix[i][j]);
//         printf("\n");
//     }

//     for (int i = 0 ; i < columns ; ++i) {
//         for (int j = 0 ; j < rows ; j++)
//             trans[i][j] = matrix[j][i];
//     }

//     printf("Transpose of Matrix :\n");

//     for (int i = 0 ; i < columns ; ++i) {
//         for (int j = 0; j < rows ; j++)
//             printf("%d\t",trans[i][j]);
//         printf("\n");
//     }
// }

// ########## Example 4 ##########
// c program to insert an element in an Array

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int num , elements[20] , location , onplus ;

//     printf("Enter no of elements : ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&num);

//     for (int i = 0 ; i < num ; ++i)
//         scanf("%d",&elements[i]);

//     printf("Enter the element to be inserted : ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&onplus);
    
//     printf("Enter the location : ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&location);

//     for (int i = num ; i >= location ; --i)
//         elements[i] = elements[i-1];
    
//     num++ ; elements[location-1] = onplus ;

//     for (int i = 0 ; i < num ; ++i)
//         printf("%d  ",elements[i]);
// }

// ########## Example 5 ##########
// c program to search an element in an Array

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int arr[10], num, location = -1, search;
    
//     printf("Enter no. of elements: ");scanf("%d", &num);

//     for (int i = 0; i < num; ++i)
//         scanf("%d", &arr[i]);

//     printf("Enter the element to be searched: ");
//     scanf("%d", &search);

//     for (int i = 0; i < num; i++) {
//         if (arr[i] == search) {
//             location = i + 1;
//             break; }
//     }

//     if (location != -1)
//         printf("Number found at location = %d\n", location);
//     else
//         printf("Number not found in the array.\n");

//     return 0;
// }

// ########## Example 6 ##########
// c program to Find the Frequency of characters in a string

// #include <stdio.h>
// #include <stdlib.h>

// int main() 
// {
//     int cnt = 0 ;
//     char string[50] , find ;

//     printf("Enter a string : ");
//     fflush(stdin);fflush(stdout);
//     gets(string);

//     printf("Enter a character to find frequency: ");
//     fflush(stdin);fflush(stdout);
//     scanf("%c",&find);

//     for (int i = 0 ; string[i]!='\o' ; i++) {
//         if (find==string[i])
//             ++cnt;
//     }
//     printf("Frequency of %c = %d",find,cnt);
// }

// ########## Example 7 ##########
// c program to Find the length of a string without strlen()


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     char str[50];
//     int i ;

//     printf("Enter a string : ");
//     fflush(stdin);fflush(stdout);
//     gets(str);

//     for ( i = 0 ; str[i] != '\0'; i++);
    
//     printf("Length of string : %d",i);
    
// }

// ########## Example 8 ##########
// c program to reverse string without Using Library function

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main()
// {
//     char str[50] , rvrs[50] ;
//     int cnt , i ;
    
//     printf("Enter a string : ");
//     fflush(stdin);fflush(stdout);
//     gets(str);

//     for (i = 0 , cnt = strlen(str) - 1 ; i != strlen(str) ; ++i , --cnt)
//         rvrs[i] = str[cnt] ;
    
//     printf("Reverse string is : %s",rvrs);
// }