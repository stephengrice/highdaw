#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QWidget>
#include <QObject>

class QPushButton;
class MainWindow : public QMainWindow
{
  Q_OBJECT
public:
  explicit MainWindow(QWidget *parent = 0);
private slots:
  void handleButton();
private:
 QLabel *lblHello;
};

#endif // MAINWINDOW_H
