#include "needle.h"
#include <QPainter>

Needle::Needle(QWidget *parent) : QWidget(parent)
{
    setFixedSize(8, 63);
    setStyleSheet("background:transparent;");
}

void Needle::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::SmoothPixmapTransform, true);

    QPixmap pix(":/res/needle.png");

    painter.drawPixmap(this->rect(), pix);

}
