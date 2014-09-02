#include <Arry.cpp>
#include <iostream>
#include <QApplication>
#include <QLabel>
int main(int argc, char** argv){
    QApplication app(argc,argv);
    Arry test(2,2);
    char* nums=test.toString();
    QLabel *label=new QLabel(nums);
    label->show();
    /*int size=16;
    for(int i=0; i<16; i++){
        std::cout<<nums[i];
    }
    std::cin.get();*/
    return app.exec();
}
