class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> temp(2);
        temp[0] = celsius + 273.15;
        temp[1] = (celsius * 1.8) + 32;
        return temp;
    }
};