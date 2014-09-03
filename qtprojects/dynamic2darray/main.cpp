#include <Arry.cpp>
#include <iostream>
#include <QApplication>
#include <QLabel>
int main(int argc, char** argv){
    QApplication app(argc,argv);
    Arry test(10,10);
    QLabel *label=new QLabel(test.toString());
    label->show();
    return app.exec();
}
