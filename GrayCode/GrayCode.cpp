// Gray code solution by Nirmal Shah.

// An important leetcode problem which has been asked in many competitive exams as well as interview questions.

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<string> gray_string = generate(n);
        vector<int> answer;
        for(auto i:gray_string)
        {
            answer.push_back(stoi(i,0,2));
        }
        return answer;
    }
    
    vector<string> generate(int n)
    {
        if(n==1)
        {
            return {"0","1"};
        }
        vector<string> answer;
        vector<string> flag = generate(n-1);
        for(int i=0;i<flag.size();i++)
        {
            answer.push_back("0"+flag[i]);
        }
        for(int i=flag.size()-1;i>=0;i--)
        {
            answer.push_back("1"+flag[i]);
        }
        return answer;
    }
    
};
