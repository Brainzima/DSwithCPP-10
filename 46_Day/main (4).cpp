#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> nums = {52,63,748,848,789,78,798,798,79,7987};
    // // int nums[10] = {52,63,748,848};
    
    // for(int num : nums){
    //     std::cout << num << std::endl;
    // }

    vector<string> names = {"Raj","Ramesh","Rajesh"};
    for(string name : names){
        std::cout << name << std::endl;
    }
    
    return 0;
}