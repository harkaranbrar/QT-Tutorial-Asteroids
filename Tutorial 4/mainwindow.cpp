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

    scene = new QGraphicsScene(); // create a scene

    Ply = new Player();
    Ply->setRect(0,0,100,50);
    scene->addItem(Ply);
    Ply->setFlag(QGraphicsItem::ItemIsFocusable);//make the player focusable
    Ply->setFocus(); //gain a focus


    view = new QGraphicsView(scene);
    view->show();

    //qDebug()<<"game start";
}

void MainWindow::on_PlayButton_clicked()
{
    StartGame();
   // qDebug()<<"clicked";
}
