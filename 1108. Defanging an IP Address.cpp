class Solution {
public:
    string defangIPaddr(string add) 
    {
        string res ="";
        for(int i=0 ; i<add.length() ; i++)
        {
            if(add[i]=='.')
            {
                res +="[.]";
            }
            else
            {
                res +=add[i];
            }
        }
        return res;
        
    }
};
