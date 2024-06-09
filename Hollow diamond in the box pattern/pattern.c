#include<stdio.h>
int main () {
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            if(j==n || j==i || i==1 || i==n){
              printf("*");
        } else {
            printf(" ");
        }
        }
        
    

       for(int k=1;k<=i-1;k++){
        printf(" ");
       }
     
        for(int k=0;k<=i-2;k++){
            printf(" ");
        }
        for(int j=n;j>=i;j--){
            if(j==n || j==i || i==1 || i==n){
            printf("*");
        } else {
            printf(" ");
        }
        }
        printf("\n");
       }
        

     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==1 || i==n){
            printf("*");
        } else {
            printf(" ");
        }
        }
        
          for(int k=n;k>=i+1;k--){
            printf(" ");
          }

                   
     
        for(int k=n;k>=i+1;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==1 || i==n){
            printf("*");
        } else {
            printf(" ");
        }
        }
        printf("\n");
     }

      return 0;
}



/*
output :
Enter the size : 5

Enter the size : 5
**********
*  *  *  *
* *    * *
**      **
*        *
*        *
**      **
* *    * *
*  *  *  *
**********

*/