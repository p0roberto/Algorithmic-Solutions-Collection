class Solution {
public:
    string interpret(string command) {
        string result = "";
        int tam = command.size();

        for(int i = 0; i < tam; i++){
            if(command[i] == 'G'){
                result += 'G';
            }
            if(command[i] == '(' && command[i+1] == ')'){
                result += 'o';
                i++;
            }
            if(command[i] == '(' && command.substr(i, 4) == "(al)"){
                result += "al";
                i += 3;
            }
        }

        return result;
    }
};
