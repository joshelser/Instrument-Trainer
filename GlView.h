#ifndef __GLVIEW_H__
#define __GLVIEW_H__

#include <QGLWidget>

class Window;

class CGLView : public QGLWidget
{
  Q_OBJECT

 public:
  CGLView(QWidget *parent);
  ~CGLView();

 protected:
  void initializeGL();
  void paintGL();
};

#endif	/* __GLVIEW_H__ */
