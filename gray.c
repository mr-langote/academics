#include<stdio.h>
int main(){
    int a[3],i,j,b[4];
    printf("enter a binary no:");
    for (i=0;i<=3;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered binary no. is \n");
     for (i=0;i<=3;i++){
        printf("%d",a[i]);
    }
    b[0]=a[0];
    for (i=0;i<=3;i++){
      j=i+1;
      if (a[i]==a[j]){
          b[j]=0;
          
      }
      else {
          b[j]=1;
      }
    }
        printf("\nAfter conversion \n");
     for (i=0;i<=3;i++){
        printf("  %d",b[i]);
    }
      
    }
    
