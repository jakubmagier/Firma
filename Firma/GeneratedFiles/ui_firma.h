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
    QLabel *miejsceZdjecia;
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
        verticalLayoutWidget->setGeometry(QRect(20, 20, 183, 227));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        przycisk1 = new QPushButton(verticalLayoutWidget);
        przycisk1->setObjectName(QStringLiteral("przycisk1"));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        przycisk1->setFont(font);

        verticalLayout->addWidget(przycisk1);

        przycisk2 = new QPushButton(verticalLayoutWidget);
        przycisk2->setObjectName(QStringLiteral("przycisk2"));
        przycisk2->setEnabled(true);
        przycisk2->setFont(font);

        verticalLayout->addWidget(przycisk2);

        przycisk3 = new QPushButton(verticalLayoutWidget);
        przycisk3->setObjectName(QStringLiteral("przycisk3"));
        przycisk3->setFont(font);

        verticalLayout->addWidget(przycisk3);

        przycisk4 = new QPushButton(verticalLayoutWidget);
        przycisk4->setObjectName(QStringLiteral("przycisk4"));
        przycisk4->setFont(font);

        verticalLayout->addWidget(przycisk4);

        przycisk5 = new QPushButton(verticalLayoutWidget);
        przycisk5->setObjectName(QStringLiteral("przycisk5"));
        przycisk5->setFont(font);

        verticalLayout->addWidget(przycisk5);

        przycisk6 = new QPushButton(verticalLayoutWidget);
        przycisk6->setObjectName(QStringLiteral("przycisk6"));
        przycisk6->setFont(font);

        verticalLayout->addWidget(przycisk6);

        przyciskZamknij = new QPushButton(centralWidget);
        przyciskZamknij->setObjectName(QStringLiteral("przyciskZamknij"));
        przyciskZamknij->setGeometry(QRect(480, 390, 111, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Kalinga"));
        font1.setPointSize(14);
        przyciskZamknij->setFont(font1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 250, 141, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Algerian"));
        font2.setPointSize(12);
        label->setFont(font2);
        poleTekstowe = new QTextBrowser(centralWidget);
        poleTekstowe->setObjectName(QStringLiteral("poleTekstowe"));
        poleTekstowe->setGeometry(QRect(250, 20, 256, 192));
        QFont font3;
        font3.setPointSize(10);
        poleTekstowe->setFont(font3);
        listaObiektow = new QListWidget(centralWidget);
        listaObiektow->setObjectName(QStringLiteral("listaObiektow"));
        listaObiektow->setGeometry(QRect(30, 270, 201, 151));
        listaObiektow->setFrameShape(QFrame::WinPanel);
        listaObiektow->setFrameShadow(QFrame::Sunken);
        miejsceZdjecia = new QLabel(centralWidget);
        miejsceZdjecia->setObjectName(QStringLiteral("miejsceZdjecia"));
        miejsceZdjecia->setGeometry(QRect(270, 230, 181, 151));
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
        QObject::connect(przycisk2, SIGNAL(clicked()), FirmaClass, SLOT(otworzTworzenieObiektu()));
        QObject::connect(przycisk3, SIGNAL(clicked()), FirmaClass, SLOT(usunObiekt()));
        QObject::connect(przycisk1, SIGNAL(clicked()), FirmaClass, SLOT(wyswietlStan()));
        QObject::connect(listaObiektow, SIGNAL(itemPressed(QListWidgetItem*)), FirmaClass, SLOT(wyswietlDaneWybranego()));
        QObject::connect(przycisk6, SIGNAL(clicked()), FirmaClass, SLOT(wczytajPlik()));
        QObject::connect(przycisk4, SIGNAL(clicked()), FirmaClass, SLOT(zapiszDoObecnego()));
        QObject::connect(przycisk5, SIGNAL(clicked()), FirmaClass, SLOT(zapiszJako()));

        QMetaObject::connectSlotsByName(FirmaClass);
    } // setupUi

    void retranslateUi(QMainWindow *FirmaClass)
    {
        FirmaClass->setWindowTitle(QApplication::translate("FirmaClass", "Firma", Q_NULLPTR));
        przycisk1->setText(QApplication::translate("FirmaClass", "Wyswietl cala baze", Q_NULLPTR));
        przycisk2->setText(QApplication::translate("FirmaClass", "Dodaj obiekt", Q_NULLPTR));
        przycisk3->setText(QApplication::translate("FirmaClass", "Usun (zaznaczony obiekt)", Q_NULLPTR));
        przycisk4->setText(QApplication::translate("FirmaClass", "Zapisz", Q_NULLPTR));
        przycisk5->setText(QApplication::translate("FirmaClass", "Zapisz jako", Q_NULLPTR));
        przycisk6->setText(QApplication::translate("FirmaClass", "Wczytaj z pliku", Q_NULLPTR));
        przyciskZamknij->setText(QApplication::translate("FirmaClass", "ZAMKNIJ", Q_NULLPTR));
        label->setText(QApplication::translate("FirmaClass", "Lista obiektow:", Q_NULLPTR));
        miejsceZdjecia->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FirmaClass: public Ui_FirmaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRMA_H
