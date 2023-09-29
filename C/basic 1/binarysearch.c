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
    int l=0,u=n-1,mid;
    mid=(l+u)/2;
    for(i=0;i<n;i++){
while(l<u){
    if(mid==k) printf("%d is present at %d index",k,i);
    else if(k<a[mid]) {
        u=mid-1;
    }
    else l=mid+1;
    
}
if(l>u) printf("not present");}
return 0;
}