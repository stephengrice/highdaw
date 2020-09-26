#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>

class QPushButton;
class MainWindow : public QMainWindow
{
public:
  explicit MainWindow(QWidget *parent = 0);
private slots:
  void handleClick(QWidget* parent);
private:
  QPushButton *m_button;
};

#endif // MAINWINDOW_H
