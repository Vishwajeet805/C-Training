#include<stdio.h>
int checkPrime(int n){
    int flag;
    if (n <= 1) {
        int flag = 1; 
    } else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                int flag = 1; 
                break;
            }
        }
    }
    if ( flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n); 
    return 0;
}
int main(){
    int num;
    printf("Num=");
    scanf("%d",& num);
    checkPrime(num);
}