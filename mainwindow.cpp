#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "watchform.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ico = new QSystemTrayIcon(this);
    ico->setIcon (QIcon(":/img/res/Contact.png"));
    ico->setVisible (true);
    connect (ico,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(activateWnd(QSystemTrayIcon::ActivationReason)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ico->showMessage ("EVEHelper","Find location",QSystemTrayIcon::Warning,5000);
    WatchForm *wf = new WatchForm(0);
    //wf->setWindowModality (Qt::WindowModal);
    wf->exec ();

}

void MainWindow::activateWnd(QSystemTrayIcon::ActivationReason rs)
{
    if (rs ==QSystemTrayIcon::Trigger)
    {
        qDebug ()<<"Activated";
        raise ();
        this->setWindowState(this->windowState() & ~Qt::WindowMinimized | Qt::WindowActive);
        activateWindow ();
    }

}
