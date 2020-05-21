
//  Created by Parad0xFF on 3/3/20.
//  Copyright © 2020 Baron. All rights reserved.

#include <iostream>
#include <vector>
#include "sets.hpp"
#include <algorithm>



using namespace std;

Sets::Sets(vector<int> &array) {

    for (int i = 0; i < array.size(); i++) {
        set.push_back(array[i]);
    }
}

Sets::Sets(){
    for(int i =0; i < set.size(); i++){
        set.begin();
    }
}



void Sets::addElement(int x_element){
    set.push_back(x_element);
}

int Sets::getElement(int x_position) const{
    int  val = 0;
    if(x_position <= set.size()){
        val = set.at(x_position);
    }
    else if( x_position > set.size()){
        val = -1;
    }
    return val;
}

int Sets::getSize() const{

    return (int)set.size();
}

bool Sets::isSubset( Sets &B) const{
    bool flag = true;
    int i;
    
    for(i = 0; i < set.size(); i++ )
        
    {
            if(std::find(B.set.begin(), B.set.end(), set[i]) != B.set.end()){}
                else
                    flag = false;
        
    }
     
    return flag;
}

bool Sets::isProper( Sets &B) const{
    
    bool the_result_of = isSubset(B);
    if(the_result_of)
        if(set.size() < B.set.size()){
            return true;
        }
    return false;
}

void Sets::printOrderedPairs(Sets &B) const {
    cout << "A x B = {";
    for(int i = 0; i < B.set.size(); i++) {
        for(int z = 0; z < set.size(); z++) {
            cout << "(" << set[z] << "," << B.set[i] << ") , ";
        }
    }
    cout << "}";
}

std::vector<int> Sets::unionOps(Sets& B) {
    for (int i = 0; i < set.size(); i++) {
        for (int k = 0; k < B.set.size();k++) {
            if (set[i] == B.set[k]) {
                set.erase(set.begin() + i);
                continue;
            }
        }
    }
    for (int i = 0; i < B.set.size(); i++) {
        set.push_back(B.set[i]);
    }
    sort(set.begin(), set.end());

    return set;
}


std::vector<int> Sets::intersecTion(Sets& B) {
    std::vector<int> temp;
    for (int i = 0; i < set.size(); i++) {
        for (int k = 0; k < B.set.size(); k++) {
            if (set[i] == B.set[k]) {
                temp.push_back(set[i]);
                continue;
            }
        }
    }

    return temp;
}

void Sets::printSet() const{
    for (int i = 0; i < set.size(); i++) {
        printf("%d ", set[i]);
    }
}