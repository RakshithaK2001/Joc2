#include<stdio.h>

int main(){
   int a[100];
   int i,j,n;
   int flag=0;
   printf("Enter the number of elements of the array\n");
   scanf("%d",&n);
   printf("Enter the elements\n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(a[i]==a[j]){
           flag = 1;
          }
       }
    }
    if(flag==0){
       printf("array is distinctive\n");
    }
    else{
       printf("Array is not distinctive\n");
    }
}
         
