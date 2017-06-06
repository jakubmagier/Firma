/********************************************************************************
** Form generated from reading UI file 'firma.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRMA_H
#define UI_FIRMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirmaClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *przycisk1;
    QPushButton *przycisk2;
    QPushButton *przycisk3;
    QPushButton *przycisk4;
    QPushButton *przycisk5;
    QPushButton *przycisk6;
    QPushButton *przyciskZamknij;
    QLabel *label;
    QTextBrowser *poleTekstowe;
    QListWidget *listaObiektow;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FirmaClass)
    {
        if (FirmaClass->objectName().isEmpty())
            FirmaClass->setObjectName(QStringLiteral("FirmaClass"));
        FirmaClass->resize(600, 502);
        centralWidget = new QWidget(FirmaClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 160, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        przycisk1 = new QPushButton(verticalLayoutWidget);
        przycisk1->setObjectName(QStringLiteral("przycisk1"));

        verticalLayout->addWidget(przycisk1);

        przycisk2 = new QPushButton(verticalLayoutWidget);
        przycisk2->setObjectName(QStringLiteral("przycisk2"));

        verticalLayout->addWidget(przycisk2);

        przycisk3 = new QPushButton(verticalLayoutWidget);
        przycisk3->setObjectName(QStringLiteral("przycisk3"));
        przycisk3->setEnabled(true);

        verticalLayout->addWidget(przycisk3);

        przycisk4 = new QPushButton(verticalLayoutWidget);
        przycisk4->setObjectName(QStringLiteral("przycisk4"));

        verticalLayout->addWidget(przycisk4);

        przycisk5 = new QPushButton(verticalLayoutWidget);
        przycisk5->setObjectName(QStringLiteral("przycisk5"));

        verticalLayout->addWidget(przycisk5);

        przycisk6 = new QPushButton(verticalLayoutWidget);
        przycisk6->setObjectName(QStringLiteral("przycisk6"));

        verticalLayout->addWidget(przycisk6);

        przyciskZamknij = new QPushButton(centralWidget);
        przyciskZamknij->setObjectName(QStringLiteral("przyciskZamknij"));
        przyciskZamknij->setGeometry(QRect(430, 270, 111, 51));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 270, 81, 16));
        poleTekstowe = new QTextBrowser(centralWidget);
        poleTekstowe->setObjectName(QStringLiteral("poleTekstowe"));
        poleTekstowe->setGeometry(QRect(260, 30, 256, 192));
        listaObiektow = new QListWidget(centralWidget);
        listaObiektow->setObjectName(QStringLiteral("listaObiektow"));
        listaObiektow->setGeometry(QRect(110, 260, 201, 151));
        FirmaClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FirmaClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        FirmaClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FirmaClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FirmaClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FirmaClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FirmaClass->setStatusBar(statusBar);

        retranslateUi(FirmaClass);
        QObject::connect(przyciskZamknij, SIGNAL(clicked()), FirmaClass, SLOT(close()));
        QObject::connect(przycisk3, SIGNAL(clicked()), FirmaClass, SLOT(otworzTworzenieObiektu()));
        QObject::connect(przycisk4, SIGNAL(clicked()), FirmaClass, SLOT(usunObiekt()));
        QObject::connect(przycisk1, SIGNAL(clicked()), FirmaClass, SLOT(wyswietlStan()));
        QObject::connect(przycisk2, SIGNAL(clicked()), FirmaClass, SLOT(wyswietlDaneWybranego()));

        QMetaObject::connectSlotsByName(FirmaClass);
    } // setupUi

    void retranslateUi(QMainWindow *FirmaClass)
    {
        FirmaClass->setWindowTitle(QApplication::translate("FirmaClass", "Firma", Q_NULLPTR));
        przycisk1->setText(QApplication::translate("FirmaClass", "Wyswietl cala baze", Q_NULLPTR));
        przycisk2->setText(QApplication::translate("FirmaClass", "Wyswietl dane (wybranego)", Q_NULLPTR));
        przycisk3->setText(QApplication::translate("FirmaClass", "Dodaj obiekt", Q_NULLPTR));
        przycisk4->setText(QApplication::translate("FirmaClass", "Usun (wybrany)", Q_NULLPTR));
        przycisk5->setText(QApplication::translate("FirmaClass", "Zapisz do pliku", Q_NULLPTR));
        przycisk6->setText(QApplication::translate("FirmaClass", "Wczytaj z pliku", Q_NULLPTR));
        przyciskZamknij->setText(QApplication::translate("FirmaClass", "ZAMKNIJ", Q_NULLPTR));
        label->setText(QApplication::translate("FirmaClass", "Lista obiektow:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FirmaClass: public Ui_FirmaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRMA_H
