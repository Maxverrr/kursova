#ifndef SUV_H
#define SUV_H

#include <QDialog>

namespace Ui {
class Suv;
}

class Suv : public QDialog
{
    Q_OBJECT

public:
    explicit Suv(QWidget *parent = nullptr);
    ~Suv();

private:
    Ui::Suv *ui;
    void loadSUVs();
};

#endif // SUV_H
