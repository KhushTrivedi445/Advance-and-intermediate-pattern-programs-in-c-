#include<stdio.h>

int main () {
int n,m;
printf("Enter the size  : ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    for(int j=i;j>=1;j--){
        printf(" *");
    }
    printf("\n");
}

    return 0;
}




/* 

Enter the size  : 4
 *      
 * *    
 * * *  
 * * * *
 
 */
