#include <QApplication>

#include <QtOpenGL>
#include "QtWindow.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  if (!QGLFormat::hasOpenGL()) {
    QMessageBox::information(0, "OpenGL Required",
			     "OpenGL support is required for this application and was not found on this system.");
    return -1;
  }

  QtWindow window;

  window.show();
  return app.exec();
}
