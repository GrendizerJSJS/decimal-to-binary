#include <stdio.h>
#include <stdlib.h>
int * binaryconvert(int n,int k){
  
    int* array = (int*)malloc(k * sizeof(int));
    int i=k-1;

   while(i>=0){
    
        array[i]=n%2;
        i--;
        n=n/2;
    }
    return array;
   }
   

void main(){
    int n;
    int c;
    printf("Enter the number of bits\n");
    scanf("%d",&c);printf("enter a number that you want to convert to binary ");
    scanf("%d",&n);
    
int *k=binaryconvert(n,c);
for(int i=0;i<c;i++){
    printf("%d",k[i]);
}
}
