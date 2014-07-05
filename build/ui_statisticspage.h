/********************************************************************************
** Form generated from reading UI file 'statisticspage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICSPAGE_H
#define UI_STATISTICSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatisticsPage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QFrame *gridFrame_2;
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout_2;
    QLabel *label_14;
    QLabel *heightBox;
    QLabel *label_12;
    QLabel *rewardBox;
    QLabel *label_13;
    QLabel *diffBox;
    QLabel *label_9;
    QLabel *diffBox2;
    QLabel *label_16;
    QLabel *pawrateBox;
    QLabel *label3_2;
    QLabel *localBox;
    QLabel *label1_2;
    QLabel *connectionBox;
    QLabel *label_8;
    QLabel *volumeBox;
    QLabel *label_10;
    QLabel *minBox;
    QLabel *label_11;
    QLabel *maxBox;
    QLabel *label_17;
    QLabel *marketcap;
    QFrame *frame;
    QPushButton *startButton;
    QLabel *label;
    QProgressBar *progressBar;
    QLabel *cBox;

    void setupUi(QWidget *StatisticsPage)
    {
        if (StatisticsPage->objectName().isEmpty())
            StatisticsPage->setObjectName(QString::fromUtf8("StatisticsPage"));
        StatisticsPage->setWindowModality(Qt::NonModal);
        StatisticsPage->resize(681, 505);
        StatisticsPage->setStyleSheet(QString::fromUtf8("color:#505050;\n"
"font-family:'Proxima Nova Rg';"));
        gridLayout = new QGridLayout(StatisticsPage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(52, -1, 22, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(StatisticsPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 2);

        gridFrame_2 = new QFrame(StatisticsPage);
        gridFrame_2->setObjectName(QString::fromUtf8("gridFrame_2"));
        gridLayout_4 = new QGridLayout(gridFrame_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_2->setHorizontalSpacing(78);
        formLayout_2->setVerticalSpacing(18);
        formLayout_2->setContentsMargins(-1, -1, 0, -1);
        label_14 = new QLabel(gridFrame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_14);

        heightBox = new QLabel(gridFrame_2);
        heightBox->setObjectName(QString::fromUtf8("heightBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, heightBox);

        label_12 = new QLabel(gridFrame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_12);

        rewardBox = new QLabel(gridFrame_2);
        rewardBox->setObjectName(QString::fromUtf8("rewardBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, rewardBox);

        label_13 = new QLabel(gridFrame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_13);

        diffBox = new QLabel(gridFrame_2);
        diffBox->setObjectName(QString::fromUtf8("diffBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, diffBox);

        label_9 = new QLabel(gridFrame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_9);

        diffBox2 = new QLabel(gridFrame_2);
        diffBox2->setObjectName(QString::fromUtf8("diffBox2"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, diffBox2);

        label_16 = new QLabel(gridFrame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_16);

        pawrateBox = new QLabel(gridFrame_2);
        pawrateBox->setObjectName(QString::fromUtf8("pawrateBox"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, pawrateBox);

        label3_2 = new QLabel(gridFrame_2);
        label3_2->setObjectName(QString::fromUtf8("label3_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label3_2->sizePolicy().hasHeightForWidth());
        label3_2->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label3_2);

        localBox = new QLabel(gridFrame_2);
        localBox->setObjectName(QString::fromUtf8("localBox"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, localBox);

        label1_2 = new QLabel(gridFrame_2);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label1_2);

        connectionBox = new QLabel(gridFrame_2);
        connectionBox->setObjectName(QString::fromUtf8("connectionBox"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, connectionBox);

        label_8 = new QLabel(gridFrame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_8);

        volumeBox = new QLabel(gridFrame_2);
        volumeBox->setObjectName(QString::fromUtf8("volumeBox"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, volumeBox);

        label_10 = new QLabel(gridFrame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_10);

        minBox = new QLabel(gridFrame_2);
        minBox->setObjectName(QString::fromUtf8("minBox"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, minBox);

        label_11 = new QLabel(gridFrame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_11);

        maxBox = new QLabel(gridFrame_2);
        maxBox->setObjectName(QString::fromUtf8("maxBox"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, maxBox);

        label_17 = new QLabel(gridFrame_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_2->setWidget(11, QFormLayout::LabelRole, label_17);

        marketcap = new QLabel(gridFrame_2);
        marketcap->setObjectName(QString::fromUtf8("marketcap"));

        formLayout_2->setWidget(11, QFormLayout::FieldRole, marketcap);


        gridLayout_4->addLayout(formLayout_2, 2, 0, 2, 1);


        gridLayout->addWidget(gridFrame_2, 5, 0, 1, 1);

        frame = new QFrame(StatisticsPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(260, 0));
        startButton = new QPushButton(frame);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(60, 270, 151, 60));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy1);
        startButton->setMinimumSize(QSize(120, 60));
        startButton->setStyleSheet(QString::fromUtf8("background:none;border:1px solid grey"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 231, 191));
        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(60, 230, 151, 23));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        cBox = new QLabel(frame);
        cBox->setObjectName(QString::fromUtf8("cBox"));
        cBox->setGeometry(QRect(90, 200, 91, 20));

        gridLayout->addWidget(frame, 5, 1, 1, 1);


        retranslateUi(StatisticsPage);

        QMetaObject::connectSlotsByName(StatisticsPage);
    } // setupUi

    void retranslateUi(QWidget *StatisticsPage)
    {
        StatisticsPage->setWindowTitle(QApplication::translate("StatisticsPage", "Digging", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p align=\"center\"><img src=\":/icons/res/icons/statisticst.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>Block Height</p></body></html>", 0, QApplication::UnicodeUTF8));
        heightBox->setText(QApplication::translate("StatisticsPage", "00000", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>POW Block Reward</p></body></html>", 0, QApplication::UnicodeUTF8));
        rewardBox->setText(QApplication::translate("StatisticsPage", "10000", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>POW difficulty</p></body></html>", 0, QApplication::UnicodeUTF8));
        diffBox->setText(QApplication::translate("StatisticsPage", "0.0002", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>POS difficulty</p></body></html>", 0, QApplication::UnicodeUTF8));
        diffBox2->setText(QApplication::translate("StatisticsPage", "0.0002", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>Net Hashrate</p></body></html>", 0, QApplication::UnicodeUTF8));
        pawrateBox->setText(QApplication::translate("StatisticsPage", "0 MH/s", 0, QApplication::UnicodeUTF8));
        label3_2->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>Last block time</p></body></html>", 0, QApplication::UnicodeUTF8));
        localBox->setText(QApplication::translate("StatisticsPage", "0 KH/s", 0, QApplication::UnicodeUTF8));
        label1_2->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>Connections</p></body></html>", 0, QApplication::UnicodeUTF8));
        connectionBox->setText(QApplication::translate("StatisticsPage", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>Total Volume</p></body></html>", 0, QApplication::UnicodeUTF8));
        volumeBox->setText(QApplication::translate("StatisticsPage", "250", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>Total stake weight</p></body></html>", 0, QApplication::UnicodeUTF8));
        minBox->setText(QApplication::translate("StatisticsPage", "0", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>Network stake weight</p></body></html>", 0, QApplication::UnicodeUTF8));
        maxBox->setText(QApplication::translate("StatisticsPage", "0", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p>Market Cap</p></body></html>", 0, QApplication::UnicodeUTF8));
        marketcap->setText(QApplication::translate("StatisticsPage", "0$", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("StatisticsPage", "Update Statistics", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; text-decoration: underline;\">Silkcoin phases:</span><br/></p><p align=\"center\">1) Block 1 to 10k - POW/POS</p><p align=\"center\">2) Block 10k to 50k - Full POS</p><p align=\"center\">3) Block 50k to 60k - POW/POS</p><p align=\"center\">4) Block 60k+, full POS<br/></p><p align=\"center\"><span style=\" font-size:12pt; text-decoration: underline;\">Current Phase:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        cBox->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p align=\"center\">(1) POW - POS</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StatisticsPage: public Ui_StatisticsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICSPAGE_H
