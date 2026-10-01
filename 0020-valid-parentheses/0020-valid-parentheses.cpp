class Solution {
public:
    bool isValid(string s) {
        char stack[10000];
        int top = -1;
        for(int i=0;s[i] != '\0';i++){
            char ch =s[i];

            if(ch=='('||ch == '{'||ch=='['){
                stack[++top]=ch;
            }
            else{
                if(top<0){
                    return false;
                }
                char topchar=stack[top--];
                if(topchar =='(' && ch !=')'||topchar =='['&& ch !=']'||topchar =='{'&& ch !='}'){
                return false;
                }
            }
          
                
        }
         return top== -1;
        
    }
};