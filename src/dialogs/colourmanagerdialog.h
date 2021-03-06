/*
    This file is part of Photoflare.

    Photoflare is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Photoflare is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Photoflare.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef COLOURMANAGERDIALOG_H
#define COLOURMANAGERDIALOG_H

#include <QDialog>

namespace Ui {
class colourManagerDialog;
}

class colourManagerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit colourManagerDialog(QWidget *parent = 0);
    ~colourManagerDialog();

private slots:
    void on_addButton_clicked();

    void on_removeButton_clicked();

    QColor getColorFromLabel(QWidget *colorLabel) const;

    void addColourToPalette();

private:
    Ui::colourManagerDialog *ui;
};

#endif // COLOURMANAGERDIALOG_H
