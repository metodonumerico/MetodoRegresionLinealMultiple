#ifndef RMULTIPLE_H
#define RMULTIPLE_H

#include <QMainWindow>

namespace Ui {
class rmultiple;
}

class rmultiple : public QMainWindow
{
    Q_OBJECT

public:
    explicit rmultiple(QWidget *parent = 0);
    ~rmultiple();
private slots:
    void calcular();
    void borrar();
private:
    Ui::rmultiple *ui;
};

#endif // RMULTIPLE_H
