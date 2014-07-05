/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_3;
    QWidget *gridLayoutWidget;
    QGridLayout *ohno;
    QLabel *labelBalance;
    QLabel *labelStake;
    QLabel *labelImmature;
    QLabel *labelTotal;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *ohno_4;
    QLabel *labelActive;
    QLabel *labelWalletStatus;
    QLabel *labelUnconfirmed;
    QLabel *labelNumTransactions;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame1;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_3;
    QListView *listTransactions;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(779, 517);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OverviewPage->sizePolicy().hasHeightForWidth());
        OverviewPage->setSizePolicy(sizePolicy);
        OverviewPage->setMaximumSize(QSize(800, 16777215));
        OverviewPage->setFocusPolicy(Qt::StrongFocus);
        OverviewPage->setStyleSheet(QString::fromUtf8("color:#505050;\n"
"font-family:'Proxima Nova Rg';font-size:13px"));
        gridLayout_2 = new QGridLayout(OverviewPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setContentsMargins(11, -1, -1, -1);
        label_5 = new QLabel(OverviewPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Proxima Nova Rg"));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 3, 1, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(331, 188));
        frame->setMaximumSize(QSize(331, 188));
        frame->setStyleSheet(QString::fromUtf8("background-image:url(:/icons/res/icons/balance.png);"));
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("background:transparent;color:#afa6cd;"));
        gridLayoutWidget = new QWidget(frame_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(120, 30, 181, 141));
        ohno = new QGridLayout(gridLayoutWidget);
        ohno->setObjectName(QString::fromUtf8("ohno"));
        ohno->setVerticalSpacing(0);
        ohno->setContentsMargins(0, 0, 0, 0);
        labelBalance = new QLabel(gridLayoutWidget);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setLayoutDirection(Qt::LeftToRight);
        labelBalance->setStyleSheet(QString::fromUtf8("color:#925c97;"));
        labelBalance->setText(QString::fromUtf8("<html><head/><body><p><span style=\" font-size:8pt;\">0 SC</span></p></body></html>"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        ohno->addWidget(labelBalance, 0, 0, 1, 1);

        labelStake = new QLabel(gridLayoutWidget);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setFont(font);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">0 SC</span></p></body></html>"));
        labelStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        ohno->addWidget(labelStake, 1, 0, 1, 1);

        labelImmature = new QLabel(gridLayoutWidget);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">0 SC</span></p></body></html>"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        ohno->addWidget(labelImmature, 2, 0, 1, 1);

        labelTotal = new QLabel(gridLayoutWidget);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        labelTotal->setStyleSheet(QString::fromUtf8("color:#925c97;"));
        labelTotal->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">0 SC</span></p></body></html>"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        ohno->addWidget(labelTotal, 4, 0, 1, 1);


        verticalLayout_4->addWidget(frame_3);


        verticalLayout_2->addWidget(frame);


        gridLayout_2->addLayout(verticalLayout_2, 6, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setMinimumSize(QSize(332, 188));
        frame_2->setMaximumSize(QSize(332, 188));
        frame_2->setLayoutDirection(Qt::RightToLeft);
        frame_2->setStyleSheet(QString::fromUtf8("background-image:url(:/icons/res/icons/detail.png);"));
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setStyleSheet(QString::fromUtf8("background:transparent;color:#508f6f;"));
        gridLayoutWidget_2 = new QWidget(frame_5);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(150, 30, 151, 141));
        ohno_4 = new QGridLayout(gridLayoutWidget_2);
        ohno_4->setObjectName(QString::fromUtf8("ohno_4"));
        ohno_4->setHorizontalSpacing(8);
        ohno_4->setVerticalSpacing(0);
        ohno_4->setContentsMargins(0, 6, 0, 0);
        labelActive = new QLabel(gridLayoutWidget_2);
        labelActive->setObjectName(QString::fromUtf8("labelActive"));
        labelActive->setFont(font);
        labelActive->setCursor(QCursor(Qt::IBeamCursor));
        labelActive->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">- </span></p></body></html>"));
        labelActive->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelActive->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        ohno_4->addWidget(labelActive, 2, 0, 1, 1);

        labelWalletStatus = new QLabel(gridLayoutWidget_2);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red;} "));
        labelWalletStatus->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" color:#d31360;\">Out of sync</span></p></body></html>"));
        labelWalletStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        ohno_4->addWidget(labelWalletStatus, 3, 0, 1, 1);

        labelUnconfirmed = new QLabel(gridLayoutWidget_2);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">0 SC</span></p></body></html>"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        ohno_4->addWidget(labelUnconfirmed, 0, 0, 1, 1);

        labelNumTransactions = new QLabel(gridLayoutWidget_2);
        labelNumTransactions->setObjectName(QString::fromUtf8("labelNumTransactions"));
        labelNumTransactions->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">0</span></p></body></html>"));
        labelNumTransactions->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        ohno_4->addWidget(labelNumTransactions, 1, 0, 1, 1);


        verticalLayout->addWidget(frame_5);


        verticalLayout_3->addWidget(frame_2);


        gridLayout_2->addLayout(verticalLayout_3, 6, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 6, 3, 2, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 4);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 4, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 5, 0, 3, 1);

        frame1 = new QFrame(OverviewPage);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        frame1->setMinimumSize(QSize(677, 235));
        frame1->setMaximumSize(QSize(677, 235));
        frame1->setStyleSheet(QString::fromUtf8("QFrame { font-size:12px;padding:5px;background-image:url(:/icons/res/icons/recent.png);padding-top:20px; }"));
        verticalLayout_6 = new QVBoxLayout(frame1);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_3);

        listTransactions = new QListView(frame1);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listTransactions->sizePolicy().hasHeightForWidth());
        listTransactions->setSizePolicy(sizePolicy2);
        listTransactions->setMinimumSize(QSize(664, 180));
        listTransactions->setMaximumSize(QSize(664, 200));
        listTransactions->setStyleSheet(QString::fromUtf8("background:transparent;color:#a0a7b6;"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_6->addWidget(listTransactions);


        gridLayout_2->addWidget(frame1, 7, 1, 1, 2);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OverviewPage", "<html><head/><body><p align=\"center\"><img src=\":/icons/dash\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Total number of transactions in wallet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelActive->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Silkcoin network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelNumTransactions->setToolTip(QApplication::translate("OverviewPage", "Total number of transactions in wallet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
