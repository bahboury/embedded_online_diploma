// Name : Bahy Mohy Mohamed

// ********** Homework 4 *********

// ########## Example 1 ##########
// Prime Numbers Between 2 intervals by function

// #include <stdio.h>

// int primenumbers(int, int);

// int main()
// {
//     int num1, num2;

//     printf("Enter 2 numbers (intervals): ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d %d", &num1, &num2);

//     printf("Prime numbers between %d and %d are: ", num1, num2);
//     primenumbers(num1, num2);
// }

// int primenumbers(int _num1, int _num2)
// {
//     int  j , arr[30], cnt = 0;

//     for (int i = _num1 + 1; i < _num2; i++)
//     {
        
//         for (j = 2; j < i; j++) {
//             if (i % j == 0)
//                 break;  
//         }

//         if (j == i) {
//             arr[cnt] = i ; ++cnt;
//         }
//     }

//     for (int i = 0; i < cnt; i++)
//         printf("%d ", arr[i]);
// }

// ########## Example 2 ##########
// calculate Factorial of a Number using Recursion

// #include<stdio.h>

// int Factorial(int);

// int main()  {

//     int num , fact ;

//     printf("Enter an +ve integer: ");
//     fflush(stdin);fflush(stdout);
//     scanf("%d",&num);

//     fact = Factorial(num);

//     printf("Factorial of %d = %d",num,fact);
// }

// int Factorial(int _num) {
//     if (_num != 1)
//         return _num*Factorial(_num-1) ;
// }

// ########## Example 3 ##########
// Reverse a Sentence Using Recursion

// #include <stdio.h>
// #include <string.h>

// void reverse_sentence(char[]);

// int main() {
//     char sent[100];

//     printf("Enter a sentence: ");
//     fflush(stdin);fflush(stdout);
//     gets(sent);

//     reverse_sentence(sent);
// }

// void reverse_sentence(char _sent[]) {
//     int len = strlen(_sent);

//     if (len > 0) {
//         reverse_sentence(_sent + 1);
//         printf("%c", _sent[0]);
//     }
// }

// ########## Example 4 ##########
// Calculate the Power of a number using Recursion

// #include<stdio.h>

// int poower(int _base , int _power);

// int main()  {
//     int base , power ;

//     printf("Enter base number: "); scanf("%d",&base);
//     printf("Enter power number(positive integer): "); scanf("%d",&power);
//     printf("%d ^ %d = %d",base,power,poower(base,power));

// }

// int poower(int _base , int _power){
//     if(_power != 1)
//         return (_base*poower(_base,_power-1)) ;
// }