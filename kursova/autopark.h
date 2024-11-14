#ifndef AUTOPARK_H
#define AUTOPARK_H

#include <QDialog>

namespace Ui {
class autopark;
}

class autopark : public QDialog
{
    Q_OBJECT

public:
    explicit autopark(QWidget *parent = nullptr);
    ~autopark();

private:
    Ui::autopark *ui;
};

#endif // AUTOPARK_H
