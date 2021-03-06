#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class DialogWindow : public QDialog
{
    Q_OBJECT
private:
    QLabel* message;
    QLineEdit* input;
    QPushButton* ok;
    QPushButton* cancel;
public:
    DialogWindow(QWidget* parent = nullptr);
signals:
    void fileNameEntered(QString str);
private slots:
    void on_text_changed(QString str);
    void on_ok_button_clicked();
    void on_cancel_button_clicked();

};

#endif // DIALOGWINDOW_H
