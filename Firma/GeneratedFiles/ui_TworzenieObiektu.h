/********************************************************************************
** Form generated from reading UI file 'TworzenieObiektu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWORZENIEOBIEKTU_H
#define UI_TWORZENIEOBIEKTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QListWidget *listaTypow;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *poleNazwa;
    QLabel *label_3;
    QLineEdit *poleWlasciciel;
    QLabel *label_5;
    QLineEdit *poleNrTel;
    QLabel *label_4;
    QLineEdit *poleAdres;
    QLabel *label_6;
    QLineEdit *poleAdresDomeny;
    QLabel *label_7;
    QLineEdit *poleLiczbaPracownikow;
    QLabel *label_8;
    QLineEdit *poleLiczba;
    QPushButton *przyciskUtworzObiekt;
    QPushButton *przyciskAnuluj;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 390);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 71, 21));
        listaTypow = new QListWidget(Dialog);
        new QListWidgetItem(listaTypow);
        new QListWidgetItem(listaTypow);
        new QListWidgetItem(listaTypow);
        listaTypow->setObjectName(QStringLiteral("listaTypow"));
        listaTypow->setGeometry(QRect(90, 20, 211, 41));
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 70, 267, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        poleNazwa = new QLineEdit(verticalLayoutWidget);
        poleNazwa->setObjectName(QStringLiteral("poleNazwa"));

        verticalLayout->addWidget(poleNazwa);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        poleWlasciciel = new QLineEdit(verticalLayoutWidget);
        poleWlasciciel->setObjectName(QStringLiteral("poleWlasciciel"));

        verticalLayout->addWidget(poleWlasciciel);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        poleNrTel = new QLineEdit(verticalLayoutWidget);
        poleNrTel->setObjectName(QStringLiteral("poleNrTel"));

        verticalLayout->addWidget(poleNrTel);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        poleAdres = new QLineEdit(verticalLayoutWidget);
        poleAdres->setObjectName(QStringLiteral("poleAdres"));

        verticalLayout->addWidget(poleAdres);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        poleAdresDomeny = new QLineEdit(verticalLayoutWidget);
        poleAdresDomeny->setObjectName(QStringLiteral("poleAdresDomeny"));

        verticalLayout->addWidget(poleAdresDomeny);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        poleLiczbaPracownikow = new QLineEdit(verticalLayoutWidget);
        poleLiczbaPracownikow->setObjectName(QStringLiteral("poleLiczbaPracownikow"));

        verticalLayout->addWidget(poleLiczbaPracownikow);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        poleLiczba = new QLineEdit(verticalLayoutWidget);
        poleLiczba->setObjectName(QStringLiteral("poleLiczba"));

        verticalLayout->addWidget(poleLiczba);

        przyciskUtworzObiekt = new QPushButton(Dialog);
        przyciskUtworzObiekt->setObjectName(QStringLiteral("przyciskUtworzObiekt"));
        przyciskUtworzObiekt->setGeometry(QRect(310, 120, 75, 161));
        przyciskAnuluj = new QPushButton(Dialog);
        przyciskAnuluj->setObjectName(QStringLiteral("przyciskAnuluj"));
        przyciskAnuluj->setGeometry(QRect(310, 310, 75, 41));

        retranslateUi(Dialog);
        QObject::connect(przyciskUtworzObiekt, SIGNAL(clicked()), Dialog, SLOT(close()));
        QObject::connect(przyciskAnuluj, SIGNAL(clicked()), Dialog, SLOT(close()));
        QObject::connect(listaTypow, SIGNAL(itemPressed(QListWidgetItem*)), Dialog, SLOT(ukrywaniePol()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "Typ obiektu:", Q_NULLPTR));

        const bool __sortingEnabled = listaTypow->isSortingEnabled();
        listaTypow->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listaTypow->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Dialog", "Ksiegarnia internetowa", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listaTypow->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Dialog", "Ksiegarnia stacjonarna", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listaTypow->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Dialog", "Drukarnia", Q_NULLPTR));
        listaTypow->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("Dialog", "Nazwa: ", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "Wlasciciel:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "Nr telefonu:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "Adres (ulica) - drukarnia i ksiegarnia stacjonarna:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "Adres domeny - ksiegarnia internetowa:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "Liczba pracownikow:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog", "Liczba ksiazek/drukarek - zaleznie jaki obiekt tworzymy:", Q_NULLPTR));
        przyciskUtworzObiekt->setText(QApplication::translate("Dialog", "Utworz obiekt", Q_NULLPTR));
        przyciskAnuluj->setText(QApplication::translate("Dialog", "Anuluj", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWORZENIEOBIEKTU_H
