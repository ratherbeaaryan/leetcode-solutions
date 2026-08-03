// Last updated: 8/4/2026, 12:54:41 AM
class Solution {
public:
bool isvowel(char t){
     if(t=='A'||t=='E'||t=='I'||t=='O'||t=='U'||t=='a'||t=='e'||t=='i'||t=='o'||t=='u'){
            return true;
        }
        return false;
}
    bool doesAliceWin(string s) {
        for(char &ch:s){
            if(isvowel(ch)){
                return true;
            }
        }
        return false;
        
        


        
        
    }
};