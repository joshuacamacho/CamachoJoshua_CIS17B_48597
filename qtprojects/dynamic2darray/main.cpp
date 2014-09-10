/* Joshua Camacho
 * 09/03/14
 * CIS-17B-48597
 * Review Assignment 1
 */
#include <Arry.cpp>
#include <iostream>
#include <QApplication>
#include <QLabel>
#include <cstdlib>
#include <ctime>

int main(int argc, char** argv){
    srand(time(0));
    QApplication app(argc,argv);
    Arry test(12,12);
    test.printNums();
    QLabel *label=new QLabel(test.toString());
    label->show();
    return app.exec();
}
