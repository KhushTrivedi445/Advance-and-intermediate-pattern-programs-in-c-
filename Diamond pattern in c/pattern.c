    Author: Khush Trivedi

#include<stdio.h>
int main () {
int n;
printf("Enter the number of rows you want :");
scanf("%d",&n);

for(int i=1;i<=n-1;i++){
    for(int k=1;k<=n-i;k++){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("* ");
    }
       printf("\n");    
}


for(int i=1;i<=n;i++){
    for(int k=2;k<=i;k++){
        printf(" ");
    }
    for(int j=n;j>=i;j--){
        printf("* ");
    }
    printf("\n");
}



return 0;
}

/*
output :
Enter the number of rows you want :7
      * 
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * * 
* * * * * * * 
 * * * * * * 
  * * * * * 
   * * * * 
    * * * 
     * * 
      * 
*/
