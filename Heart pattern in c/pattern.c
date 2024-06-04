       Author:Khush Trivedi

#include<stdio.h>
int main () {
int n;
printf("Enter the number of rows you want:");
scanf("%d",&n);

printf("\n");
//This two loops are for the upper to triangles in heart
for(int i=3;i<=n;i++){                         
    for(int k=1;k<=n-i;k++){                    

        printf(" ");
    }
    for (int j=1;j<=i;j++){
        printf("* ");
    }

    
       for(int k=1;k<=n-i;k++){
        printf(" ");
    }    




    for(int k=1;k<=n-i;k++){
        printf(" ");
    } 
    for(int j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n");
}
 // This loop is for bottom reverse triangle
 for(int i=2;i<=2*n;i++){
    for(int k=0;k<i-1;k++){
        printf(" ");
    }
    for(int j=2*n;j>=i;j--){
        printf("* ");
    }
    printf("\n");
}
return 0;
}

/* output :
 Enter the number of rows you want:5

  * * *     * * *   
 * * * *   * * * *  
* * * * * * * * * * 
 * * * * * * * * *  
  * * * * * * * *   
   * * * * * * *    
    * * * * * *     
     * * * * *      
      * * * *       
       * * *        
        * *         
         * 
*/
