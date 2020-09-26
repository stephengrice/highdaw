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
   QLabel *lblHello = new QLabel("Step Sequencer");
   // Buttons in step seq
   QHBoxLayout *stepLayout = new QHBoxLayout;
   QPushButton *stepButtons[10];
   for (int i = 0; i < 10; i++) {
     stepButtons[i] = new QPushButton(QString::fromStdString(std::to_string(i)));
     stepLayout->addWidget(stepButtons[i]);
     stepButtons[i]->setEnabled(false);
     connect(stepButtons[i], SIGNAL (clicked()), this, SLOT (handleClick()));
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

void MainWindow::handleClick(QWidget* parent = 0) {
  std::cout << "click" << std::endl;
}
