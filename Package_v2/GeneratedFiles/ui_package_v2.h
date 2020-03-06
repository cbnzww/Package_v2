/********************************************************************************
** Form generated from reading UI file 'package_v2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKAGE_V2_H
#define UI_PACKAGE_V2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Package_v2Class
{
public:

    void setupUi(QWidget *Package_v2Class)
    {
        if (Package_v2Class->objectName().isEmpty())
            Package_v2Class->setObjectName(QStringLiteral("Package_v2Class"));
        Package_v2Class->resize(600, 400);

        retranslateUi(Package_v2Class);

        QMetaObject::connectSlotsByName(Package_v2Class);
    } // setupUi

    void retranslateUi(QWidget *Package_v2Class)
    {
        Package_v2Class->setWindowTitle(QApplication::translate("Package_v2Class", "Package_v2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Package_v2Class: public Ui_Package_v2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKAGE_V2_H
