#include <iostream>
#include <QCoreApplication>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
 QMainWindow(parent)
 {
   // Label at top
   lblHello = new QLabel("Step Sequencer");
   // connect(lblHello, SIGNAL(released()), this, SLOT(handleButton()));
   // Buttons in step seq
   QHBoxLayout *stepLayout = new QHBoxLayout;
   QPushButton *stepButtons[10];
   for (int i = 0; i < 10; i++) {
     stepButtons[i] = new QPushButton(QString::fromStdString(std::to_string(i)));
     stepLayout->addWidget(stepButtons[i]);
     // stepButtons[i]->setEnabled(false);
     // Change background color of pushbutton
     QPalette pal = stepButtons[i]->palette();
     pal.setColor(QPalette::Button, QColor(Qt::blue));
     stepButtons[i]->setAutoFillBackground(true);
     stepButtons[i]->setPalette(pal);
     stepButtons[i]->update();

     connect(stepButtons[i], SIGNAL (released()), this, SLOT (handleButton()));
   }

   // VBox for main part of page
   QVBoxLayout *layout = new QVBoxLayout;
   layout->addWidget(lblHello);
   layout->addLayout(stepLayout);

   QWidget* widget = new QWidget();
   widget->setLayout(layout);
   setCentralWidget(widget);
   resize(800,600);
 }

void MainWindow::handleButton() {
  std::cout << "click" << std::endl;
}
