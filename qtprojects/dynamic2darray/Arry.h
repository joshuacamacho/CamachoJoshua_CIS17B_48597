#ifndef ARRY_H
#define ARRY_H

class Arry
{
private:
    int nRows;
    int nCols;
    int **array;
public:
    Arry(int,int);
    char* toString();
    ~Arry();
    void printNums();
};

#endif // ARRY_H
