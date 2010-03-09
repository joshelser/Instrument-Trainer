#include "QtWindow.h"

QtWindow::QtWindow()
{
  setWindowTitle(tr("Instrument Trainer"));

  QVBoxLayout *mainLayout = new QVBoxLayout;

  m_glWidget = new CGLView(this);
  mainLayout->addWidget(m_glWidget);

  QWidget *centralWin = new QWidget();
  centralWin->setLayout(mainLayout);

  createActions();
  createMenus();

  setCentralWidget(centralWin);

  show();
}

QtWindow::~QtWindow()
{
  
}

void QtWindow::createActions()
{
  m_openAct = new QAction(tr("&Open..."), this);
  m_openAct->setShortcut(tr("Ctrl+O"));
  m_openAct->setStatusTip(tr("Open an existing file"));
  connect(m_openAct, SIGNAL(triggered()), this, SLOT(open()));

  m_exitAct = new QAction(tr("&Quit"), this);
  m_exitAct->setShortcut(tr("Ctrl+Q"));
  m_exitAct->setStatusTip(tr("Quit the application"));
  connect(m_exitAct, SIGNAL(triggered()), this, SLOT(close()));
}

void QtWindow::createMenus()
{
  m_fileMenu = menuBar()->addMenu(tr("&File"));
  m_fileMenu->addAction(m_openAct);
  m_fileMenu->addSeparator();
  m_fileMenu->addAction(m_exitAct);
}

void QtWindow::open()
{
  QString currentSong = QDir::homePath();

  QString fileName = QFileDialog::getOpenFileName(this
						  , tr("Open MIDI File")
						  , currentSong
						  , tr("MIDI Files (*.mid *.MID *.midi *.kar *.KAR)"));
}
