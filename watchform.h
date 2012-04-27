#ifndef WATCHFORM_H
#define WATCHFORM_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class WatchForm;
}

class WatchForm : public QDialog
{
    Q_OBJECT

public:
    explicit WatchForm(QWidget *parent = 0);
    ~WatchForm();

private:
    Ui::WatchForm *ui;
};

#endif // WATCHFORM_H
