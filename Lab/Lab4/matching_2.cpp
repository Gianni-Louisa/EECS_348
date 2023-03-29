#include <iostream>
#include <fstream> // To use ifstream
#include <vector>
#include <algorithm>
#include <array>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int employee[25]={};
    int employer[25]={};
    std::vector<int> numbers;
    ifstream inputFile("sample.txt");        // Input file stream object

    // Check if exists and then open the file.
    if (inputFile.good()) {
        // Push items into a vector
        int current_number = 0;
        while (inputFile >> current_number){
            numbers.push_back(current_number);
        }
        // Close the file.
        inputFile.close();
        int count2 = 0;
        // Display the numbers read:
        cout << "The numbers are: ";
        for (int count = 0; count < numbers.size(); count++){
            if(count<25){
                employer[count]=numbers[count];
            }
            else{
                employee[count2]=numbers[count];
                count2++;
            }
            //cout << employee[count] << " ";
            cout <<endl;
        }
        cout << endl;
    }else {
        cout << "Error!";
        _exit(0);
    }
    for(int j = 0; j < 5; j++){
        for(int i = 0*5; i<(i+1)*5;i++){
            if(i == j){
                break;
            }
            else if(employer[i]==employer[j]){
                cout << i << " " << j << endl;
                

            }
        }
    }
}