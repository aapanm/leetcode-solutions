//with if else

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> result(n);
        
        for(int i=0; i<n; ++i){
            if((i+1)%3==0 && (i+1)%5==0) result[i] = "FizzBuzz";
            else if((i+1)%3==0) result[i] = "Fizz";
            else if((i+1)%5==0) result[i] = "Buzz";
            else result[i] = to_string(i+1);
        }
        
        return result;
    }
};

//without if else

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> result(n);
        
        for(int i=0; i<n; ++i){
            result[i] = to_string(i+1);
        }
        
        for(int i=2; i<n; i+=3){
            result[i] = "Fizz";
        }
        
        for(int i=4; i<n; i+=5){
            result[i] = "Buzz";
        }
        
        for(int i=14; i<n; i+=15){
            result[i] = "FizzBuzz";
        }
        
        
        return result;
    }
};