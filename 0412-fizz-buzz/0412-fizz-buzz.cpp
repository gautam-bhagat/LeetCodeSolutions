class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> v; 
        
        for (int i = 0;i<n;i++){
            int num = (i+1);
            string s = "";
            if (num%3==0 && num%5==0){
                s = "FizzBuzz";
            }else if(num%3==0 ){
                s = "Fizz";
            }else if(num%5==0){
                s = "Buzz";
            }else{
                s = to_string(num);
            }
            
            v.push_back(s);
        }
        
        return v;
    }
};