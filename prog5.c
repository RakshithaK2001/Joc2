#include<stdio.h>

int main(){
   int a[100];
   int i,j,n,k,s,l;
   printf("Enter the number of elements in the array\n");
   scanf("%d",&n);
   printf("Enter the elements of the array\n");
   for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
   }
   printf("Enter the sum:\n");
   scanf("%d",&k);
   for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
      for(l=j+1;l<n;l++){
        s=a[i] +a[j] + a[l];
        if(s==k){
          printf("The indices are:%d,%d and %d\n",i,j,l);
         }
      }
    }
  }  
    
}
