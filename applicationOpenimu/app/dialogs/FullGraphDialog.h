#ifndef FULLGRAPHDIALOH_H
#define FULLGRAPHDIALOH_H

#include <QDialog>
#include "../acquisition/WimuAcquisition.h"
#include "../widgets/AccDataDisplay2.h"

namespace Ui {
class FullGraphDialog;
}

class FullGraphDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FullGraphDialog(QWidget *parent = 0);
    ~FullGraphDialog();
    AccDataDisplay2* getAccDataDisplay();
    void prepareDisplay(WimuAcquisition acceleroData, RecordInfo recordInfo);
private:
    Ui::FullGraphDialog *ui;
    AccDataDisplay2* m_dataDisplay;
};

#endif // FULLGRAPHDIALOH_H
