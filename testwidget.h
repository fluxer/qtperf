#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QWidget>
#include <QPainter>
#include <stdio.h>

QT_BEGIN_NAMESPACE
namespace Ui {
    class TestWidget;
}
QT_END_NAMESPACE

class TestWidget : public QWidget
{
    Q_OBJECT

public:
    typedef enum {TEST_LINES, TEST_CIRCLES, TEST_TEXT, TEST_PIXMAP, TEST_IDLE} TestType;
    TestType type;
    explicit TestWidget(QWidget *parent = 0);
    void setType(TestType newtype);
    void setNumber(const int number);
    ~TestWidget();
protected:
    void paintEvent(QPaintEvent *);

private:
    int number;
    QPixmap duck;
    Ui::TestWidget *ui;
};

#endif // TESTWIDGET_H
