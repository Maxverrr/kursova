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
    QByteArray getPhoto() const;

private slots:
    void on_pbAccepted_clicked();
    void on_pbAddPhoto_clicked();

    void on_availableCheckBox_checkStateChanged(const Qt::CheckState &arg1);

private:
    Ui::AddCarDialog *ui;
    QByteArray photoData;
};

#endif // ADDCARDIALOG_H
