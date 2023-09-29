#include<stdio.h>
int main(){
    int a[30];
    int i,n,k;
    int flag=0;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("enter  of element to find\n");
    scanf("%d",&k);
for(i=0;i<n;i++){
    if(a[i]==k) {printf("%d is present at %d index",k,i);
    flag=1;
    break;}
}
if(flag==0) printf("not present");
return 0;
}