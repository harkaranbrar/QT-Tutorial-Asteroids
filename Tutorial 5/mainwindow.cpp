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
    Ply->setRect(-50,-50,100,100);
    scene->addItem(Ply);
    Ply->setFlag(QGraphicsItem::ItemIsFocusable);//make the player focusable
    Ply->setFocus(); //gain a focus


    view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    Ply->setPos(view->width()/2,view->height()/2);

    //qDebug()<<"game start";
}

void MainWindow::on_PlayButton_clicked()
{
    StartGame();
   // qDebug()<<"clicked";
}
