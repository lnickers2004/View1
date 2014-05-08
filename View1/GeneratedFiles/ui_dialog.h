/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *DialogClass)
    {
        if (DialogClass->objectName().isEmpty())
            DialogClass->setObjectName(QStringLiteral("DialogClass"));
        DialogClass->resize(600, 400);
        verticalLayout = new QVBoxLayout(DialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(DialogClass);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);


        retranslateUi(DialogClass);

        QMetaObject::connectSlotsByName(DialogClass);
    } // setupUi

    void retranslateUi(QDialog *DialogClass)
    {
        DialogClass->setWindowTitle(QApplication::translate("DialogClass", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogClass: public Ui_DialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
