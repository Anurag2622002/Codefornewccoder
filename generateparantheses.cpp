/*

22. Generate Parentheses
Medium
15.4K
588
Companies
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
*/

class Solution {
public:
    vector<string>result;
    
    void helper(int open,int close,int n,string current)
    {
        if(current.length()==n*2)
        {
            result.push_back(current);
            return;
        }
        if(open<n)  helper(open+1,close,n,current+"(");
        if(close<open)  helper(open,close+1,n,current+")");
    }
    vector<string> generateParenthesis(int n) {
        helper(0,0,n,"");
        return result;
    }
};
// Intuition: Since we are asked to calculate all the possible permutations of brackets , hence we have to use backtracking

// Concept: In every backtracking problem , there are two things to keep in mind , which we will explore here as well :

// Base Case: Every problem of backtracking has some base case which tells us at which point we have to stop with the recursion process. In our case, when the length of our string has reached the maximum length(n*2), we stop with the recursion for that case and that is our base case.

// Conditions: On observing carefully we find that there are two conditions present:

// For adding (: If number of opening brackets(open) is less than the the given length(n) i.e.
// if max<n, then we can add (,else not.
// For adding ): If number of close brackets(close) is less than the opening brackets(open), i.e.
// if open<close, we can add ), else not
// And thats it!!! Keeping these two things in mind here is the code:
