/********************************************************************************
** Form generated from reading UI file 'poolbrowser.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POOLBROWSER_H
#define UI_POOLBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_PoolBrowser
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QLabel *label_13;
    QLabel *bitcoin;
    QLabel *label_31;
    QLineEdit *egals;
    QLabel *egald;
    QPushButton *egal;
    QTabWidget *All;
    QWidget *tab_3;
    QPushButton *startButton;
    QPushButton *bittrex;
    QPushButton *poloniex;
    QTabWidget *tabWidget;
    QWidget *mains;
    QWidget *view1;
    QLabel *so;
    QWidget *Last_2;
    QLabel *label_4;
    QLabel *ask;
    QLabel *asku;
    QWidget *Last_3;
    QLabel *label_10;
    QLabel *bid;
    QLabel *bidu;
    QLabel *label_22;
    QLabel *label_24;
    QWidget *Last;
    QLabel *label;
    QLabel *last;
    QLabel *lastu;
    QLabel *yest;
    QWidget *widget_6;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *volumeu;
    QLabel *high;
    QLabel *volumes;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *volumeb;
    QLabel *low;
    QLabel *label_5;
    QLabel *label_23;
    QLabel *bo;
    QLabel *label_30;
    QTreeWidget *buyquan;
    QTreeWidget *sellquan;
    QLabel *label_33;
    QWidget *graphs;
    QFrame *view2;
    QCustomPlot *customPlot;
    QLabel *label_3;
    QTreeWidget *trades;
    QLabel *label_6;
    QCustomPlot *customPlot2;
    QWidget *tab_4;
    QLabel *label_2;

    void setupUi(QWidget *PoolBrowser)
    {
        if (PoolBrowser->objectName().isEmpty())
            PoolBrowser->setObjectName(QString::fromUtf8("PoolBrowser"));
        PoolBrowser->setWindowModality(Qt::NonModal);
        PoolBrowser->resize(761, 509);
        PoolBrowser->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(PoolBrowser);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(52, -1, 22, -1);
        widget_5 = new QWidget(PoolBrowser);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(0, 30));
        widget_5->setBaseSize(QSize(0, 30));
        label_13 = new QLabel(widget_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(500, 0, 81, 31));
        bitcoin = new QLabel(widget_5);
        bitcoin->setObjectName(QString::fromUtf8("bitcoin"));
        bitcoin->setGeometry(QRect(590, 0, 71, 31));
        label_31 = new QLabel(widget_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(10, 5, 111, 21));
        egals = new QLineEdit(widget_5);
        egals->setObjectName(QString::fromUtf8("egals"));
        egals->setGeometry(QRect(130, 5, 121, 21));
        egald = new QLabel(widget_5);
        egald->setObjectName(QString::fromUtf8("egald"));
        egald->setGeometry(QRect(320, 0, 181, 31));
        egal = new QPushButton(widget_5);
        egal->setObjectName(QString::fromUtf8("egal"));
        egal->setGeometry(QRect(260, 6, 51, 20));
        egal->setStyleSheet(QString::fromUtf8("height:10px;"));

        gridLayout->addWidget(widget_5, 0, 0, 1, 1);

        All = new QTabWidget(PoolBrowser);
        All->setObjectName(QString::fromUtf8("All"));
        All->setStyleSheet(QString::fromUtf8("QTabWidget {background:#eae9ee;}"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tab_3->setStyleSheet(QString::fromUtf8("background:#eae9ee;"));
        startButton = new QPushButton(tab_3);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(470, 390, 120, 31));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);
        startButton->setMinimumSize(QSize(120, 20));
        bittrex = new QPushButton(tab_3);
        bittrex->setObjectName(QString::fromUtf8("bittrex"));
        bittrex->setGeometry(QRect(340, 390, 120, 30));
        sizePolicy.setHeightForWidth(bittrex->sizePolicy().hasHeightForWidth());
        bittrex->setSizePolicy(sizePolicy);
        bittrex->setMinimumSize(QSize(120, 30));
        poloniex = new QPushButton(tab_3);
        poloniex->setObjectName(QString::fromUtf8("poloniex"));
        poloniex->setGeometry(QRect(210, 390, 120, 30));
        sizePolicy.setHeightForWidth(poloniex->sizePolicy().hasHeightForWidth());
        poloniex->setSizePolicy(sizePolicy);
        poloniex->setMinimumSize(QSize(120, 30));
        tabWidget = new QTabWidget(tab_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 671, 381));
        tabWidget->setStyleSheet(QString::fromUtf8("border:none;"));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Triangular);
        mains = new QWidget();
        mains->setObjectName(QString::fromUtf8("mains"));
        mains->setStyleSheet(QString::fromUtf8("border:none;\n"
"QTabBar::tab:selected, QTabBar::tab:hover {background:white;}"));
        view1 = new QWidget(mains);
        view1->setObjectName(QString::fromUtf8("view1"));
        view1->setGeometry(QRect(-10, -20, 681, 381));
        so = new QLabel(view1);
        so->setObjectName(QString::fromUtf8("so"));
        so->setGeometry(QRect(300, 160, 71, 16));
        Last_2 = new QWidget(view1);
        Last_2->setObjectName(QString::fromUtf8("Last_2"));
        Last_2->setGeometry(QRect(130, 60, 111, 81));
        Last_2->setStyleSheet(QString::fromUtf8("border-right:1px solid black;"));
        label_4 = new QLabel(Last_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 71, 31));
        label_4->setStyleSheet(QString::fromUtf8("border:none;"));
        ask = new QLabel(Last_2);
        ask->setObjectName(QString::fromUtf8("ask"));
        ask->setGeometry(QRect(10, 40, 91, 16));
        ask->setStyleSheet(QString::fromUtf8("border:none;"));
        asku = new QLabel(Last_2);
        asku->setObjectName(QString::fromUtf8("asku"));
        asku->setGeometry(QRect(10, 60, 91, 16));
        asku->setStyleSheet(QString::fromUtf8("border:none;"));
        Last_3 = new QWidget(view1);
        Last_3->setObjectName(QString::fromUtf8("Last_3"));
        Last_3->setGeometry(QRect(250, 60, 111, 81));
        label_10 = new QLabel(Last_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 10, 71, 31));
        label_10->setStyleSheet(QString::fromUtf8("border:none;"));
        bid = new QLabel(Last_3);
        bid->setObjectName(QString::fromUtf8("bid"));
        bid->setGeometry(QRect(10, 40, 91, 16));
        bidu = new QLabel(Last_3);
        bidu->setObjectName(QString::fromUtf8("bidu"));
        bidu->setGeometry(QRect(10, 60, 91, 16));
        label_22 = new QLabel(view1);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(20, 160, 101, 16));
        label_24 = new QLabel(view1);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(380, 20, 161, 21));
        Last = new QWidget(view1);
        Last->setObjectName(QString::fromUtf8("Last"));
        Last->setGeometry(QRect(10, 60, 111, 81));
        Last->setStyleSheet(QString::fromUtf8("border-right:1px solid black;"));
        label = new QLabel(Last);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 71, 31));
        label->setStyleSheet(QString::fromUtf8("border:none;"));
        last = new QLabel(Last);
        last->setObjectName(QString::fromUtf8("last"));
        last->setGeometry(QRect(10, 40, 91, 16));
        last->setStyleSheet(QString::fromUtf8("border:none;"));
        lastu = new QLabel(Last);
        lastu->setObjectName(QString::fromUtf8("lastu"));
        lastu->setGeometry(QRect(10, 60, 91, 16));
        lastu->setStyleSheet(QString::fromUtf8("border:none;"));
        yest = new QLabel(view1);
        yest->setObjectName(QString::fromUtf8("yest"));
        yest->setGeometry(QRect(130, 20, 161, 31));
        widget_6 = new QWidget(view1);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(370, 40, 311, 161));
        gridLayoutWidget = new QWidget(widget_6);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 291, 141));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 1, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 2, 0, 1, 1);

        volumeu = new QLabel(gridLayoutWidget);
        volumeu->setObjectName(QString::fromUtf8("volumeu"));

        gridLayout_2->addWidget(volumeu, 2, 1, 1, 1);

        high = new QLabel(gridLayoutWidget);
        high->setObjectName(QString::fromUtf8("high"));

        gridLayout_2->addWidget(high, 3, 1, 1, 1);

        volumes = new QLabel(gridLayoutWidget);
        volumes->setObjectName(QString::fromUtf8("volumes"));

        gridLayout_2->addWidget(volumes, 1, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 4, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 0, 0, 1, 1);

        volumeb = new QLabel(gridLayoutWidget);
        volumeb->setObjectName(QString::fromUtf8("volumeb"));

        gridLayout_2->addWidget(volumeb, 0, 1, 1, 1);

        low = new QLabel(gridLayoutWidget);
        low->setObjectName(QString::fromUtf8("low"));

        gridLayout_2->addWidget(low, 4, 1, 1, 1);

        label_5 = new QLabel(view1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(11, 21, 109, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans,sans-serif"));
        label_5->setFont(font);
        label_23 = new QLabel(view1);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(190, 160, 101, 16));
        bo = new QLabel(view1);
        bo->setObjectName(QString::fromUtf8("bo"));
        bo->setGeometry(QRect(130, 160, 31, 16));
        label_30 = new QLabel(view1);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(20, 220, 81, 16));
        buyquan = new QTreeWidget(view1);
        buyquan->setObjectName(QString::fromUtf8("buyquan"));
        buyquan->setGeometry(QRect(350, 240, 311, 121));
        sellquan = new QTreeWidget(view1);
        sellquan->setObjectName(QString::fromUtf8("sellquan"));
        sellquan->setGeometry(QRect(20, 240, 321, 121));
        sellquan->setAutoScrollMargin(8);
        sellquan->setIndentation(10);
        sellquan->setSortingEnabled(true);
        sellquan->setAnimated(true);
        sellquan->header()->setProperty("showSortIndicator", QVariant(true));
        label_33 = new QLabel(view1);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(350, 220, 71, 16));
        tabWidget->addTab(mains, QString());
        graphs = new QWidget();
        graphs->setObjectName(QString::fromUtf8("graphs"));
        view2 = new QFrame(graphs);
        view2->setObjectName(QString::fromUtf8("view2"));
        view2->setGeometry(QRect(0, 0, 681, 371));
        customPlot = new QCustomPlot(view2);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(0, 0, 341, 161));
        customPlot->setStyleSheet(QString::fromUtf8("background:none;"));
        label_3 = new QLabel(view2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 160, 261, 21));
        trades = new QTreeWidget(view2);
        trades->setObjectName(QString::fromUtf8("trades"));
        trades->setGeometry(QRect(10, 190, 641, 161));
        trades->setAutoScrollMargin(16);
        trades->setIndentation(10);
        trades->setSortingEnabled(true);
        trades->setAnimated(false);
        trades->setHeaderHidden(false);
        trades->header()->setCascadingSectionResizes(false);
        trades->header()->setHighlightSections(false);
        label_6 = new QLabel(view2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 161, 211, 20));
        customPlot2 = new QCustomPlot(view2);
        customPlot2->setObjectName(QString::fromUtf8("customPlot2"));
        customPlot2->setGeometry(QRect(340, 0, 321, 161));
        customPlot2->setStyleSheet(QString::fromUtf8("background:none;"));
        label_3->raise();
        customPlot->raise();
        trades->raise();
        label_6->raise();
        customPlot2->raise();
        tabWidget->addTab(graphs, QString());
        All->addTab(tab_3, QString());
        tabWidget->raise();
        poloniex->raise();
        startButton->raise();
        bittrex->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 50, 301, 271));
        label_2->setOpenExternalLinks(true);
        All->addTab(tab_4, QString());

        gridLayout->addWidget(All, 1, 0, 1, 1);


        retranslateUi(PoolBrowser);

        All->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PoolBrowser);
    } // setupUi

    void retranslateUi(QWidget *PoolBrowser)
    {
        PoolBrowser->setWindowTitle(QApplication::translate("PoolBrowser", "Digging", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-weight:600; color:#767676;\">Bitcoin Price</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        bitcoin->setText(QApplication::translate("PoolBrowser", "1000 $", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-weight:600; color:#767676;\">Convert Silkcoin :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        egald->setText(QApplication::translate("PoolBrowser", "0$ / 0 BTC", 0, QApplication::UnicodeUTF8));
        egal->setText(QApplication::translate("PoolBrowser", "=", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("PoolBrowser", "Update Prices", 0, QApplication::UnicodeUTF8));
        bittrex->setText(QApplication::translate("PoolBrowser", "Go to Bittrex", 0, QApplication::UnicodeUTF8));
        poloniex->setText(QApplication::translate("PoolBrowser", "Go to Poloniex", 0, QApplication::UnicodeUTF8));
        so->setText(QApplication::translate("PoolBrowser", "0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:12pt;\">Ask</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ask->setText(QApplication::translate("PoolBrowser", "0.00000000 B", 0, QApplication::UnicodeUTF8));
        asku->setText(QApplication::translate("PoolBrowser", "0.00000000 $", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:12pt;\">Bid</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        bid->setText(QApplication::translate("PoolBrowser", "0.00000000 B", 0, QApplication::UnicodeUTF8));
        bidu->setText(QApplication::translate("PoolBrowser", "0.00000000 $", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("PoolBrowser", "Open buy orders", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#000000;\">Last 24 hours</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:12pt;\">Last</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        last->setText(QApplication::translate("PoolBrowser", "0.00000000 B", 0, QApplication::UnicodeUTF8));
        lastu->setText(QApplication::translate("PoolBrowser", "0.00000000 $", 0, QApplication::UnicodeUTF8));
        yest->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600;\">+ 0 %</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p>Volume BTC</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p>Volume USD</p></body></html>", 0, QApplication::UnicodeUTF8));
        volumeu->setText(QApplication::translate("PoolBrowser", "0000 $", 0, QApplication::UnicodeUTF8));
        high->setText(QApplication::translate("PoolBrowser", "0.000000000", 0, QApplication::UnicodeUTF8));
        volumes->setText(QApplication::translate("PoolBrowser", "0", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p>High</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p>Low</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p>Volume SC</p></body></html>", 0, QApplication::UnicodeUTF8));
        volumeb->setText(QApplication::translate("PoolBrowser", "0000", 0, QApplication::UnicodeUTF8));
        low->setText(QApplication::translate("PoolBrowser", "0.000000000", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600; color:#000000;\">Bittrex</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("PoolBrowser", "Open sell orders", 0, QApplication::UnicodeUTF8));
        bo->setText(QApplication::translate("PoolBrowser", "0", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-style:italic;\">Sell:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = buyquan->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("PoolBrowser", "Quantity", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("PoolBrowser", "Rate", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = sellquan->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("PoolBrowser", "Quantity", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("PoolBrowser", "Rate", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-style:italic;\">Buy</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(mains), QApplication::translate("PoolBrowser", "Main", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Price chart, </span>last 100 trades - Satoshi/trade</p></body></html>", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = trades->headerItem();
        ___qtreewidgetitem2->setText(5, QApplication::translate("PoolBrowser", "Id", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(4, QApplication::translate("PoolBrowser", "Time", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(3, QApplication::translate("PoolBrowser", "Total", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(2, QApplication::translate("PoolBrowser", "Rate", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(1, QApplication::translate("PoolBrowser", "Quantity", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(0, QApplication::translate("PoolBrowser", "Type", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Order depth </span>- Volume/Satoshi</p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(graphs), QApplication::translate("PoolBrowser", "Graphs", 0, QApplication::UnicodeUTF8));
        All->setTabText(All->indexOf(tab_3), QApplication::translate("PoolBrowser", "Bittrex", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><a  href=\"https://www.mintpal.com/voting#SC\"><img src=\":/images/vote2\"/></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        All->setTabText(All->indexOf(tab_4), QApplication::translate("PoolBrowser", "Mintpal", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PoolBrowser: public Ui_PoolBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POOLBROWSER_H
