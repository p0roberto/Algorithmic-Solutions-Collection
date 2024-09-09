#include <iostream>
#include <vector>
#include <numeric>

class Solution {
public:
  
    vector<string> simplifiedFractions(int n){
        vector<string> frac;

        for(int i = 2; i <= n; i++){
            for(int j = 1; j < i; j++){
                if(gcd(j, i) == 1){
                    frac.push_back(to_string(j) + "/" + to_string(i));
                }
            }
        }
        return frac;
    }
};