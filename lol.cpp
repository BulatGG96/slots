#include "lol.h"
#include "ui_lol.h"

lol::lol(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lol)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, &QPushButton::clicked, this , &lol::set_windowTitle);
    QObject::connect(ui->pushButton, &QPushButton::clicked, ui->pushButton , &QPushButton::hide);
    QObject::connect(ui->pushButton, &QPushButton::clicked, ui->textEdit, [this](){this->ui->textEdit->setPlainText("helo world");});
}

lol::~lol()
{
    delete ui;
}

void lol::set_windowTitle(){
    this->setWindowTitle(ui->textEdit->toPlainText());
}


