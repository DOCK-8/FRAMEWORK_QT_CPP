#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->music_list_0->setPixmap(QPixmap(":/img/music_list.jpg"));
    ui->music_list_1->setPixmap(QPixmap(":/img/music_list.jpg"));
    ui->music_list_2->setPixmap(QPixmap(":/img/music_list.jpg"));
    ui->music_general->setPixmap(QPixmap(":/img/music_list.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
