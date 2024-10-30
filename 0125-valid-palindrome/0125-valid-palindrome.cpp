class Solution {
private:
    bool isValid(char ch){
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }

    char toLower(char ch){
        if((ch>='a' && ch<='z')||(ch>='0' && ch<='9') ){
            return ch;
        }else{
            int temp= ch-'A'+'a';
            return temp;
        }
    }

    bool checkPalidrome(string s){
        int start =0;
        int end= s.length()-1;

        while(start <end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string temp="";
        for (int i=0; i<s.size();i++){
            if(isValid(s[i])){
                temp.push_back(s[i]);
            }
        }

        for(int i=0;i<temp.size();i++){
            temp[i]=toLower(temp[i]);
        }

        return checkPalidrome(temp);

        
        
    }
};