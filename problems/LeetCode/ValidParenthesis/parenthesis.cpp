#include<bits/stdc++.h>
using namespace std;
// Note:This program is not completed yet.
class Solution{
public:
	bool isValid(string s){
		stack<char>st;
		int i=0;
		while(s[i] != '\0'){
			if(s[i] == '{' || s[i] == '[' || s[i] == '('){
				st.push(s[i]);
			}else if(s[i] == '}' && st.top() =='{' || s[i] == ']' && st.top() =='['|| s[i] == ')' && st.top() =='('){
				if(st.empty()) return false;
					st.pop();
			}
			i++;
		} // end of while loop
		return st.empty() ? true:false; // If still something in stack then return true else return false.
	}
};
int main(){
	Solution s;
	string str = "{{())()}}[]";
	cout<<s.isValid(str)<<endl;

}
// Explanation of Valid Parenthesis

/*

1.Take a Stack
2.Push all the opening parenthesis ( or { or [
3.Then check all the closing parenthesis against opening one.
4.If No parenthesis left and the stack is empty then the parenthesis are valid.
5.If the stack is empty but the Parenthesis are leftover then the parenthesis is not valid or balance.

*/