#include<stdio.h>
int main(){
    int size,i,target;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d Elements:",size);
    for(i=0;i<size;i++){
       scanf("%d",&array[i]);
        }
        printf("Enter the target value:");
        scanf("%d",&target);

        for (i=0;i<size;i++){
        if (array[i]==target){
        printf("%d found at location %d",target,i+1);
    break;
           }
        }
        if (i==size){
        printf("not found");
        }
        return 0;


}
