//
//  benchmark.h
//  
//
//  Created by Julian Karch on 17/09/15.
//
//

#ifndef _benchmark_h
#define _benchmark_h
#include <iostream>
#include <stack>
#include <ctime>

extern int expCount;
extern double expTime;
extern int gradCount;
extern double gradTime;

extern std::stack<clock_t> tictoc_stack;
void tic();
double toc();

#endif
