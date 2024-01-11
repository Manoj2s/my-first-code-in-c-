// // FCP001
// #include<stdio.h>
// int main(){
//     int day, month, year;
//     scanf("%d%d%d",&day, &month, &year);
//     printf("%d\n%d\n%d",day,month,year);
//     return 0;
// }

// FCP002

// #include <stdio.h>
// int main()
// {
//     int number;
//     scanf("%d", &number);
//     printf("%d\n" ,number);
//     return 0;
// }

// Write a program to take two values from the user and swap them.

// #include<stdio.h>
// int main(){
//     int num1,num2;
//     scanf("%d%d",&num1,&num2);
//     num2=(num1+num2);
//     num1=(num2-num1);
//     num2=(num2-num1);
//     printf("%d\n%d\n",num1,num2);
//     return 0;
//}

// Write a program to take two numbers, A and B from the user. Your task is to find the largest number that is less than A and can be divided evenly by B. Can you figure out that number?
// #include<stdio.h>
// int main(){
//     int a,b,d;
//     scanf("%d%d",&a,&b);
//     d=a/b;
//     printf("%d",d*b);
//     return 0;
// }

// Write a program to take a positive number from the user and then display the last digit of that number.

// #include<stdio.h>
// int main(){
// int number,last;
// scanf("%d",&number);
// if(number>0){
// last=number%10;
// printf("%d",last);
// }else{
//     printf("%d",number);
// }
// return 0;
// }

// Write a program to convert a temperature from Celsius to Fahrenheit
// using the formula  C/5 = (F-32)/9

// #include<stdio.h>
// int main(){
//     int c ,f;
//     scanf("%d",&f);
//     c=(f-32)*5/9;
//     printf("%d\n",c);
// return 0;
// }

// Write a program to take two numbers A and B from the user and calculate-
// the quotient and remainder when number A is divided by number B.

// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int q,r;
//     q=a/b;
//     r=a%b;
//     printf("%d\n",q);
//     printf("%d",r);
//     return 0;
// }

// Write a program to take two numbers from the user and determine the greater of those two given numbers.

// #include<stdio.h>
// void main(){
//     int x,y;
//     scanf("%d%d",&x,&y);
//     if(x>y){
//         printf("%d",x);
//     }else{
//         printf("%d",y);
//     }
//     return 0;
// }

// Write a program to take a number from the user and print that number as Odd or Even.

// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     if(num%2==0){
//         printf("even");
//     }
//     else{
//         printf("odd");
//     }
//     return 0;
// }Write a program to take an integer as input and print the smallest positive integer that is a multiple of both 2 and n.

// Write a program to take a number from the user and output whether that number is negative, positive or zero.

// // #include<stdio.h>
// // int main(){
// //     int num;
// //     scanf("%d", &num);
// //     if(num==0){
// //         printf("zero");
// //     }else if(num>0){Write a program to take an integer as input and print the smallest positive integer that is a multiple of both 2 and n.

// //         printf("positive");
// //         }else{
// //             printf("negative");
// //         }
// //     return 0;
// }

// Write a program to take an integer as input and print the smallest positive integer that is a multiple of both 2 and n.

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("enter a number:");
//     scanf("%d", &num);
//     if (num % 2 == 0 && num % num == 0){
//         printf("smallest number:%d", num);
//     }
//     else {
//         printf("Not Divisable by both");
//     }
// return 0;
// }

// Write a program to take three numbers from the user and print the greater number of the three numbers. (Assume all three numbers are distinct)

// #include<stdio.h>
// int main(){
//     int num1,num2,num3;
//     printf("enter first number:\n");
//     scanf("%d",&num1);
//     printf("enter second number:\n");
//     scanf("%d",&num2);
//     printf("enter third number:");
//     scanf("%d",&num3);
//     if(num1>num2 && num1>num3){
//         printf("maximum number is:%d\n",num1);
//     }else if(num2>num3){
//         printf("maximum number is:%d\n", num2);
//     }else{
//         printf("maximum nuber is:%d\n",num3);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int num1,num2,num3;
//     printf("enter first number:\n");
//     scanf("%d",&num1);
//     printf("enter second number:\n");
//     scanf("%d",&num2);
//     printf("enter third number:");
//     scanf("%d",&num3);
//     if(num1>num2 && num1>num3){
//         printf("maximum number is:%d\n",num1);
//     }else if(num2>num3){
//         printf("maximum number is:%d\n", num2);
//     }else{
//         printf("maximum nuber is:%d\n",num3);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter first number:\n");
//     scanf("%d",&a);
//     printf("enter second number:");
//    scanf("%d",&b);
//    a=b;
//    b=a;
//    printf("%d",a);
//    printf("%d",b);
// }

// Write a program to take four numbers from the user and print the greater number of the four numbers. (assume all the numbers are distinct).

