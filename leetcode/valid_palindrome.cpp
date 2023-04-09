class Solution {

private:
   bool valid(char ch){
       if((ch>='a' && ch<= 'z') || (ch>='A' && ch<= 'Z') || (ch>='0' && ch<= '9')){
           return 1;
       }
       
           return 0;
    
   }

   char toLowerCase(char ch){
       if((ch>='a' && ch<= 'z') ||(ch>='0' && ch<= '9')){
           return ch;
    
       }
       else {
           char temp = ch - 'A' +'a';
           return temp;
       }
   }

   bool checkPalindrome(string a){
          int s=0;
          int e=a.size()-1;
          for(int i=0; i<a.size(); i++){
              if((a[s]) != (a[e])){
                  return 0;
              }
          else {
              s++;
              e--;
          }
          }
          return 1;
   }
public:
    bool isPalindrome(string s) {

        //faltu character remove
        string temp ="";
        for(int j=0; j<s.size(); j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
            
        }
        //lowerCase convert
    for(int j=0; j<temp.size(); j++){
        temp[j]=toLowerCase(temp[j]);
    }
    return checkPalindrome(temp);
    }
    

};
