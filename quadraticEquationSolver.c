#include "quadraticEquationSolver.h"

#include <math.h>
float calcolodelta(float a, float b, float c){
    float d;
    d=(float)(b*b)-4 * a * c;
    return d;
}
 
complexNumber calcolox1(float a, float b, float c){
    complexNumber s;
    float delta;
    delta = calcolodelta(a,b,c);
    if(delta < 0){
        s.re=-b;
        s.im= sqrt(-delta);
    }
    else {
        s.re = (-b + sqrt(delta));
        s.im = 0;
    }
    s.re = s.re/(2*a);
    s.im = s.im/(2*a);
    return s;
}

complexNumber calcolox2(float a, float b, float c){
    complexNumber s;
    float delta;
    delta = calcolodelta(a,b,c);
    if(delta < 0){
        s.re=-b;
        s.im= -sqrt(-delta);
    }
    else {
        s.re = (-b - sqrt(delta));
        s.im = 0;
    }
    s.re = s.re/(2*a);
    s.im = s.im/(2*a);
    return s;
}