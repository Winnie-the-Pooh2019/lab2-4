//
// Created by ivan on 4/25/25.
//

#ifndef FUNCTION_H
#define FUNCTION_H

#include <cmath>

// a * log(x) * cos(y)
class Function {
private:
    double coef;

public:
    Function(double coef) : coef(coef) {
    }

    template<typename T, typename R>
    double operator()(T x, R y) const {
        return coef * std::log(x) * std::cos(y);
    }
};

#endif //FUNCTION_H
