/********************************************************************************
** Form generated from reading UI file 'view1.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW1_H
#define UI_VIEW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_View1Class
{
public:

    void setupUi(QDialog *View1Class)
    {
        if (View1Class->objectName().isEmpty())
            View1Class->setObjectName(QStringLiteral("View1Class"));
        View1Class->resize(600, 400);

        retranslateUi(View1Class);

        QMetaObject::connectSlotsByName(View1Class);
    } // setupUi

    void retranslateUi(QDialog *View1Class)
    {
        View1Class->setWindowTitle(QApplication::translate("View1Class", "View1", 0));
    } // retranslateUi

};

namespace Ui {
    class View1Class: public Ui_View1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW1_H
