#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::StartGame()
{
    //qDebug()<<"game started";

    //create a Scene
    scene = new QGraphicsScene();

    Player = new QGraphicsRectItem();
    Player->setRect(0,0,100,100);

    scene->addItem(Player);

    view = new QGraphicsView(scene);
    view->show();
}



void MainWindow::on_pushButton_clicked()
{

    StartGame();
   // qDebug()<<"clicked";
}
