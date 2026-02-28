#include<stdio.h>
int main(){
    int n,i,pos,val;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("Enter position to update(1 to %d):",n);
    scanf("%d",&pos);
    printf("Enter new value:");
    scanf("%d",&val);
    if(pos>=1 && pos<=n){
        arr[pos-1]=val;
    }
    printf("update array:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}