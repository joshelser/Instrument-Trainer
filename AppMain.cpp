#include <QApplication>

#include <QtOpenGL>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  if (!QGLFormat::hasOpenGL()) {
    QMessageBox::information(0, "OpenGL Required",
			     "OpenGL support is required for this application and was not found on this system.");
    return -1;
  }

  return app.exec();
}
