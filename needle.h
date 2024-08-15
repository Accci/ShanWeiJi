#ifndef NEEDLE_H
#define NEEDLE_H

#include <QObject>
#include <QWidget>

class Needle : public QWidget
{
    Q_OBJECT
public:
    explicit Needle(QWidget *parent = nullptr);

signals:

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // NEEDLE_H
