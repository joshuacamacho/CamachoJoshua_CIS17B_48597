#include "Arry.h"
#include <cstdlib>
#include <iostream>
Arry::Arry(int rows, int cols)
{
    this->nRows=rows;
    this->nCols=cols;
    this->array=new int*[rows];

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

            if(j==(nCols-1)){
                nums[size]='\n';
                size++;
            }else{
                nums[size]=' ';
                size++;
            }
        }
    }
    nums[(nRows*nCols)*3]='\0';


    return nums;
}

void Arry::printNums(){
    for(int i=0; i<this->nRows; i++){
        for(int j=0; j<this->nCols; j++){
            std::cout<<this->array[i][j];
            std::cout<<" ";
        }
        std::cout<<"\n";
    }
}


Arry::~Arry(){
    for(int i=0; i<this->nRows; i++){
        delete[]this->array[i];
    }
    delete[]this->array;
}
