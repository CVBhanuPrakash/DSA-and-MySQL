class Solution {
public:
    int findSum(int n){
        int sum = 0;
        while(n>0){
            sum += n%10;
            n = n/10;
        }
        return sum;
    }
    int addDigits(int num) {
        int temp = findSum(num);
        if(temp >= 10) return addDigits(temp);
        return temp;
    }
};