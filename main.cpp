#include "mainwindow.h"
#include <QApplication>

#include "game.h"

int main(int argc, char* argv[])
{
  setlocale(LC_ALL, "rus");

  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}
