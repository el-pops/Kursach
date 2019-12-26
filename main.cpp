#include <QApplication>
#include <QIcon>
#include "snake.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Snake window;

  window.setWindowTitle("Snake");
  window.setWindowIcon(QIcon("icon.png"));
  window.show();

  return app.exec();
}
