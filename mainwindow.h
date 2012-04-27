#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();
     void activateWnd(QSystemTrayIcon::ActivationReason rs);

private:
    Ui::MainWindow *ui;
    QSystemTrayIcon *ico;
};

#endif // MAINWINDOW_H
