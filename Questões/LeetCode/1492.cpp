class Solution {
public:
   
    int kthFactor(int n, int k){
        int divisores = 1, i; 
        vector<int> divisores1;
        vector<int> divisores2;

        for(i = 1; i * i <= n; i++){
            if(n % i == 0){
                divisores1.push_back(i);
                if((n/i) != i){
                    divisores2.push_back(n / i);
                }
            }
        }
        if(k > divisores1.size() + divisores2.size()) return -1;
        if(k <= divisores1.size()) return divisores1[k-1];
        else return divisores2[divisores2.size() - (k - divisores1.size())];
    }   
};
