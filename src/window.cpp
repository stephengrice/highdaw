#include "window.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

Window::Window(QWidget *parent) :
 QWidget(parent)
 {
   // Label at top
   QLabel *lblHello = new QLabel("Step Sequencer");
   // Buttons in step seq
   QHBoxLayout *stepLayout = new QHBoxLayout;
   QPushButton *stepButtons[10];
   for (int i = 0; i < 10; i++) {
     stepButtons[i] = new QPushButton(QString::fromStdString(std::to_string(i)));
     stepLayout->addWidget(stepButtons[i]);
   }

   // VBox for main part of page
   QVBoxLayout *layout = new QVBoxLayout;
   layout->addWidget(lblHello);
   layout->addLayout(stepLayout);

   setLayout(layout);
   resize(800,600);
 }
