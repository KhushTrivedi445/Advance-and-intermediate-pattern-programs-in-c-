#include<stdio.h>
int main () {
int n;
printf("Enter the value of n :");
scanf("%d",&n);
//This loop is for upper triangle
for(int i=1 ;i<=n;i++){
        for(int k=1; k<=n-i ; k++){                       //This loop is for spacing
            printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("* ");
            }
            printf("\n");
    }

     //This loop is for the square
  for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
   



   return 0;
}



/* output :

Enter the value of n :5

    *     
   * *    
  * * *   
 * * * *  
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

*/
