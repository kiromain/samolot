#ifndef BUTTONS_H
#define BUTTONS_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class Buttons:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    Buttons(QString name, QGraphicsItem* parent=NULL);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked();
private:
    QGraphicsTextItem* text;
};

#endif // BUTTON_H
