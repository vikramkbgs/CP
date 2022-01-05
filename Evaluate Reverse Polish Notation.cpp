class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int>st;
        int operand_1, operand_2;
        int result;
        
        
        for(int i = 0; i<tokens.size(); i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-"
              ||tokens[i] == "/" || tokens[i] == "*")
            {
                operand_1 = st.top(); st.pop();
                operand_2 = st.top(); st.pop();
                
                 //there is lot of difference between string and char
                
                string temp = tokens[i]; 
                
                switch(temp[0])
                {
                        
                    case '+':
                         result = operand_2 + operand_1;
                        st.push(result);
                        break;
                    
                    case '-':
                         result = operand_2 - operand_1;
                        st.push(result);
                        break;
                    
                    case '*':
                         result = operand_2 * operand_1;
                        st.push(result);
                        break;
                        
                    case '/':
                         result = operand_2 / operand_1;
                        st.push(result);
                        break;
                }
               
            }
            else
            {
                //lot of difference between string and char
                
                string temp = tokens[i];
                int sign = 0;
                int sum = 0;
                
                if(temp[0] == '-')
                {
                    sign = 1;
                    temp.erase(0, 1);
                }
                
                    if(temp.size() == 1)
                    {
                        sum = temp[0] - 48;
                    }
                    else if(temp.size() == 2)
                    {
                        sum = (temp[0] - 48)*10 + (temp[1] - 48);
                    }
                    else if(temp.size() == 3)
                    {
                        sum = (temp[0] - 48)*100 + (temp[0] - 48)*10 + (temp[1] - 48);
                    }
                
                if(sign > 0)
                {
                   sum = -1 * sum;
                }
                
                st.push(sum);
                
                
            }  
            
        }
        
        return st.top();
    }
};