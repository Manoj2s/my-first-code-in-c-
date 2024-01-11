// write a program to Take a number N from the user as input & print natural number up to N.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d ",i);
//     }
//     return 0;
// }


//  Take a number N from the user as input, and print odd numbers up to N.

// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the value of x :  ");
//     scanf("%d",&x);
//     for(int j=1;j<=x;j+=2){
//         printf("%d ",j);
//     }
//     return 0;
// }

// second method

// #include<stdio.h>
// int  main (){
//     int num, i=1;
//     printf("Enter the a value : ");
//     scanf("%d",&num);
//     while(num>=i){
//         if(i%2!=0)
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }




// FCP025    Write a program to print the sum of odd numbers up to N.
// #include<stdio.h>
// int main(){
//     int num,sum=0;
//     printf("enter the value : ");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         if(i%2!=0){
//        // printf("%d\n",sum+=i);
//             sum+=i;
//         }
//         }    printf("%d\n",sum);
// }

//second method  

// #include<stdio.h>
// int main(){
//     int y, sum=0;
//     printf("Enter the number of y : ");
//     scanf("%d",&y);
//     for (int j=1;j<=y;j+=2){
//      //   printf("%d \n",sum+=j);
//      sum+=j;
//     }
//     printf("%d   \n",sum);
//     return 0;
// }


//FCP024   Take a number N from the user as input, and print even numbers up to N.
// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     for(int i=2;i<=num;i+=2){
//         printf("%d ",i);
//     }
//     return 0;
// }

// second method

//  #include<stdio.h>
// int  main (){
//     int num, i=1;
//     printf("Enter the a value : ");
//     scanf("%d",&num);
//     while(num>=i){
//         if(i%2==0)
//         printf("%d ",i);
//         i++;
//     }
//     return 0;
// }


 //Write a program to print the sum of even numbers up to N.

//  #include<stdio.h>
//  int main(){
//     int n,sum=0;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     int i;
//     for(i=2;i<=n;i+=2){
//     sum+=i;
//    // printf("%d ",sum);
//     }
//     printf("%d\n",sum);
//     return 0;
//  }

// 2nd way for the above problem

// #include<stdio.h>
// int main(){
//     int m;
//     printf("Enter the the number : ");
//     scanf("%d",&m);
//     int j=1,sum;
//     while(j<=m){
//         if(j%2==0){
//         sum+=j;
//         j++;
//         }else{
//             j++;
//         }
//     }printf("%d",sum);
//     return 0;
// }


// FCP026   Write a program to take two integers M, and N and print the sum of numbers in the range M to N.

// #include <stdio.h>
// int main(){
//     int x, y, sum=0;
//     printf("Enter the value of x :");
//      printf("Enter the value of y :");
//      scanf("%d %d",&x,&y);

//      for(;x<=y;x++){
//         sum=sum+x;
//      }printf("%d \n",sum);
//     return 0;
// }

//2nd way to solve the above problem.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the initial value a : ");
//     printf("Enter the last value b : ");
//     scanf("%d %d",&a,&b);
//     int sum=0;
//     while(a<=b){
//         sum+=a;
//         a++;
//     }printf("%d", sum);
// }



//write a program to find the sum of the first n natural numbers, where n is any given integer.

// #include<stdio.h>
// int  main (){
//     int n,sum;
//     printf("Enter the value of n :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }printf("%d",sum);
//     return 0;
// }


// //write a program to find the sum of the first 15 even natural numbers.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number :");
//     scanf("%d",&a);
//     int sum=0;
//     for(int i=2;i<=a;i+=2){
//         sum+=i;
//     }
//     printf("%d",sum);
//     return 0;
// }

// 2nd way to solve the above question.?

// #include<stdio.h>
// int main(){
//     int i,sum,count;
//     scanf("%d",&i);
//     for(;i>0;i++){
//         if(i%2==0){
//             sum+=i;
//             count+=1;
//         }
//         if(count==15){
//             break;
//         }
//     }
//     printf("%d\n%d\n",sum,count);
//     return 0;
// }


