//
//  sets.cpp
//  sets.hpp
//  main.cpp
//
//  Created by RADU ENACHI on 05/21/20.
//  Copyright © 2020 Baron. All rights reserved.


/*
 Lab 1
 CSIS 125
 
 Set
 
 -vector<int> set;
 
 +Set();
 +Sets(vector);
 +void addElement(int);
 +int getElement(int) const;
 +int getSize() const;
 +bool isSubset(Set);
 +bool isProper(Set);
 +void printOrderedPairs(Set) const;
 +std::vector<int> unionOps(Sets&);
 +std::vector<int> intersecTion(Sets&);
 +void printSet() const;
 */

#include <iostream>
#include "sets.hpp"

int main(int argc, const char * argv[]) {

    std::vector<int> arrayIntersection, arrayUnion;
    
    Sets A, B, C;

    for (int i = 1; i < 10; i++) {
        A.addElement(i);
        B.addElement(i * 2);
        C.addElement(i + (i+4));
     }

    std::cout << "--------------------------------------------------------------" << std::endl;

    std::cout << "The values in the set A are: ( "; A.printSet(); std::cout << ")"<<"           |" << std::endl;;
    std::cout <<"--------------------------------------------------------------"<< std::endl;

    std::cout << "The values in the set B are: ( "; B.printSet(); std::cout << ")" <<"      |"<< std::endl;;
    std::cout << "--------------------------------------------------------------" << std::endl;

    std::cout << "The values in the set C are: ( "; C.printSet(); std::cout << ")" << "    |" << std::endl;
    std::cout << "--------------------------------------------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << "----------------------------------------------------------------------" << std::endl;
    arrayUnion = A.unionOps(B);
    Sets _union(arrayUnion);
    std::cout << "The union of A and B (A U B) ( "; _union.printSet(); std::cout << ")" << "    |" << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;

    arrayIntersection = C.intersecTion(B);
    Sets _intersection(arrayIntersection);
    std::cout << "The intersection of C and B (C & B) ( "; _intersection.printSet(); std::cout << ")" << "           |" << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;






    /*

    A.printOrderedPairs(B);
    
    std::cout << std::endl << std::endl;
    
    
    std::cout << "Set A is ";
    if(A.isSubset(B) == true){
        std::cout<< "a ";
    }if (A.isSubset(B) == false ){
        std::cout <<"not ";
    }
    
    std::cout << "subset of B." <<std::endl;
    
    std::cout << "Set A is ";
    if(A.isProper(B) == true){
        std::cout<< "a ";
    }else if (A.isProper(B) == false ){
        std::cout <<"not ";
    }

    std::cout<< "Proper subset of B."<<std::endl<<std::endl;
        */
    
    return 0;
}
