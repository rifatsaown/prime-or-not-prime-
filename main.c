#include<stdio.h>
void main(){
    int n , r ;
    printf("Enter The Number : ");
    scanf("%d",&n);
    r=isprime(n);
    if(r==0){
        printf("\n%d is prime number\n",n);
    }
    else{
         printf("\n%d is not prime number\n",n);
    }
}

int isprime(int a){
    int s=0,i;
    for(i=2;i<a/2;i++){
        if(a%i==0){
            return 1;
        }
    }
    return 0;
}
