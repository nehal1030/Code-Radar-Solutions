int isPrime(int num){
    for(int i=2;i*i<=num;i++){
        if(num % i==0){
            printf("0")
            return 0;
        }
        if(num ==1 || num ==0){
            printf("1");
            return 0;
        }
        return 1;

    }
}