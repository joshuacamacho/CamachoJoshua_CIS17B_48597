#include "Arry.h"
#include <cstdlib>
#include <ctime>
Arry::Arry(int rows, int cols)
{
    this->nRows=rows;
    this->nCols=cols;
    this->array=new int*[rows];
    srand(time(NULL));
    for(int i=0; i<rows; i++){
        this->array[i]=new int[cols];
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            this->array[i][j]=rand()%90+10;
        }
    }
}

char* Arry::toString(){
    char* nums= new char[((nRows*nCols)*3)+1];
    int size=0;

    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            nums[size]=(array[i][j]/10)+'0';
            size++;
            nums[size]=(array[i][i]%10)+'0';
            size++;
            nums[size]=' ';
            size++;
        }
    }
    nums[(nRows*nCols)*3]='\0';


    return nums;
}
