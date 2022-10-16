class Solution {
public:
    string longestPalindrome(string s) { 
        int n=s.length();
        int maxi=1;
        string res="";
        res+=s[0];
        for(int i=1; i<n ;i++){
            int low=i-1;
            int high=i;
            int count=0;
            while(low>=0 && high<n && s[low]==s[high]){                
                    low--;                
                    high++;
                    count+=2;                
            }
            if(count>maxi){
                maxi=count;
                res.clear();
                for(int j=(++low) ; j<high; j++){                    
                    res+=s[j];
                }
            }
            low=i-1;
            high=i+1;
            count=0;
            while(low>=0 && high<n && s[low]==s[high]){                
                    low--;                
                    high++;
                    count+=2;                
            }
            count++;
            if(count>maxi){
                maxi=count;
                res.clear();
                for(int j=(++low) ; j<high; j++){                    
                    res+=s[j];
                }
            }
        }
        return res;
    }
};