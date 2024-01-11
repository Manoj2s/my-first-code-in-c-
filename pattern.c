/*Write a program to take value N from the user and print the following pattern based on the user input.
1) N=5
* 
* * 
* * * 
* * * * 
* * * * * 

2) N=5
           * 
        * * 
     * * * 
  * * * * 
* * * * * 

3) N=5
* * * * *  
* * * *  
* * *  
* *  
* 

4) N=4
1
2 3
4 5 6
7 5 9 10

5) N=4
0 
2 4 
4 8 8 
8 16 16 16

6) N=5
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
 */


// Write a program to take value N from the user and print the following pattern based on the user input.
// 1) N=5
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

// #include<stdio.h>
// int main (){
//     int n;
// printf("Enter the size of row:");      
//     scanf("%d",&n);                      
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){           
//             printf("*");
//         }printf("\n");
//     }
//     return 0;
// }


// 2) N=5
// * * * * *  
// * * * *  
// * * *  
// * *  
// * 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of rows:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             printf("* ");
//         }printf("\n");
//     }   
    
//     return 0;
// }

//2nd way for above problem. 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of rows:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             printf("* ");
//         }printf("\n");
//     }   
    
//     return 0;
// }

//3) N=5
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 

// #include<stdio.h>
// int main(){
//     int n;
//     printf ("Enter the size of row:");
//     scanf("%d",&n);
//     int j,i,k;
//     for(i=1;i<=n;i++){
//         for(j=n-1;j>=i;j--){
//             printf("_");
//         }for(k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 4) N=5
// * * * * *
//   * * * *
//     * * *
//       * * 
//         *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of rows:");
//     scanf("%d",&n);
//     int j,k, i;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("  ");
//         }for(k=n;k>=i;k--){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 5) N=5
// 1
// 12
// 123
// 1234
// 12345
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }printf("\n");
//     }
//     return 0;
// }


// 6) N=5
// 1
// 22
// 333
// 4444
// 55555
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of rows :");
//     scanf("%d",&n);
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",i);
//         }printf("\n");
//     } 
//     return 0;
// }


// 7) N=4
// 1
// 2 3
// 4 5 6
// 7 5 9 10
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of row:");
//     scanf("%d",&n);
//     int k=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",k);
//             k++;
//         }printf("\n");
//     }
//     return 0;
// }


// 8) N=5
// 1
// 1 3
// 1 3 5
// 1 3 5 7 
// 1 3 5 7 9
// #include<stdio.h>
// int main(){
//    int n;
//    printf("Enter the size of rows:");
//    scanf("%d",&n);
//    for(int i=1;n>=i;i++){
//       int s=1;
//       for(int j=1;j<=i;j++){
//          printf("%d ",s);
//          s+=2;
//       }printf("\n");
//    }
//    return 0;
// }


// 9) N=4
// A B C D
// A B C D
// A B C D
// A B C D
// #include<stdio.h>
// int main(){
//    int n;
//    printf("Enter the value of rows:");
//    scanf("%d",&n);
//    for(int i=1;i<=5;i++){
//       int a=1;
//       for(int j=1;j<=n;j++){
//          int d=a+64;
//          char s=(char)d;
//          printf("%c ",s);
//          a++;
//       }printf("\n");
//    }
//    return 0;
// }


// 10) N=5
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
// #include<stdio.h>
// int main(){
//    int n;
//    printf("Enter the size of row:");
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//       int a=1;
//       for(int j=1;j<=i;j++){
//          if(i%2!=0){
//             printf("%d ",j);
//          }else{
//             char d=a+64;
//             char s=(char)d;
//             printf("%c ",s);
//             a++;
//          }
//       }printf("\n");
//    }
   
//    return 0;

// }


// 11) N=5
//     *
//     *
// * * * * "*
//     *
//     *
// #include<stdio.h>
// int main(){
//    int n;
//    printf("Enter number of rows:");
//    scanf("%d",&n);
//    if(n%2==1){
//       for(int i=1;i<=n;i++){
//          for(int j=1;j<=n;j++){
//             if(j==n/2+1 || i==n/2+1){
//             printf("* "); 
//          } else{
//             printf("  ");
//          }       
//          }printf("\n");
         
//       }
//    }else {
//       printf("Please enter an odd number.\n");
//    }
//    return 0;
// }


// 12) N=4
// A
// A B
// A B C
// A B C D
// #include <stdio.h>
// int main(void) {
// 	printf("Enter the size of rows:");
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=i;j++){
//             char d=a+64;
//             char s=(char)d;
//             printf("%c ",s);
//             a++;
//         }printf("\n");
//     }
//     return 0;
// }


// 13) N=5
// *   *
//  * *
//   *
//  * *
// *   *
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of rows:");
//     scanf("%d",&n);
//     if(n%2!=0){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++){ 
//                 if(i==j || i+j==n+1){
//                     printf("*");
//                 }else{
//                     printf(" ");
//                 }
//             }printf("\n");
//         }
//     }else {
//         printf("Pattern cannot be formed\nPlease Enter an odd number.\n");
//     }
//     return 0;
// }


// 14) N=5
// 1
// 3 5
// 7 9 11
// 13 15 17 19
// 21 23 25 27 29
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of line:");
//     scanf("%d",&n);
//     int m=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",m);
//             m+=2;
//         }printf("\n");
//     }
//     return 0;
// }


// 15) N=5
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of rows:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(j%2!=0){
//                 printf("1");
//             }else{
//                 printf("0");
//             }
//         }printf("\n");
//     }
//     return 0;
// }






// 8) N=4
// 0 
// 2 4 
// 4 8 8 
// 8 16 16 16
// #include<stdio.h>
// int main(){

//    return 0;
// }

// 9) N=5
// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// #include<stdio.h>
// int main(){
//    int n;
//    printf("Enter the size of rows:");
//    scanf("%d",&n);
//    int k=1;
//    for(int i=1;i<=n;i++){
      
//       for(int j=i;j<=i;j++){   

//          printf("%d ",k*k );
//          k=k*10+1;
                 
//       }printf("\n");   

//    }
//    return 0;
// }









































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































   





























































































































































































































































