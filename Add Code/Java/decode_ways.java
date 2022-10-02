import java.util.*;
//Problem Name-Decode_ways
//Difficulty-Medium
//Problem number-91
//Link-https://leetcode.com/problems/decode-ways/
//code
public class decode_ways {
    public int memo(String s,int ind,int[] dp){
        if(ind>=s.length()){
            return 1;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int first=Integer.parseInt(s.substring(ind,ind+1));
        if(first==0){
            return 0;
        }
        int second=-1;
        if(ind+2<=s.length())
        second=Integer.parseInt(s.substring(ind,ind+2));
        int count=0;
        if(first>=1&&first<=9){
            count=memo(s,ind+1,dp);
        }
        if(second>=1&&second<=26){
            count+=memo(s,ind+2,dp);
        }
        return dp[ind]=count;
    }
    public int numDecodings(String s) {
        int dp[]=new int[s.length()];
        Arrays.fill(dp,-1);
        return memo(s,0,dp);
    }
    
}
