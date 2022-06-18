class Solution {
public:
    int fib(int n) {
        int fib_number = 0;
        // Base Condition
        if(n == 0 || n ==1){
           return n;
        }
        //recursive way --------------------|
        // fib_number=fib(n-1)+fib(n-2);    |
        // return fib_number;               |
        //----------------------------------|
        
        // iterative way using two pointers
        int firstPtr = 0,secondPtr = 1,i=2;
        while(i<=n){
            fib_number = firstPtr + secondPtr;
            firstPtr = secondPtr;
            secondPtr = fib_number;
            i++;
        }
        return fib_number;
    }
};