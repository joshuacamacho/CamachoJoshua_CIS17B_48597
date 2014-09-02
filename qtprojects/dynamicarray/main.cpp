#include <QApplication>
#include <QLabel>
#include <Arry.h>


int main(int argc, char *argv[])
{

  QApplication app(argc, argv);
  QLabel *label = new QLabel("Test");
  //Arry myArry(5,5);
  label->show();




  return app.exec();
}
