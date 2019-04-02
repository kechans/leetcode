class Solution {
public:
    bool isValid(string s) {
         int len = s.length();
         stack<char> st;
         for (int i=0;i<len;i++) {
             if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                 st.push(s[i]);//如果是左括号就入栈
             }else{
                 if(st.empty()){
                     return false;
                 }
                 //如果是右括号，判断和栈顶元素是否匹配，不匹配就不合法，匹配就弹出栈顶元素
                 if((s[i]==')' && st.top()!='(') || (s[i] == '}' && st.top() != '{') || (s[i] == ']' && st.top() != '[')) {
                     return false;
                 }
                 st.pop();
             }
         }
        return st.empty();
    }
};
