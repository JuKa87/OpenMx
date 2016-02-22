//
//  benchmark.cpp
//  
//
//  Created by Julian Karch on 17/09/15.
//
//

#include "benchmark.h"

std::stack<clock_t> tictoc_stack;

void tic() {
    #pragma omp critical
    {
    tictoc_stack.push(clock());
    }
}

double toc() {
    clock_t tmp;
    #pragma omp critical
    {
    tmp = tictoc_stack.top();
    tictoc_stack.pop();
    }
    return(((double)(clock() - tmp)) / CLOCKS_PER_SEC);
}
