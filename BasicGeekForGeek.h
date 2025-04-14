#ifndef BASIC_GEEK_FOR_GEEK_H
#define BASIC_GEEK_FOR_GEEK_H

//EVEN_ODD_UTILITIES

class EvenOddUtilities {
public:
    const char* pushpop_evenodd (int n);
    const char* bitwise_evenodd (int n);
    const char* even_odd_char   (int n);
    const char* geekpushpop     (int n);
    bool even_odd               (int n);
};

//MULTIPLICATION_TABLE_UTILITES

class MultiplicationTableUtilities
{
public:
    void print_table          (int n, int i);
    int  multiplication_table (int n);
    void message              (int n);
};

//SUM_NATURAL_NUMBERS_UTILITIES

class SumNaturalNumbersUtilities
{
public: 
    int sum_first_natural_numbers   (int n);
    int natural_formula_sum_numbers (int n);
    int anti_over_flow_sum_numbers  (int n);
};

//SWAP_TO_VALUES_UTILITIES

class SwapTwoValuesUtilities
{
public:
    void message(int a, int b);
    int swap_values_thrid_variable (int a, int b);
    int swap_values_without_third  (int a, int b);
};
#endif