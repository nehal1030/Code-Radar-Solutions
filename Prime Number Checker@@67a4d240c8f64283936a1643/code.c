int isPrime(int num){
    for(int i=2;i*i<num;i++){
        if(num % i==0){
            isPrime=1;
            return;
        }
        if(num ==0 || num ==1){
            return 0;
        }
        return 1;

    }
}