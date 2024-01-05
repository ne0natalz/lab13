#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[], int size, double B[]){
   
    
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += A[i];
    }
    B[0] = sum / size;
   
   
    double sumSquaredDiff = 0;
    for (int i = 0; i < size; ++i) {
        sumSquaredDiff += pow(A[i] - B[0], 2);
    }
    B[1] = sqrt(sumSquaredDiff / size);
    
   
    double product = 1.0;
    for (int i = 0; i < size; ++i) {
        product *= A[i];
    }
    B[2] = pow(product, 1.0 / size);
   
    
    double sumReciprocal = 0;
    for (int i = 0; i < size; ++i) {
        sumReciprocal += 1.0 / A[i];
    }
    B[3] = size / sumReciprocal;


    double maxVal = A[0];
    double minVal = A[0];

    for (int i = 1; i < size; ++i) {
        if (A[i] > maxVal) {
            maxVal = A[i];
        }
        if (A[i] < minVal) {
            minVal = A[i];
        }
    }
    B[4] = maxVal;
    B[5] = minVal;


}