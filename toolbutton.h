
/**
* @brief 注释
* @author houyawei
* @date 2023/05/23
*彩灯状态显示
*
*/
#ifndef TOOLBUTTON_H
#define TOOLBUTTON_H


#include <QToolButton>

class ToolButton : public QToolButton
{
public:

    explicit ToolButton(QString pic_name, QWidget *parent = 0);
    ~ToolButton();
    void setMousePress(bool mouse_press);

protected:

    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void painterInfo(int top_color, int middle_color, int bottom_color);

public:

    bool mouse_over; //鼠标是否移过
    bool mouse_press; //鼠标是否按下
};


#endif // TOOLBUTTON_H
