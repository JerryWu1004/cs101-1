//第三題
#include <iostream>
using namespace std;

class myArray{
    public:
        int n;
        int* array;
        int size;
        
        myArray(int size){
            this->size = size;
        }
        
        void recInput(int array[], int n){
            this->array = &array[0];
            this->n = n; 
        }
        
        int recMax(int n){
            if(n == 1){
                return array[0];
            }
            
            return max(recMax(n-1), array[n-1]);
        }
        
        int recSum(int n){
            if(n == 1){
                return array[0];
            }
            
            return recSum(n-1) + array[n-1];
        }
        
        float recAve(int n){
            return recSum(n)/(float)n;
        }
    
};
