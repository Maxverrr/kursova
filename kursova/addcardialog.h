#ifndef ADDCARDIALOG_H
#define ADDCARDIALOG_H

#include <QDialog>

namespace Ui {
class AddCarDialog;
}

class AddCarDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddCarDialog(QWidget *parent = nullptr);
    ~AddCarDialog();

    QString getName() const;
    QString getBodyType() const;
    QString getCarType() const;
    double getEngineVolume() const;
    int getHorsePower() const;
    QString getFuelType() const;
    double getFuelConsumption() const;
    QString getColor() const;
    double getRentalPrice() const;
    QString getIsAvailable() const;

private slots:
    void on_pbAccepted_clicked();

private:
    Ui::AddCarDialog *ui;
    QByteArray photoData;
};

#endif // ADDCARDIALOG_H
