
class Solution {
public:

    int romanToInt(string s) {
            map<char,int> m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
     int num=0;
       for(int i=0;i<s.length();i++){
           if(s[i]=='I'){
               if(s[i+1]=='V'){
                   num+=4;
                   i++;
               }
               else if(s[i+1]=='X'){
                   num+=9;
                   i++;
               }
               else{
               num+=m[s[i]];
               }
           }
          else if(s[i]=='X'){
               if(s[i+1]=='L'){
                   num+=40;
                   i++;
               }
               else if(s[i+1]=='C'){
                   num+=90;
                   i++;
               }
              else{
               num+=m[s[i]];
               }
           }
           else if(s[i]=='C'){
               if(s[i+1]=='D'){
                   num+=400;
                   i++;
               }
               else if(s[i+1]=='M'){
                   num+=900;
                   i++;
               }
               else{
               num+=m[s[i]];
               }

           }
           else{
               num+=m[s[i]];
           }

       }
        return num;
    }
};
