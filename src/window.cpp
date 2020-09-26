#include "window.h"
#include <QLabel>
#include <QVBoxLayout>

Window::Window(QWidget *parent) :
 QWidget(parent)
 {
   // SEt Window size
   setFixedSize(100, 50);
   // // Create and position the button
   // m_button = new QPushButton("Hello wrold", this);
   // m_button->setGeometry(10, 10, 80, 30);
   QLabel *lblHello = new QLabel("<center>Hello world!</center>");

   // VBox for main part of page
   QVBoxLayout *layout = new QVBoxLayout;
   layout->addWidget(lblHello);

   setLayout(layout);
 }
