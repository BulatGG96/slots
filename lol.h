#ifndef LOL_H
#define LOL_H

#include <QMainWindow>
#include <QtWidgets/QTextEdit>

namespace Ui {
class lol;
}

class lol : public QMainWindow
{
    Q_OBJECT

public:
    explicit lol(QWidget *parent = 0);
    ~lol();
    void set_windowTitle();
private slots:
   // void on_pushButton_clicked();

private:
    Ui::lol *ui;
};

#endif // LOL_H
