class Solution {
public:
    int operation(int x, int y, string z) {
        if (z == "-") {
            return (x - y);
        } else if (z == "+") {
            return (x + y);
        } else if (z == "*") {
            return (x * y);
        }
        return x / y;
    }
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" ||
                tokens[i] == "*") {
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();

                int ans = operation(val2, val1, tokens[i]);
                st.push(ans);
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        int res=st.top();
        return res;
    }
};