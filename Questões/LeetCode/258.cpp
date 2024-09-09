#include <iostream>
#include <string>

class Solution {
public:
    int addDigits(int num){
        string result = to_string(num);
        int soma = 0;

        for(char c : result){
            soma += c - '0';
        }

        while(soma >= 10){
            string result = to_string(soma);
            int soma2 = 0;
            for(char c : result){
                soma2 += c - '0';
            }
            soma = soma2;
        }

        return soma;
    }
};