// #include<stdio.h>
// int main(){
//     int num1,num2,num3,num4;
//     printf("enter first number:\n");
//     scanf("%d",&num1);
//     printf("enter second number:\n");
//     scanf("%d",&num2);
//     printf("enter third number:\n");
//     scanf("%d",&num3);
//        printf("enter forth number:");
//        scanf("%d",&num4);
//     if(num1>num2 && num1>num3 && num1>num4){
//         printf("maximum number is:%d\n",num1);
//     }else if(num2>num3 && num2>num4){
//         printf("maximum number is:%d\n", num2);
//     }else if(num3>num4){
//         printf("maximum nuber is:%d\n",num3);
//     }else{
//         printf("maximum nuber is:%d",num4);
//     }
//     return 0;
// }

// Write a program to take a year from the user and output whether a given year is a leap year or not.

// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter the year:");
//     scanf("%d",&year);
//     if(year%4==0){
//         printf("year is a lear year%d\n",year);
//     }else{
//         printf("year is not leap year%d\n",year);
//     }
//     return 0;
// }

// Write a program to take the basic salary of an employee and calculate its Gross salary according to the following: (Gross salary is the sum of basic salary, HRA, and DRA)
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

// #include <stdio.h>
// int main()
// {
//     int salary, gross_salary;
//     printf("enter salary :   ");
//     scanf("%d", &salary);
//     if (salary <= 10000)
//     {
//         printf("gross salary:  %d\n", gross_salary = salary + (salary * 20 / 100) + (salary * 80 / 100));
//     }
//     else if (salary <= 20000)
//     {
//         printf("gross salary:  %d\n", gross_salary = salary + (salary * 25 / 100) + (salary * 90 / 100));
//     }
//     else
//     {
//         printf("gross salary:  %d\n", gross_salary = salary + (salary * 30 / 100) + (salary + 95 / 100));
//     }
//     return 0;
// }

// Write a program  to input electricity unit charges and calculate the total electricity bill according to the given condition:
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

// #include <stdio.h>
// int main()
// {
//     int unit, sum;
//     printf("Enter unit :   ");
//     scanf("%d", &unit);
//     if (unit <= 50)
//     {
//         sum = unit * 0.50;
//         printf("electric bill:  %d\n", (sum) + (sum * 20 / 100));
//     }
//     else if (unit <= 150)
//     {
//         sum = (50 * 0.50) + ((unit - 50) * 0.75);
//         printf("electric bill:  %d\n", (sum) + (sum * 20 / 100));
//     }
//     else if (unit <= 250)
//     {
//         sum = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
//         printf("electric bill:  %d\n", (sum) + (sum * 20 / 100));
//     }
//     else
//     {
//         sum = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 150) * 1.20);
//         printf("electric bill:  %d\n", (sum) + (sum * 20 / 100));
//     }
//     return 0;
// }

// Write a program to take 3 numbers from the user and output the second max of 3 numbers.
// first methode

// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter first number:");
//     scanf("%d", &a);
//     printf("enter second number:");
//     scanf("%d", &b);
//     printf("enter third number:");
//     scanf("%d", &c);
//     if (a==b && a==c){
//         printf("pleace enter dintinct number.");
//     }
//     else if(a==b && a<c){
//         printf("second max is:  %d",b);    
//     }
//     else if(a<b && a==c){
//         printf("second max is:  %d",a);
//     }
//     else if (a>b && a==c){
//         printf("second max is:  %d",b);
//     }
//     else if (a<b && b<c){
//         printf("second max is:  %d",b);
//     }
//     else if(a>b && a<c){
//         printf("second max is:  %d",a);
//     }
//     else if(a>b && b<c){
//           printf("second max is:  %d",c);
//     }
//     else if(a>b && b==c){
//          printf("second max is:  %d",c);
//     }
//     return 0;
// }

//second methode of second max between three numbers

// #include<stdio.h>
// int main(){
//     int x,y,z;
//     printf("Enter all three numbers" );
//     scanf("%d%d%d", &x,&y,&z);
//     if(x>=y && x>=z){
//         if(y>=z){
//             printf("second max is:  %d",y);
//         }else{
//             printf("second max is:  %d",z);
//         }
//     }else if(y>=x && y>=z){
//         if(x>=z){ 
//             printf("second max is:  %d",x);
//         }else{
//             printf("second max is:  %d",z);
//         }
//     }else{
//         if(y<=x){
//         printf("second max is:  %d",x);    
//         }else{
//             printf("second max is:  %d",y);
//         }
//     }    
//     return 0;
// }






// Write a program to take 4 numbers from the user and output the third max of these 4 numbers.

