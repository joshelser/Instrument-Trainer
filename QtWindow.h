#ifndef __QT_WINDOW_H__
#define __QT_WINDOW_H__

#include <QtGui>

class QMenu;
class QLabel;

class QtWindow : public QMainWindow
{
  Q_OBJECT

 public:
  QtWindow();
  ~QtWindow();

 private slots:
  void open();

 private:
  void createActions();
  void createMenus();

  QAction *m_openAct;
  QAction *m_exitAct;
  QMenu *m_fileMenu;

  QLabel *m_label;
};

#endif	/* __QT_WINDOW_H__ */
