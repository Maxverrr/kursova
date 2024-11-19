#ifndef ADDCLIENTDIALOG_H
#define ADDCLIENTDIALOG_H

#include <QDialog>

namespace Ui {
class AddClientDialog;
}

class AddClientDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddClientDialog(QWidget *parent = nullptr);
    ~AddClientDialog();

    QString getPhoneNumber() const;
    QString getEmail() const;
    QString getFirstName() const;
    QString getSurname() const;
    QString getMiddleName() const;
    QString getRentedCarName() const;

    void setRentedCarName(const QString &carName);

signals:
    void clientAccepted();

private slots:
    void on_pbAcceptClient_clicked();  // Слот для обробки натискання кнопки

private:
    Ui::AddClientDialog *ui;
};

#endif // ADDCLIENTDIALOG_H
