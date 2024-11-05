class Solution {
private:
    bool checkEqual(int a[26], int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;

    }

public:
    bool checkInclusion(string s1, string s2) {
        int cont1[26]={0};
        for(int i=0; i<s1.length();i++){
            int index=s1[i]-'a';
            cont1[index]++;
        }

        int i=0;
        int windowsize=s1.length();
        int cont2[26]={0};

        while(i<windowsize && i<s2.length()){
             int index=s2[i]-'a';
              cont2[index]++;
              i++;
        }

        if(checkEqual(cont1,cont2)){
            return 1;
        }

        while(i<s2.length()){
            char newchar=s2[i];
            int index=newchar-'a';
            cont2[index]++;

            char oldchar=s2[i-windowsize];
            index=oldchar-'a';
            cont2[index]--;
            i++;
             if (checkEqual(cont1, cont2)) {
                return true;
            }
        }
        return false;
    }
     
};