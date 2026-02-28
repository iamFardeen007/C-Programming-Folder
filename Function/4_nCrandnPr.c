#include<stdio.h>
int combination(int n,int r){
    int nfact=1,nrfact=1,rfact=1;
    for(int i=2;i<=n;i++){
        nfact=nfact*i;
    }
    for(int j=2;j<=r;j++){
        rfact=rfact*j;
    }
    for(int k=2;k<=n-r;k++){
        nrfact=nrfact*k;
    }
    int comb=(nfact)/((rfact)*(nrfact));
    printf("The combination of given number is:%d",comb);

    return comb;
}
int permutation(int n,int r){
    int nfact=1,nrfact=1;
    for(int i=2;i<=n;i++){
        nfact=nfact*i;
    }
    for(int k=2;k<=n-r;k++){
        nrfact=nrfact*k;
    }
    int perm=(nfact)/((nrfact));
    printf("The permmutation of given number is:%d",perm);

    return perm;
}
int main(){
    
int n,r;
printf("Enter n and r :");
scanf("%d %d",&n,&r);
if (r > n) {
printf("Invalid input: r cannot be greater than n\n");
    return 0;
}
combination(n,r);
printf("\n");
permutation(n,r);

return 0;

}