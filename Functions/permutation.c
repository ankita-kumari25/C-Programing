#include<stdio.h>
int main(){
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    int r;
    printf("enter a number r:");
    scanf("%d",&r);
    int nfact=1;//n!
    int rfact=1;//r!
    int nrfact=1;//n-r !
    for(int i=2; i<=n; i++){
        nfact=nfact*i;
    }
    for(int i=2; i<=r; i++){
        rfact=rfact*i;
    }
    for(int i=2; i<=n-r; i++){
        nrfact=nrfact*i;
    }
    int npr=nfact/(nrfact);
    printf("%d",npr);
    return 0;
}