/** \file mathf.h
 *  \brief Libreria per file main
 *  \author Gianni Bonelli
 */
#ifndef MATHF
    #define MATHF
        float Polynomial(float* coeff, int size, float in);

        void Rectangular(float* values, int size, float stepsize, float* integ1, float* integ2);

        float Trapezoidal(float* values, int size, float stepsize);
        
#endif