class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i:s){
            if(i=='[' || i=='(' || i=='{'){
                st.push(i);
            }
            else if(i==')' || i=='}' || i==']'){
                if(i==')' && st.empty()==false && st.top()=='('){
                    st.pop();
                }
                else if(i=='}' && st.empty()==false && st.top()=='{'){
                    st.pop();
                }
                else if(i==']' && st.empty()==false && st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};