// #include <stdio.h>
// int main(){
//     int a, b, c, d,smin,min;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");  
//     scanf("%d", &b);
//     printf("Enter the third number: ");
//     scanf("%d", &c);
//     printf("Enter the forth number: "); 
//     scanf("%d", &d);
//     if(a>b && a>c && a>d){
//         if(b>c && b>d){
//             if(c>d){
//                printf ("second minimum value is :  %d",c);
//             }else{
//                 printf ("second minimum value is :  %d",d);  
//             }
//         }else if(c>b && c>d){
//             if(b>d){
//                 printf("second minimum value is :  %d", b);
//             }else{
//                printf("second minimum value is :  %d", d);
//             }
//         }else if(d>b && d>c){
//             if(c>b){
//                 printf("second minimum value is :  %d",c);
//             }else{
//                printf("second minimum value is :  %d", b);
//             }
//         }
//     }else if(a<b && a<c && a<d ){
//         if(b<c && b<d){
//             printf("second min value is %d",b);    
//         }else if(c<b && c<d){
//             printf("second min value is %d",c);   
//         }else{
//              printf("second min value is %d",d); 
//         }
//     }else if(a>b && b>c && c>d){
//         printf("second minimum value is :  %d",c);
//     }else if(b>a && a>c && c>d){
//         printf("second minimum value is :  %d",c);
//     }else if(c>a&& a>b && b>d){
//          printf("second min value is %d",b); 
//     }else if (d>a && a>b && b>c){
//          printf("second min value is %d",b); 
//     }else if(a==b && b==c && c==d){
//         printf("all numbers all equal please enter all dintinct number");
//     }else if(a==b && b>c && c>d){
//         printf("second minimum value is :  %d",c);
//     }else if (a==c && b==d){
//          printf("two numbers are mutually equal");
//     }else if(a>b  && b>c&& c==d){
//          printf("second minimum value is :  %d",c);
//     }else if (a>b && b<c && c<d){
//         printf("second min value is %d",b); 
//     }else if(a==b && b==c && c<d){
//         printf("there are three numbers equal.");
//     }else if (a==b && c==d){
//         printf("please enter dintinct numbers.");
//     }
// return 0;
// }



 	
// Write a program to take 5 numbers from the user and print the frequency of every number.

// #include<stdio.h>
// int main(){
//     int a,b,c,d,e;
//     printf("Enter the value :");
//     scanf("%d%d%d%d%d",&a, &b,&c,&d,&e);
//     int f1=1,f2=1,f3=1,f4=1,f5=1;
//     if(a==b){
//         f1++;
//         if(a==c){
//              f1++;
//         }else{
//            printf("frequency of c :%d\n",f3);
//         }if(a==d){
//             f1++;
//         }else{
//            printf("frequency of d :%d\n",f4); 
//         }if(a==e){
//             f1++;
//         }else{
//              printf("frequency of e :%d\n",f5); 
//         }
//          printf("frequency of a :%d\n",f1); 
//     }else if(a==c){
//         f1++;
//         if(a==d){
//             f1++;
//         }else{
//             printf("frequency of d: %d\n",f4);
//         }if(a==e){
//             f1++;
//         }else{
//             printf("frequency of e: %d\n",f5);
//         }
//         printf("frequency of a: %d\n",f1);
//         printf("frequency of b: %d\n",f2);
//         printf("frequency of c: %d\n",f3);
//         printf("frequency of d: %d\n",f4);
//         printf("frequency of e: %d\n",f5);
//     }else if(a==d){
//         f1++;
//         if(a==e){
//             f1++;
//         }else{
//            printf("frequency of e: %d\n",f5); 
//         }
//         printf("frequency of a: %d\n",f1);
//     }else if(a==e){
//         f1++;
//         printf("frequency of a: %d\n",f1);
//         printf("frequency of b: %d\n",f2);
//         printf("frequency of c: %d\n",f3);
//         printf("frequency of d: %d\n",f4);
//     }else if(b==c){
//         f2++;
//         if(b==d){
//             f2++;
//         }else{
//             printf("frequency of d: %d\n",f4);
//         }if(b==e){
//             f2++;
//         }else{
//             printf("frequency of e: %d\n",f5);
//         }
//         printf("frequency of b: %d\n",f2);
//         printf("frequency of a: %d\n",f1);
//     }else if(b==d){
//         f2++;
//         if(b==e){
//             f2++;
//         }else{
//             printf("frequency of e: %d\n",f5);
//         }
//         printf("frequency of b: %d\n",f2);
//         printf("frequency of c: %d\n",f3);
//         printf("frequency of a: %d\n",f1);
//     }else if(b==e){
//         f2++;
//         printf("frequency of b: %d\n",f2);
//         printf("frequency of a: %d\n",f1);
//         printf("frequency of c: %d\n",f3);
//         printf("frequency of d: %d\n",f4);
//     }else if(c==d){
//         f3++;
//         if(c==e){
//             f3++;
//         }else{
//             printf("frequency of e: %d\n",f5);
//         }
//         printf("frequency of a: %d\n",f1);
//         printf("frequency of b: %d\n",f2);
//         printf("frequency of c: %d\n",f3);
//     }else if(c==e){
//         f3++;
//         printf("frequency of c: %d\n",f3);
//         printf("frequency of d: %d\n",f4);
//         printf("frequency of b: %d\n",f2);
//         printf("frequency of a: %d\n",f1);
//     }
//     return 0;    
// }






































































































































