class Solution {
public:
    vector<double> convertTemperature(double celsius) {
       vector<double>temp ; 
        double kelvin = celsius+ 273.15; 
        double fanheit = celsius*1.80 + 32 ; 
        temp.push_back(kelvin); 
        temp.push_back(fanheit); 
    return temp ; 
    }
};