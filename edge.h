#ifndef EDGE_H
#define EDGE_H

#include <QGraphicsItem>

class Vertex;

class Edge : public QGraphicsItem {

    public:

        Edge(Vertex *sourceVertex, Vertex *destVertex, QString color);      //
        ~Edge();                                                            //
        Vertex *sourceVertex() const;                                       //
        Vertex *destVertex() const;
        void adjust();
        unsigned int getLenght() const { return lenght; }


    private:

        Vertex *source, *dest;
        QPointF sourcePoint;
        QPointF destPoint;
        unsigned int lenght;
        QString color;

        // funciones privadas
        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // EDGE_H
