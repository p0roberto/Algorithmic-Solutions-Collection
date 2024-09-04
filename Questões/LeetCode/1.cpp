class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target){
        map<int, int> mymap;
        int i;
        vector<int> vet(2);

        for(i = 0; i < nums.size(); i++){

            if(mymap.find(target - nums[i]) != mymap.end()){
                vet[1] = i;
                vet[0] = mymap[target - nums[i]];
                return vet;
            }

            mymap[nums[i]] = i;
        }

        return {0,0};
    }
};