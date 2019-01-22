//
// Created by Adeesh Ankaraju Gopalakrishnan on 2019-01-21.
//

int fib(int N) {
    int fibs[N+1];
    if(!N) { return 0; }
    else if (N==1) { return 1; }
    else {
        fibs[0] = 0;
        fibs [1] = 1;
    }
    for(int i=2;i<=N;++i){
        fibs[i] = fibs[i-1] + fibs[i-2];
    }
    return fibs[N];
}

int main(){

    fibs(10);

}