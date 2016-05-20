#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "player.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void StartGame();
    QGraphicsScene * scene; // create a scene
    Player * Ply; // ply means player
    QGraphicsView * view; // create a view


private slots:
    void on_PlayButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
