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

    Ply= new Player();
    Ply->setRect(0,0,20,50);


    scene->addItem(Ply);

    Ply->setFlag(QGraphicsItem::ItemIsFocusable);
    Ply->setFocus();
    view = new QGraphicsView(scene);
    view->show();
}

void MainWindow::on_PlayButton_clicked()
{
    StartGame();
}