//Construct a flowchart to show how consecutive even numbers starting from 2 are summed up until the sum just exceeds 1000 and then show the sum and the number of even numbers added.


// #include<stdio.h>
// int main(){
//     int total_sum;
//     printf("Enter the total sum: ");
//     scanf("%d",&total_sum);
//     int sum,j=2,c;
//     while(sum<=total_sum){
//         if(j%2==0){
//             sum+=j;
//             printf("%d ",j);
//             c++;
//             j++;  
//         }else{
//             j++;
//         }
        
//     }printf("%d\n",sum);
//     printf("%d\n",c);
//     return 0;
// }

// 2nd way to solve the above question.?

// #include<stdio.h>
// int main(){
//     int n,sum,count;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             sum+=i;
//           count+=1;  
//         }
//         if(sum>1000){
//             break;
//         }
//     }
//     printf("%d\n%d\n",sum,count);
//     return 0;
// }


//write a program to print the numbers below 100 that are divisible by 7.

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(n=7;n<=100;n+=7){
//         printf("%d ",n);
//     }
//     return 0;
// }


//Construct a program to show how to find the product of n natural numbers.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     for(int j=1, i=1;i<=n;i++){
//         printf("%d ",j*i);
//     }
//     return 0;
// }


// construct a program to show how to find all even natural numbers that are divisible by 7 in a given range. (Input lower and upper limit of the range from the user)

// #include<stdio.h>
// int main(){
//     int x,y;
//     printf("value of x:\n ");
//     printf("value of y:");
//     scanf("%d%d",&x,&y);
//     for(x=1;x<=y;x++){
//         if(x%2==0){
//             if(x%7==0){
//                 printf("%d ",x);
//             }
//         }
//     }
//     return 0;
// }



//Construct a program to find the sum of the squares of the first 9 natural numbers that are divisible by 3.

// #include<stdio.h>
// int main(){
//     int num,sum=0;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         sum=i*i;
//         if(i*i%3==0){
//             printf("%d\n",sum);
//         }
//     }
//     return 0;
// }


// write a program to show how to obtain the HCF and LCM of two numbers. (input two numbers from the user)

// #include<stdio.h>
// int main(){
//     int a,b,min,hcf,lcm;
//     printf("Enter the value of a and b: ");
//     scanf("%d%d",&a,&b);
//     if(a>b){
//         min=b;
//     }else{
//         min=a;
//     }for(int i=1;i<=min;i++){
//         if(a%i==0){
//             if(b%i==0){
//                 hcf=i;
//                 printf("HCF of both number :%d\n",hcf);
//             }
//         }
//     }lcm=(a*b)/hcf;
//     printf("LCM of both number%d\n",lcm);
//     return 0;
// }


//  write a program to print the table of "n" where n is an integer which user will inout?

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d ",n*i);
//     }
//     return 0;
// }


// write a program to print this AP - 4,7,10,13,....,upto n terms.(use the formula of a of nth term=a+(n-1)d.)?

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n+1;i+=3){
//         printf("%d ",i);
//     }
//     return 0;
// } 


// 2nd way to solve the above question.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     int x=4;
//     for(int i=1;i<=n;i++){
//         printf("%d ",x);
//         x+=3;
//     }
//     return 0;
// } 



/* 4, 12,36 108......a of nth term a*r**(n-1)*/

// #include<stdio.h>  //1,2,4,8,16,32,.......
// int main(){
//     int a=1,m;
//     scanf("%d",&m);
//     for(int i=1;i<=m;i++){
//         printf("%d ",a);
//         a=a*2;
//     }
// return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     int count;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     } if(count==2){
//             printf("given number is a prime number %d\n",n);
//         }else{
//             printf("given number is not a prinme number");
//         }
//     return 0;
// }




























































































































































































































































































































































































































































































































































































