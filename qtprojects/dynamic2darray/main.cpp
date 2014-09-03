/* Joshua Camacho
 * 09/03/14
 * CIS-17B-48597
 * Review Assignment 1
 */
#include <Arry.cpp>
#include <iostream>
#include <QApplication>
#include <QLabel>

int main(int argc, char** argv){
    QApplication app(argc,argv);
    Arry test(3,3);
    QLabel *label=new QLabel(test.toString());
    label->show();
    return app.exec();
}
