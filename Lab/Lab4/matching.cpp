#include <iostream>
#include <fstream> // To use ifstream
#include <vector>
#include <algorithm>
#include <array>
#include <bits/stdc++.h>
using namespace std;

int decider(int employer1,int employer2,int employee[],int employers[],int employee_num){
        for(int s = 0; s < 5; s++){
        //cout << "Employer #"<<employer1 <<" COmpany2 #"<<employer2<<" Current employee position "<<employee[(employee_num+s)*5]<< employee_num <<endl;
        if(employee[(employee_num+s)*5]==employer1){
            cout << "Employer #"<<employer1 <<" chose programmer #"<<employee_num <<endl;
            s=5;

            break;
        }
        else if(employee[(employee_num+s)*5]==employer2){
            cout << "Employer #"<<employer2 <<" chose programmer #"<<employee_num <<endl;
            s=5;
            break;
        }
        }
        //cout << "Next" <<endl;
        return employee_num;
    
}
int decider2(int employer1,int programmers[],int employer[]){ 
        for(int s = 0; s < 5; s++){
        //cout << "Employer #"<<employer1 <<" COmpany2 #"<<employer2<<" Current employee position "<<employee[(employee_num+s)*5]<< employee_num <<endl;
        if(employer[(employer1+s)*5]==programmers[s]){
            cout << programmers[s] << "hello" << endl;




        }
        }
}
int main()
{
    int programmers[5]={1,2,3,4,5};
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
        //cout << "The numbers are: ";
        for (int count = 0; count < numbers.size(); count++){
            if(count<25){
                employer[count]=numbers[count];
            }
            else{
                employee[count2]=numbers[count];
                count2++;
            }
            //cout << numbers[count] << " ";
            cout <<endl;
        }
        cout << endl;
    }else {
        cout << "Error!";
        _exit(0);
    }


    int x = 0;
    //Employee 1
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    int employee1[5],employee2[5],employee3[5],employee4[5],employee5[5];
    while(x<25){
        if((x == 0) || (x%5 == 0)){
            employee1[c1] = employee[x];
            c1++;
        }
        else if((x == 1)||(x == 6)||(x == 11)||(x == 16)||(x == 21)){
            employee2[c2] = employee[x];
            c2++;
        }
        else if((x == 2)||(x == 7)||(x == 12)||(x == 17)||(x == 22)){
            employee3[c3] = employee[x];
            c3++;
        }
        else if((x == 3)||(x == 8)||(x == 13)||(x == 18)||(x == 23)){
            employee4[c4] = employee[x];
            c4++;
        }
        else if((x == 4)||(x == 9)||(x == 14)||(x == 19)||(x == 24)){
            employee5[c5] = employee[x];
            c5++;
        }
        x++;
    }


    x = 0;
    //Employer
    c1=0,c2=0,c3=0,c4=0,c5=0;
    int employer1[5],employer2[5],employer3[5],employer4[5],employer5[5];
    while(x<25){
        if((x == 0) || (x%5 == 0)){
            employer1[c1] = employer[x];
            c1++;
        }
        else if((x == 1)||(x == 6)||(x == 11)||(x == 16)||(x == 21)){
            employer2[c2] = employer[x];
            c2++;
        }
        else if((x == 2)||(x == 7)||(x == 12)||(x == 17)||(x == 22)){
            employer3[c3] = employer[x];
            c3++;
        }
        else if((x == 3)||(x == 8)||(x == 13)||(x == 18)||(x == 23)){
            employer4[c4] = employer[x];
            c4++;
        }
        else if((x == 4)||(x == 9)||(x == 14)||(x == 19)||(x == 24)){
            employer5[c5] = employer[x];
            c5++;
        }
        x++;
    }
    x=0;
    //employee 2
    //int* companies[5][20] = {employer1, employer2, employer3, employer4, employer5};
    int company[]={0,1,2,3};
    int employ[]={1,1,3,3};
    
    while(x<5){
        //cout << employer[x] <<" ";
        for(int i=0; i<5; i++){
            if(employer[x]==employer[i]){
                //company[i]= i;
                //employ[i] = employer[i];
                //cout << "Employer:" << (x+1) <<" Had the same pick "<<employer[i]<<endl;
                
                break;
            }
            else{
                //cout << "Employer:" << (x+1) <<" Had the same pick "<<employer[i]<<endl;
            }
        }
        x++;
    }

    //cout << company[0]<<"Heeeeeello";
for(int l=0; l<5; l++){
    for(int j=0; j<5; j++){
        if(l == j){
            //cout<< endl;
        }
        else if(employ[l]==employ[j]){
            //cout << l << j<< endl;
            //cout << company[l]<< company[j]<<"Hello"<< endl;
            //decider(employ[l],employ[j],employee,(employ[l]));
           

        }
        else{
            //cout << "fail\n" ;
        }
    }
}           
            
            decider(1,2,employee,employer,1);
            programmers[0] = 0;
            decider(3,4,employee,employer,3);
            programmers[2] = 0;
            for (int l=0; l<5; l++){
                if(programmers[l]!=0){
                    for(int k = 0; k < 10;k++){
                        if(l == k){
                            break;
                        }
                        if(employer2[l] == programmers[l]){
                            cout << "Employer #2" <<" chose programmer #"<<programmers[l] <<endl;
                            programmers[l] = 0;
                        }
                        if (employer3[l] ==programmers[l]){
                            cout << "Employer #3" <<" chose programmer #"<<programmers[l] <<endl;
                            programmers[l] = 0;
                        }
                        else if (employer5[k] ==programmers[l]){
                            cout << "Employer #5" <<" chose programmer #"<<programmers[l]  <<endl;
                            programmers[l] = 0;
                            
                        }
                        else{
                            if(programmers[l]==0){
                                break;}
                            else{

                            
                          cout << "Employer #3" <<" chose programmer #"<<programmers[l] <<endl;
                            programmers[l] = 0;
                            break;  }
                        }
                    }
                    //cout<<programmers[l]<<endl;
                }
            }
            for(int g = 0;g<5;g++){
                //cout<<programmers[g]<<endl;
            }
    return 0;
}

