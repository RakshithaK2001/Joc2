#include<stdio.h>

int main(){
    int a[100],b[100];
    int i,j,count,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the number of elements\n");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       b[i]=-1;
    }
    for(i=0;i<n;i++){
       count=1;
       for(j=i+1;j<n;j++){
          if(a[i]==a[j]){
            count++;
            b[j]=0;
          }
        }
        if(b[i]!=0){
          b[i]=count;
        }
    }
    for(i=0;i<n;i++){
      if(b[i]!=0){
       printf("%d's occur %d number of times\n",a[i],b[i]);
      }
    }
}          
   
