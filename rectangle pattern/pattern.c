


#include<stdio.h>

int main () {
    int n,m;
    printf("Enter the rows of rectangle : ");
    scanf("%d",&n);
    printf("Enter the number of columns :");
    scanf("%d",&m);
    This loop for roiws and columns
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("* ");
        } 
        printf("\n");
    }
    return 0;
}

/*
output :
Enter the rows of rectangle : 5
Enter the number of columns :10
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 

*/
