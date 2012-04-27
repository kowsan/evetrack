#include "watchform.h"
#include "ui_watchform.h"

WatchForm::WatchForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WatchForm)
{
    ui->setupUi(this);
    this->setAttribute (Qt::WA_DeleteOnClose);
    this->setWindowTitle (tr("Adding account to watch"));
    this->setWindowFlags (Qt::Dialog );
    this->setFixedSize(this->size());

}

WatchForm::~WatchForm()
{
    delete ui;
}
