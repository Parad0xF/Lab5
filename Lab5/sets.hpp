//
//  sets.hpp
//  sets
//
//  Created by Parad0xFF on 3/3/20.
//  Copyright © 2020 Baron. All rights reserved.
//

#ifndef sets_hpp
#define sets_hpp

#include <iostream>
#include <vector>

class Sets {
    
private:
    std::vector<int> set;
    
public:
    Sets();
    Sets(std::vector<int> &array1);
    void addElement(int);
    int getElement( int X_position) const;
    int getSize() const;
    bool isSubset( Sets&)const;
    bool isProper( Sets&) const;
    void printOrderedPairs(Sets&) const;
    std::vector<int> unionOps(Sets&);
    std::vector<int> intersecTion(Sets&);
    void printSet() const; 
    
};

#endif /* sets_hpp */
