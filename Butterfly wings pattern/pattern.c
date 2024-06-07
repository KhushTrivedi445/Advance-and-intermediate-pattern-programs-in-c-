#include<stdio.h>
int main () {
    int n;
    printf("Enter size of wings :");
    scanf("%d",&n);
    // for upper two half triangles 
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        
          
        for(int k=0;k<=n-i;k++){
            printf(" ");
        }

                   

        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

       //for bottom two half triangles
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("*");
        }
        

         
        for(int k=0;k<=i-1;k++){
            printf(" ");
        }   


        for(int k=1;k<=i-1;k++){
            printf(" ");
        }
        for(int j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
output :
Enter size of wings :5
*         *
**       **
***     ***
****   ****
***** *****
****   ****
***     ***
**       **
*         *

*/