#include <iostream>
#include "src/lib/solution.h"

using namespace std;

// print the vector
void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

int main()
{
    Solution solution;

    // cout << result2 << endl;

    vector<int> input0 = {5,9,3,1,7};
    solution.VecSort(input0);

    // 1 3 5 7 9

    PrintVector(input0);
    
    return EXIT_SUCCESS;
};


