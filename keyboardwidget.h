#ifndef KEYBOARDWIDGET_H
#define KEYBOARDWIDGET_H

#include <QWidget>
#include "zxpushbutton.h"

class KeyboardWidget : public QWidget
{
    Q_OBJECT
public:
    explicit KeyboardWidget(QWidget *parent = nullptr);
    virtual ~KeyboardWidget();

public Q_SLOTS:
    void on_key_pressed(int row, int col, int add);
    void on_key_released(int row, int col, int add);
Q_SIGNALS:
    void key_pressed(int, int,int);
    void key_released(int, int,int);
protected:
    QVector<ZXPushButton*> buttons;
};

#endif // KEYBOARDWIDGET_H
