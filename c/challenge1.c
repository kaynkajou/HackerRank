#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Takes in height and queries. Prepares length and array */ 
    int height;
    int queries;
    std::cin >> height >> queries;
    std::cout << "height " << height << "queries " << queries << endl;
    int length;
    vector<int> arr[height];
    vector<int> vec;
    
    // takes in list using given length and values until array is filled
    for (int o = 0; o < height; o++){
        std::cin >> length;
        for (int i = 0; i < length; i++){
            vector<int> vec;
            vec.push_back(length);
            std::cin >> vec[i];
            std::cout << vec[i] << endl;
            arr[o] = vec;
    }}
    
    int arrNumber;
    int vecNumber;
    
    // takes in array and vector location to find specific number
    for (int z = 0; z < queries; z++){
        std::cin >> arrNumber >> vecNumber;
        std::cout << "arcNumber " << arrNumber << "vecNumber " << << arr[vecNumber][arrNumber] << endl;
    }
    
    return 0;
}