#include "calc.h"
#include "exprtk.hpp"
#include <string>
#include <iostream>
#include <cmath>

double parse(std::string expression_string);

void calc() {

    // First we have to start by getting something to calculate from the user (it may also be a command)
    std::string expression_string;
    std::cin >> expression_string;

    // Next, we have to turn that into something that actually makes sense
    // For this, we will use a parsing library (exprtk)
    double result = parse(expression_string);

    // Once we get the result, we should check if it's nan
    // after we know it isn't, then we should print. 
    if (std::isnan(result)) {
        std::cout << "Invalid Syntax! \n";
    } else {
        std::cout << result << '\n'; 
    }

}


// Idek, just copied more or less from the exprtk github
double parse(std::string expression_string) {
    typedef exprtk::symbol_table<double> symbol_table_t;
    typedef exprtk::expression<double> expression_t;
    typedef exprtk::parser<double> parser_t;

    symbol_table_t symbol_table;

    expression_t expression;
    expression.register_symbol_table(symbol_table);

    parser_t parser; 
    parser.compile(expression_string, expression);

    double result = expression.value();

    return result;
}