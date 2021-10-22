#include<stdio.h>

int main(){
   int a[100];
   int i,j,n;
   printf("Enter the number of balloons\n");
   scanf("%d",&n);
   printf("Enter the numbers on the balloons\n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
        if(a[i] == a[j]){
          a[i] = 99;
          
        }
     }
   }
   printf("The ballons in the box are:\n");
   for(i=0;i<n;i++){
     if(a[i] != 99){
       printf("%d\n",a[i]);
     }
   }
}
