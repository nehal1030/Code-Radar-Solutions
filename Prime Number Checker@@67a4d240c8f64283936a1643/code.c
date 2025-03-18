int isPrime(int num){
    for(int i=1;i*i<num;i++){
        if(num % i==0){
            isPrime=1;
        }
        return;

    }
}