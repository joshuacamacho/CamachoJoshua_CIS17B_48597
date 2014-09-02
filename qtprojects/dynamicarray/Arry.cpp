#include "Arry.h"

Arry::Arry(int rows,int cols)
{
    this->nRows=rows;
    this->nCols=cols;
    this->array=new int*[rows];
    for(int i=0; i<rows; i++){
        this->array[i]=new int[cols];
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            this->array[rows][cols]=2;
        }
    }
}
