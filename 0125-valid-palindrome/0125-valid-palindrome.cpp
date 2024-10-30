class Solution {
private:
    bool CheckValid(char ch){
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }

    char toLowerCase(char ch){
        if ((ch>='a' && ch <='z')||(ch>='0' && ch <='9')){
            return ch;
        }else{
            char smallChar =ch-'A'+'a';
            return smallChar;
        }
    }

    bool checkPalidrome(string a ){
        int start=0;
        int end=a.length()-1;

        while(start<end){
            if(a[start] != a[end]){
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
        for(int j=0; j<s.length();j++){
            if(CheckValid(s[j])){
                temp.push_back(s[j]);
            }
        }

        for(int i=0; i<temp.length();i++){
            temp[i]=toLowerCase(temp[i]);
        }

         return checkPalidrome(temp);
        
    }
};