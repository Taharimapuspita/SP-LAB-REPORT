#include <stdio.h>
int main(){
 int n,i,fact=1;

     printf("Enter a non-negetive integer:");
     scanf("%d",&n);

if (n<0){
     printf("factorial is not defined for negative numbers.\n");
 }
 else {
 for(int i=1;i<=n;i++){
     fact=fact*i;
}
     printf("Factorial of %d is %d\n",n,fact);
}
return 0;
}
