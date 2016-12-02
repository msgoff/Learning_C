#include <stdio.h>
int counter=1;
int fibonacci(int x);
int sum=0;
int main(void){
        
        while (fibonacci(counter)<4000000){
        counter +=1;
        
        if (fibonacci(counter) %2==0){
            sum +=fibonacci(counter);}
            }
        
        printf("%d",sum);
}

int fibonacci(int x){
    if (x ==1 || x ==2){return 1;}else{return fibonacci(x-1)+fibonacci(x-2);}
}

