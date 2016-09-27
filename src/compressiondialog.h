#ifndef COMPRESSIONDIALOG_H
#define COMPRESSIONDIALOG_H

#include <QDialog>

namespace Ui {
class CompressionDialog;
}

class CompressionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CompressionDialog(QWidget *parent = 0);
    ~CompressionDialog();

    int quality() const;
private slots:
    void on_horizontalSlider_sliderMoved(int position);

private:
    Ui::CompressionDialog *ui;
};

#endif // COMPRESSIONDIALOG_H