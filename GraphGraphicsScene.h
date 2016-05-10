//
// Created by Josh aka Bae on 27/04/2016.
//

#ifndef GRAPHDRAWINGTESTS_GRAPHGRAPHICSSCENE_H
#define GRAPHDRAWINGTESTS_GRAPHGRAPHICSSCENE_H

#include <iostream>
#include <QtWidgets/qgraphicsview.h>
#include <QtWidgets/qgraphicsitem.h>
#include <QtCore/qtimer.h>

using namespace std;


class GraphGraphicsScene : public QGraphicsScene {
    Q_OBJECT

public:
    GraphGraphicsScene(int w, int h);

    QGraphicsView view;

public slots:
    long tick();

private:
    int iCurrentTick = 0;

    void DrawAxis();
    void DrawGraph(string equation);
    void DrawGrid(int scale); //this is only called when it's needed i.e. not every tick only when the scale or the scene position has moved.
    void MoveScene(int newX, int newY); //moves the top left hand corner of the scene to the specified position.

    int iScale_ = 20;

    vector<QGraphicsLineItem *> GridLines_;

    int iLinesToStore_ = 100; //Dictates the amount of lines that will be stored in the GridLines_ vector

    int iMinY_;
    int iMinX_;
    int iMaxY_;
    int iMaxX_;

    int width_;
    int height_;

    int xOffset_ = 0;
    int yOffset_ = 0;

    QPen AxisPen_;
    QPen GridPen_;

    QGraphicsLineItem yAxis_;
    QGraphicsLineItem xAxis_;

    QTimer *timer_ = new QTimer();
};


#endif //GRAPHDRAWINGTESTS_GRAPHGRAPHICSSCENE_H
