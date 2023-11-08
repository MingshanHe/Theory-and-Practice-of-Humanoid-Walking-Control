/********************************************************************************
** Form generated from reading UI file 'joint_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINT_WINDOW_H
#define UI_JOINT_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JointWindow
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QTableWidget *motor_table;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_31;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_28;
    QCheckBox *rl_checkBox;
    QTableWidget *rl_table;
    QSpacerItem *verticalSpacer_18;
    QVBoxLayout *verticalLayout_24;
    QCheckBox *ll_checkBox;
    QTableWidget *ll_table;
    QSpacerItem *verticalSpacer_20;
    QVBoxLayout *verticalLayout_27;
    QSpacerItem *verticalSpacer_14;
    QCheckBox *ra_checkBox;
    QTableWidget *ra_table;
    QSpacerItem *verticalSpacer_19;
    QVBoxLayout *verticalLayout_23;
    QSpacerItem *verticalSpacer_15;
    QCheckBox *la_checkBox;
    QTableWidget *la_table;
    QSpacerItem *verticalSpacer_21;
    QCheckBox *all_checkBox;
    QVBoxLayout *verticalLayout_25;
    QCheckBox *w_checkBox;
    QTableWidget *w_table;
    QVBoxLayout *verticalLayout_26;
    QCheckBox *h_checkBox;
    QTableWidget *h_table;
    QVBoxLayout *verticalLayout_32;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *basic_button;
    QPushButton *detail_button;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox_save_load;
    QVBoxLayout *verticalLayout_29;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_29;
    QLineEdit *line_edit_motor_save_file_name;
    QPushButton *button_motor_save;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_30;
    QLineEdit *line_edit_motor_load_file_name;
    QPushButton *button_motor_load;
    QGroupBox *groupBox_joint_ctrl;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_joint_ctrl;
    QFrame *line_2;
    QGridLayout *gridLayout_joint_ctrl_2;
    QFrame *line_3;
    QGridLayout *gridLayout_joint_ctrl_3;
    QFrame *line_4;
    QGridLayout *gridLayout_joint_ctrl_4;
    QFrame *line_5;
    QGridLayout *gridLayout_joint_ctrl_5;
    QFrame *line_6;
    QGridLayout *gridLayout_joint_ctrl_6;
    QFrame *line_7;
    QGridLayout *gridLayout_joint_ctrl_7;
    QFrame *line;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JointWindow)
    {
        if (JointWindow->objectName().isEmpty())
            JointWindow->setObjectName(QString::fromUtf8("JointWindow"));
        JointWindow->resize(1675, 1313);
        JointWindow->setMinimumSize(QSize(0, 880));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        JointWindow->setWindowIcon(icon);
        JointWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        JointWindow->setIconSize(QSize(24, 24));
        action_Quit = new QAction(JointWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(JointWindow);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(JointWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(JointWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(JointWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        motor_table = new QTableWidget(centralwidget);
        if (motor_table->columnCount() < 4)
            motor_table->setColumnCount(4);
        if (motor_table->rowCount() < 32)
            motor_table->setRowCount(32);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        motor_table->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        motor_table->setItem(1, 0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        motor_table->setItem(2, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        motor_table->setItem(3, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        motor_table->setItem(4, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        motor_table->setItem(5, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        motor_table->setItem(6, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        motor_table->setItem(7, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        motor_table->setItem(8, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        motor_table->setItem(9, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        motor_table->setItem(10, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        motor_table->setItem(11, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        motor_table->setItem(12, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        motor_table->setItem(13, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        motor_table->setItem(14, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        motor_table->setItem(15, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        motor_table->setItem(16, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        motor_table->setItem(17, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        motor_table->setItem(18, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        motor_table->setItem(19, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        motor_table->setItem(20, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        motor_table->setItem(21, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        motor_table->setItem(22, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        motor_table->setItem(23, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        motor_table->setItem(24, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        motor_table->setItem(25, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        motor_table->setItem(26, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        motor_table->setItem(27, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        motor_table->setItem(28, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        motor_table->setItem(29, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        motor_table->setItem(30, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        motor_table->setItem(31, 0, __qtablewidgetitem31);
        motor_table->setObjectName(QString::fromUtf8("motor_table"));
        motor_table->setMinimumSize(QSize(0, 0));
        motor_table->setMaximumSize(QSize(0, 16777215));
        motor_table->setRowCount(32);
        motor_table->setColumnCount(4);
        motor_table->horizontalHeader()->setDefaultSectionSize(60);

        hboxLayout->addWidget(motor_table);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_31 = new QVBoxLayout(groupBox_2);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_9 = new QGridLayout(groupBox_3);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        rl_checkBox = new QCheckBox(groupBox_3);
        rl_checkBox->setObjectName(QString::fromUtf8("rl_checkBox"));

        verticalLayout_28->addWidget(rl_checkBox);

        rl_table = new QTableWidget(groupBox_3);
        if (rl_table->columnCount() < 4)
            rl_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        rl_table->setHorizontalHeaderItem(0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        rl_table->setHorizontalHeaderItem(1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        rl_table->setHorizontalHeaderItem(2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        rl_table->setHorizontalHeaderItem(3, __qtablewidgetitem35);
        if (rl_table->rowCount() < 6)
            rl_table->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        rl_table->setVerticalHeaderItem(0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        rl_table->setVerticalHeaderItem(1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        rl_table->setVerticalHeaderItem(2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        rl_table->setVerticalHeaderItem(3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        rl_table->setVerticalHeaderItem(4, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        rl_table->setVerticalHeaderItem(5, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        rl_table->setItem(0, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        rl_table->setItem(1, 0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        rl_table->setItem(2, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        rl_table->setItem(3, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        rl_table->setItem(4, 0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        rl_table->setItem(5, 0, __qtablewidgetitem47);
        rl_table->setObjectName(QString::fromUtf8("rl_table"));
        rl_table->setMinimumSize(QSize(0, 215));
        rl_table->setMaximumSize(QSize(395, 215));
        rl_table->horizontalHeader()->setDefaultSectionSize(90);

        verticalLayout_28->addWidget(rl_table);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_18);


        gridLayout_9->addLayout(verticalLayout_28, 3, 0, 1, 1);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        ll_checkBox = new QCheckBox(groupBox_3);
        ll_checkBox->setObjectName(QString::fromUtf8("ll_checkBox"));
        ll_checkBox->setTristate(false);

        verticalLayout_24->addWidget(ll_checkBox);

        ll_table = new QTableWidget(groupBox_3);
        if (ll_table->columnCount() < 4)
            ll_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        ll_table->setHorizontalHeaderItem(0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        ll_table->setHorizontalHeaderItem(1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        ll_table->setHorizontalHeaderItem(2, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        ll_table->setHorizontalHeaderItem(3, __qtablewidgetitem51);
        if (ll_table->rowCount() < 6)
            ll_table->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        ll_table->setVerticalHeaderItem(0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        ll_table->setVerticalHeaderItem(1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        ll_table->setVerticalHeaderItem(2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        ll_table->setVerticalHeaderItem(3, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        ll_table->setVerticalHeaderItem(4, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        ll_table->setVerticalHeaderItem(5, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        ll_table->setItem(0, 0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        ll_table->setItem(1, 0, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        ll_table->setItem(2, 0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        ll_table->setItem(3, 0, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        ll_table->setItem(4, 0, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        ll_table->setItem(5, 0, __qtablewidgetitem63);
        ll_table->setObjectName(QString::fromUtf8("ll_table"));
        ll_table->setMinimumSize(QSize(0, 215));
        ll_table->setMaximumSize(QSize(395, 215));
        ll_table->horizontalHeader()->setDefaultSectionSize(90);

        verticalLayout_24->addWidget(ll_table);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_20);


        gridLayout_9->addLayout(verticalLayout_24, 3, 2, 1, 1);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_14);

        ra_checkBox = new QCheckBox(groupBox_3);
        ra_checkBox->setObjectName(QString::fromUtf8("ra_checkBox"));

        verticalLayout_27->addWidget(ra_checkBox);

        ra_table = new QTableWidget(groupBox_3);
        if (ra_table->columnCount() < 4)
            ra_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        ra_table->setHorizontalHeaderItem(0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        ra_table->setHorizontalHeaderItem(1, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        ra_table->setHorizontalHeaderItem(2, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        ra_table->setHorizontalHeaderItem(3, __qtablewidgetitem67);
        if (ra_table->rowCount() < 8)
            ra_table->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        ra_table->setVerticalHeaderItem(0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        ra_table->setVerticalHeaderItem(1, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        ra_table->setVerticalHeaderItem(2, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        ra_table->setVerticalHeaderItem(3, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        ra_table->setVerticalHeaderItem(4, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        ra_table->setVerticalHeaderItem(5, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        ra_table->setVerticalHeaderItem(6, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        ra_table->setVerticalHeaderItem(7, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        ra_table->setItem(0, 0, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        ra_table->setItem(1, 0, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        ra_table->setItem(2, 0, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        ra_table->setItem(3, 0, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        ra_table->setItem(4, 0, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        ra_table->setItem(5, 0, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        ra_table->setItem(6, 0, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        ra_table->setItem(7, 0, __qtablewidgetitem83);
        ra_table->setObjectName(QString::fromUtf8("ra_table"));
        ra_table->setMinimumSize(QSize(0, 275));
        ra_table->setMaximumSize(QSize(395, 275));
        ra_table->horizontalHeader()->setDefaultSectionSize(90);

        verticalLayout_27->addWidget(ra_table);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_19);


        gridLayout_9->addLayout(verticalLayout_27, 2, 0, 1, 1);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_15);

        la_checkBox = new QCheckBox(groupBox_3);
        la_checkBox->setObjectName(QString::fromUtf8("la_checkBox"));

        verticalLayout_23->addWidget(la_checkBox);

        la_table = new QTableWidget(groupBox_3);
        if (la_table->columnCount() < 4)
            la_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        la_table->setHorizontalHeaderItem(0, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        la_table->setHorizontalHeaderItem(1, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        la_table->setHorizontalHeaderItem(2, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        la_table->setHorizontalHeaderItem(3, __qtablewidgetitem87);
        if (la_table->rowCount() < 8)
            la_table->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        la_table->setVerticalHeaderItem(0, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        la_table->setVerticalHeaderItem(1, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        la_table->setVerticalHeaderItem(2, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        la_table->setVerticalHeaderItem(3, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        la_table->setVerticalHeaderItem(4, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        la_table->setVerticalHeaderItem(5, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        la_table->setVerticalHeaderItem(6, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        la_table->setVerticalHeaderItem(7, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        la_table->setItem(0, 0, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        la_table->setItem(0, 1, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        la_table->setItem(1, 0, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        la_table->setItem(2, 0, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        la_table->setItem(3, 0, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        la_table->setItem(4, 0, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        la_table->setItem(5, 0, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        la_table->setItem(6, 0, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        la_table->setItem(7, 0, __qtablewidgetitem104);
        la_table->setObjectName(QString::fromUtf8("la_table"));
        la_table->setMinimumSize(QSize(0, 275));
        la_table->setMaximumSize(QSize(395, 275));
        la_table->horizontalHeader()->setDefaultSectionSize(90);

        verticalLayout_23->addWidget(la_table);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_21);


        gridLayout_9->addLayout(verticalLayout_23, 2, 2, 1, 1);

        all_checkBox = new QCheckBox(groupBox_3);
        all_checkBox->setObjectName(QString::fromUtf8("all_checkBox"));

        gridLayout_9->addWidget(all_checkBox, 0, 0, 1, 1);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        w_checkBox = new QCheckBox(groupBox_3);
        w_checkBox->setObjectName(QString::fromUtf8("w_checkBox"));

        verticalLayout_25->addWidget(w_checkBox);

        w_table = new QTableWidget(groupBox_3);
        if (w_table->columnCount() < 4)
            w_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        w_table->setHorizontalHeaderItem(0, __qtablewidgetitem105);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        w_table->setHorizontalHeaderItem(1, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        w_table->setHorizontalHeaderItem(2, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        w_table->setHorizontalHeaderItem(3, __qtablewidgetitem108);
        if (w_table->rowCount() < 2)
            w_table->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        w_table->setVerticalHeaderItem(0, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        w_table->setVerticalHeaderItem(1, __qtablewidgetitem110);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        w_table->setItem(0, 0, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        w_table->setItem(1, 0, __qtablewidgetitem112);
        w_table->setObjectName(QString::fromUtf8("w_table"));
        w_table->setMinimumSize(QSize(395, 95));
        w_table->setMaximumSize(QSize(395, 95));
        w_table->horizontalHeader()->setDefaultSectionSize(90);

        verticalLayout_25->addWidget(w_table);


        gridLayout_9->addLayout(verticalLayout_25, 1, 2, 1, 1);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        h_checkBox = new QCheckBox(groupBox_3);
        h_checkBox->setObjectName(QString::fromUtf8("h_checkBox"));

        verticalLayout_26->addWidget(h_checkBox);

        h_table = new QTableWidget(groupBox_3);
        if (h_table->columnCount() < 4)
            h_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        h_table->setHorizontalHeaderItem(0, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        h_table->setHorizontalHeaderItem(1, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        h_table->setHorizontalHeaderItem(2, __qtablewidgetitem115);
        QTableWidgetItem *__qtablewidgetitem116 = new QTableWidgetItem();
        h_table->setHorizontalHeaderItem(3, __qtablewidgetitem116);
        if (h_table->rowCount() < 2)
            h_table->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem117 = new QTableWidgetItem();
        h_table->setVerticalHeaderItem(0, __qtablewidgetitem117);
        QTableWidgetItem *__qtablewidgetitem118 = new QTableWidgetItem();
        h_table->setVerticalHeaderItem(1, __qtablewidgetitem118);
        QTableWidgetItem *__qtablewidgetitem119 = new QTableWidgetItem();
        h_table->setItem(0, 0, __qtablewidgetitem119);
        QTableWidgetItem *__qtablewidgetitem120 = new QTableWidgetItem();
        h_table->setItem(1, 0, __qtablewidgetitem120);
        h_table->setObjectName(QString::fromUtf8("h_table"));
        h_table->setMinimumSize(QSize(395, 95));
        h_table->setMaximumSize(QSize(395, 95));
        h_table->horizontalHeader()->setDefaultSectionSize(90);

        verticalLayout_26->addWidget(h_table);


        gridLayout_9->addLayout(verticalLayout_26, 1, 0, 1, 1);

        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(300, 0));

        verticalLayout_32->addWidget(label_28);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_5);

        basic_button = new QPushButton(groupBox_3);
        basic_button->setObjectName(QString::fromUtf8("basic_button"));

        horizontalLayout_14->addWidget(basic_button, 0, Qt::AlignBottom);

        detail_button = new QPushButton(groupBox_3);
        detail_button->setObjectName(QString::fromUtf8("detail_button"));

        horizontalLayout_14->addWidget(detail_button, 0, Qt::AlignBottom);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_6);


        verticalLayout_32->addLayout(horizontalLayout_14);


        gridLayout_9->addLayout(verticalLayout_32, 3, 1, 1, 1);


        verticalLayout_31->addWidget(groupBox_3);

        groupBox_save_load = new QGroupBox(groupBox_2);
        groupBox_save_load->setObjectName(QString::fromUtf8("groupBox_save_load"));
        verticalLayout_29 = new QVBoxLayout(groupBox_save_load);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_3);

        label_29 = new QLabel(groupBox_save_load);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_16->addWidget(label_29);

        line_edit_motor_save_file_name = new QLineEdit(groupBox_save_load);
        line_edit_motor_save_file_name->setObjectName(QString::fromUtf8("line_edit_motor_save_file_name"));

        horizontalLayout_16->addWidget(line_edit_motor_save_file_name);

        button_motor_save = new QPushButton(groupBox_save_load);
        button_motor_save->setObjectName(QString::fromUtf8("button_motor_save"));

        horizontalLayout_16->addWidget(button_motor_save);


        verticalLayout_29->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);

        label_30 = new QLabel(groupBox_save_load);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_17->addWidget(label_30);

        line_edit_motor_load_file_name = new QLineEdit(groupBox_save_load);
        line_edit_motor_load_file_name->setObjectName(QString::fromUtf8("line_edit_motor_load_file_name"));

        horizontalLayout_17->addWidget(line_edit_motor_load_file_name);

        button_motor_load = new QPushButton(groupBox_save_load);
        button_motor_load->setObjectName(QString::fromUtf8("button_motor_load"));

        horizontalLayout_17->addWidget(button_motor_load);


        verticalLayout_29->addLayout(horizontalLayout_17);


        verticalLayout_31->addWidget(groupBox_save_load);


        hboxLayout->addWidget(groupBox_2);

        groupBox_joint_ctrl = new QGroupBox(centralwidget);
        groupBox_joint_ctrl->setObjectName(QString::fromUtf8("groupBox_joint_ctrl"));
        groupBox_joint_ctrl->setMaximumSize(QSize(400, 16777215));
        groupBox_joint_ctrl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox_joint_ctrl->setCheckable(false);
        verticalLayout = new QVBoxLayout(groupBox_joint_ctrl);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_joint_ctrl = new QGridLayout();
        gridLayout_joint_ctrl->setObjectName(QString::fromUtf8("gridLayout_joint_ctrl"));
        gridLayout_joint_ctrl->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_joint_ctrl->setHorizontalSpacing(8);
        gridLayout_joint_ctrl->setVerticalSpacing(0);
        gridLayout_joint_ctrl->setContentsMargins(0, 0, -1, -1);

        verticalLayout->addLayout(gridLayout_joint_ctrl);

        line_2 = new QFrame(groupBox_joint_ctrl);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout_joint_ctrl_2 = new QGridLayout();
        gridLayout_joint_ctrl_2->setObjectName(QString::fromUtf8("gridLayout_joint_ctrl_2"));
        gridLayout_joint_ctrl_2->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_joint_ctrl_2->setVerticalSpacing(0);

        verticalLayout->addLayout(gridLayout_joint_ctrl_2);

        line_3 = new QFrame(groupBox_joint_ctrl);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        gridLayout_joint_ctrl_3 = new QGridLayout();
        gridLayout_joint_ctrl_3->setObjectName(QString::fromUtf8("gridLayout_joint_ctrl_3"));
        gridLayout_joint_ctrl_3->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_joint_ctrl_3->setVerticalSpacing(0);

        verticalLayout->addLayout(gridLayout_joint_ctrl_3);

        line_4 = new QFrame(groupBox_joint_ctrl);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        gridLayout_joint_ctrl_4 = new QGridLayout();
        gridLayout_joint_ctrl_4->setObjectName(QString::fromUtf8("gridLayout_joint_ctrl_4"));
        gridLayout_joint_ctrl_4->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_joint_ctrl_4->setVerticalSpacing(0);

        verticalLayout->addLayout(gridLayout_joint_ctrl_4);

        line_5 = new QFrame(groupBox_joint_ctrl);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        gridLayout_joint_ctrl_5 = new QGridLayout();
        gridLayout_joint_ctrl_5->setObjectName(QString::fromUtf8("gridLayout_joint_ctrl_5"));
        gridLayout_joint_ctrl_5->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_joint_ctrl_5->setVerticalSpacing(0);

        verticalLayout->addLayout(gridLayout_joint_ctrl_5);

        line_6 = new QFrame(groupBox_joint_ctrl);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_6);

        gridLayout_joint_ctrl_6 = new QGridLayout();
        gridLayout_joint_ctrl_6->setObjectName(QString::fromUtf8("gridLayout_joint_ctrl_6"));
        gridLayout_joint_ctrl_6->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_joint_ctrl_6->setVerticalSpacing(0);
        gridLayout_joint_ctrl_6->setContentsMargins(-1, 0, -1, -1);

        verticalLayout->addLayout(gridLayout_joint_ctrl_6);

        line_7 = new QFrame(groupBox_joint_ctrl);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_7);

        gridLayout_joint_ctrl_7 = new QGridLayout();
        gridLayout_joint_ctrl_7->setObjectName(QString::fromUtf8("gridLayout_joint_ctrl_7"));
        gridLayout_joint_ctrl_7->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_joint_ctrl_7->setContentsMargins(-1, 0, -1, -1);

        verticalLayout->addLayout(gridLayout_joint_ctrl_7);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(4, 8);
        verticalLayout->setStretch(6, 8);
        verticalLayout->setStretch(8, 6);
        verticalLayout->setStretch(10, 6);

        hboxLayout->addWidget(groupBox_joint_ctrl);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line);

        JointWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JointWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1675, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        JointWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(JointWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        JointWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(JointWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), JointWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(JointWindow);
    } // setupUi

    void retranslateUi(QMainWindow *JointWindow)
    {
        JointWindow->setWindowTitle(QApplication::translate("JointWindow", "DYROS THORMANG User Interface", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("JointWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("JointWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("JointWindow", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("JointWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("JointWindow", "About &Qt", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = motor_table->isSortingEnabled();
        motor_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = motor_table->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("JointWindow", "R-Sh-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = motor_table->item(1, 0);
        ___qtablewidgetitem1->setText(QApplication::translate("JointWindow", "L-Sh-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = motor_table->item(2, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("JointWindow", "R-Sh-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = motor_table->item(3, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("JointWindow", "L-Sh-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = motor_table->item(4, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("JointWindow", "R-Sh-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = motor_table->item(5, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("JointWindow", "L-Sh-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = motor_table->item(6, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("JointWindow", "R-Elbo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = motor_table->item(7, 0);
        ___qtablewidgetitem7->setText(QApplication::translate("JointWindow", "L-Elbo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = motor_table->item(8, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("JointWindow", "R-Wr-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = motor_table->item(9, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("JointWindow", "L-Wr-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = motor_table->item(10, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("JointWindow", "R-Wr-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = motor_table->item(11, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("JointWindow", "L-Wr-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = motor_table->item(12, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("JointWindow", "R-W-Y2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = motor_table->item(13, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("JointWindow", "L-W-Y2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = motor_table->item(14, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("JointWindow", "R-Hi-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = motor_table->item(15, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("JointWindow", "L-Hi-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = motor_table->item(16, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("JointWindow", "R-Hi-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = motor_table->item(17, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("JointWindow", "L-Hi-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = motor_table->item(18, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("JointWindow", "R-Hi-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = motor_table->item(19, 0);
        ___qtablewidgetitem19->setText(QApplication::translate("JointWindow", "L-Hi-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = motor_table->item(20, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("JointWindow", "R-Kne", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = motor_table->item(21, 0);
        ___qtablewidgetitem21->setText(QApplication::translate("JointWindow", "L-Kne", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = motor_table->item(22, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("JointWindow", "R-An-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = motor_table->item(23, 0);
        ___qtablewidgetitem23->setText(QApplication::translate("JointWindow", "L-An-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = motor_table->item(24, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("JointWindow", "R-An-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = motor_table->item(25, 0);
        ___qtablewidgetitem25->setText(QApplication::translate("JointWindow", "L-An-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = motor_table->item(26, 0);
        ___qtablewidgetitem26->setText(QApplication::translate("JointWindow", "W-Pitch", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = motor_table->item(27, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("JointWindow", "W-Yaw", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = motor_table->item(28, 0);
        ___qtablewidgetitem28->setText(QApplication::translate("JointWindow", "H-Pan", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem29 = motor_table->item(29, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("JointWindow", "H-Tilt", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem30 = motor_table->item(30, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("JointWindow", "R-Hand", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem31 = motor_table->item(31, 0);
        ___qtablewidgetitem31->setText(QApplication::translate("JointWindow", "L-Hand", 0, QApplication::UnicodeUTF8));
        motor_table->setSortingEnabled(__sortingEnabled);

        groupBox_2->setTitle(QApplication::translate("JointWindow", "Motor Table", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
        rl_checkBox->setText(QApplication::translate("JointWindow", "Right Leg", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem32 = rl_table->horizontalHeaderItem(0);
        ___qtablewidgetitem32->setText(QApplication::translate("JointWindow", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem33 = rl_table->horizontalHeaderItem(1);
        ___qtablewidgetitem33->setText(QApplication::translate("JointWindow", "Pos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem34 = rl_table->horizontalHeaderItem(2);
        ___qtablewidgetitem34->setText(QApplication::translate("JointWindow", "Torque", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem35 = rl_table->horizontalHeaderItem(3);
        ___qtablewidgetitem35->setText(QApplication::translate("JointWindow", "Error", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem36 = rl_table->verticalHeaderItem(0);
        ___qtablewidgetitem36->setText(QApplication::translate("JointWindow", "21", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem37 = rl_table->verticalHeaderItem(1);
        ___qtablewidgetitem37->setText(QApplication::translate("JointWindow", "22", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem38 = rl_table->verticalHeaderItem(2);
        ___qtablewidgetitem38->setText(QApplication::translate("JointWindow", "23", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem39 = rl_table->verticalHeaderItem(3);
        ___qtablewidgetitem39->setText(QApplication::translate("JointWindow", "24", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem40 = rl_table->verticalHeaderItem(4);
        ___qtablewidgetitem40->setText(QApplication::translate("JointWindow", "25", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem41 = rl_table->verticalHeaderItem(5);
        ___qtablewidgetitem41->setText(QApplication::translate("JointWindow", "26", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = rl_table->isSortingEnabled();
        rl_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem42 = rl_table->item(0, 0);
        ___qtablewidgetitem42->setText(QApplication::translate("JointWindow", "R-Hi-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem43 = rl_table->item(1, 0);
        ___qtablewidgetitem43->setText(QApplication::translate("JointWindow", "R-Hi-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem44 = rl_table->item(2, 0);
        ___qtablewidgetitem44->setText(QApplication::translate("JointWindow", "R-Hi-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem45 = rl_table->item(3, 0);
        ___qtablewidgetitem45->setText(QApplication::translate("JointWindow", "R-Kne-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem46 = rl_table->item(4, 0);
        ___qtablewidgetitem46->setText(QApplication::translate("JointWindow", "R-An-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem47 = rl_table->item(5, 0);
        ___qtablewidgetitem47->setText(QApplication::translate("JointWindow", "R-An-R", 0, QApplication::UnicodeUTF8));
        rl_table->setSortingEnabled(__sortingEnabled1);

        ll_checkBox->setText(QApplication::translate("JointWindow", "Left Leg", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem48 = ll_table->horizontalHeaderItem(0);
        ___qtablewidgetitem48->setText(QApplication::translate("JointWindow", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem49 = ll_table->horizontalHeaderItem(1);
        ___qtablewidgetitem49->setText(QApplication::translate("JointWindow", "Pos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem50 = ll_table->horizontalHeaderItem(2);
        ___qtablewidgetitem50->setText(QApplication::translate("JointWindow", "Torque", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem51 = ll_table->horizontalHeaderItem(3);
        ___qtablewidgetitem51->setText(QApplication::translate("JointWindow", "Error", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem52 = ll_table->verticalHeaderItem(0);
        ___qtablewidgetitem52->setText(QApplication::translate("JointWindow", "27", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem53 = ll_table->verticalHeaderItem(1);
        ___qtablewidgetitem53->setText(QApplication::translate("JointWindow", "28", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem54 = ll_table->verticalHeaderItem(2);
        ___qtablewidgetitem54->setText(QApplication::translate("JointWindow", "29", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem55 = ll_table->verticalHeaderItem(3);
        ___qtablewidgetitem55->setText(QApplication::translate("JointWindow", "30", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem56 = ll_table->verticalHeaderItem(4);
        ___qtablewidgetitem56->setText(QApplication::translate("JointWindow", "31", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem57 = ll_table->verticalHeaderItem(5);
        ___qtablewidgetitem57->setText(QApplication::translate("JointWindow", "32", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled2 = ll_table->isSortingEnabled();
        ll_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem58 = ll_table->item(0, 0);
        ___qtablewidgetitem58->setText(QApplication::translate("JointWindow", "L-Hi-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem59 = ll_table->item(1, 0);
        ___qtablewidgetitem59->setText(QApplication::translate("JointWindow", "L-Hi-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem60 = ll_table->item(2, 0);
        ___qtablewidgetitem60->setText(QApplication::translate("JointWindow", "L-Hi-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem61 = ll_table->item(3, 0);
        ___qtablewidgetitem61->setText(QApplication::translate("JointWindow", "L-Kne-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem62 = ll_table->item(4, 0);
        ___qtablewidgetitem62->setText(QApplication::translate("JointWindow", "L-An-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem63 = ll_table->item(5, 0);
        ___qtablewidgetitem63->setText(QApplication::translate("JointWindow", "L-An-R", 0, QApplication::UnicodeUTF8));
        ll_table->setSortingEnabled(__sortingEnabled2);

        ra_checkBox->setText(QApplication::translate("JointWindow", "Right Arm", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem64 = ra_table->horizontalHeaderItem(0);
        ___qtablewidgetitem64->setText(QApplication::translate("JointWindow", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem65 = ra_table->horizontalHeaderItem(1);
        ___qtablewidgetitem65->setText(QApplication::translate("JointWindow", "Pos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem66 = ra_table->horizontalHeaderItem(2);
        ___qtablewidgetitem66->setText(QApplication::translate("JointWindow", "Torque", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem67 = ra_table->horizontalHeaderItem(3);
        ___qtablewidgetitem67->setText(QApplication::translate("JointWindow", "Error", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem68 = ra_table->verticalHeaderItem(0);
        ___qtablewidgetitem68->setText(QApplication::translate("JointWindow", "05", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem69 = ra_table->verticalHeaderItem(1);
        ___qtablewidgetitem69->setText(QApplication::translate("JointWindow", "06", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem70 = ra_table->verticalHeaderItem(2);
        ___qtablewidgetitem70->setText(QApplication::translate("JointWindow", "07", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem71 = ra_table->verticalHeaderItem(3);
        ___qtablewidgetitem71->setText(QApplication::translate("JointWindow", "08", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem72 = ra_table->verticalHeaderItem(4);
        ___qtablewidgetitem72->setText(QApplication::translate("JointWindow", "09", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem73 = ra_table->verticalHeaderItem(5);
        ___qtablewidgetitem73->setText(QApplication::translate("JointWindow", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem74 = ra_table->verticalHeaderItem(6);
        ___qtablewidgetitem74->setText(QApplication::translate("JointWindow", "11", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem75 = ra_table->verticalHeaderItem(7);
        ___qtablewidgetitem75->setText(QApplication::translate("JointWindow", "12", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled3 = ra_table->isSortingEnabled();
        ra_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem76 = ra_table->item(0, 0);
        ___qtablewidgetitem76->setText(QApplication::translate("JointWindow", "R-Sh-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem77 = ra_table->item(1, 0);
        ___qtablewidgetitem77->setText(QApplication::translate("JointWindow", "R-Sh-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem78 = ra_table->item(2, 0);
        ___qtablewidgetitem78->setText(QApplication::translate("JointWindow", "R-Sh-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem79 = ra_table->item(3, 0);
        ___qtablewidgetitem79->setText(QApplication::translate("JointWindow", "R-Elbo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem80 = ra_table->item(4, 0);
        ___qtablewidgetitem80->setText(QApplication::translate("JointWindow", "R-Wr-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem81 = ra_table->item(5, 0);
        ___qtablewidgetitem81->setText(QApplication::translate("JointWindow", "R-Wr-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem82 = ra_table->item(6, 0);
        ___qtablewidgetitem82->setText(QApplication::translate("JointWindow", "R-Hand-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem83 = ra_table->item(7, 0);
        ___qtablewidgetitem83->setText(QApplication::translate("JointWindow", "R-Gripper", 0, QApplication::UnicodeUTF8));
        ra_table->setSortingEnabled(__sortingEnabled3);

        la_checkBox->setText(QApplication::translate("JointWindow", "Left Arm", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem84 = la_table->horizontalHeaderItem(0);
        ___qtablewidgetitem84->setText(QApplication::translate("JointWindow", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem85 = la_table->horizontalHeaderItem(1);
        ___qtablewidgetitem85->setText(QApplication::translate("JointWindow", "Pos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem86 = la_table->horizontalHeaderItem(2);
        ___qtablewidgetitem86->setText(QApplication::translate("JointWindow", "Torque", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem87 = la_table->horizontalHeaderItem(3);
        ___qtablewidgetitem87->setText(QApplication::translate("JointWindow", "Error", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem88 = la_table->verticalHeaderItem(0);
        ___qtablewidgetitem88->setText(QApplication::translate("JointWindow", "13", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem89 = la_table->verticalHeaderItem(1);
        ___qtablewidgetitem89->setText(QApplication::translate("JointWindow", "14", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem90 = la_table->verticalHeaderItem(2);
        ___qtablewidgetitem90->setText(QApplication::translate("JointWindow", "15", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem91 = la_table->verticalHeaderItem(3);
        ___qtablewidgetitem91->setText(QApplication::translate("JointWindow", "16", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem92 = la_table->verticalHeaderItem(4);
        ___qtablewidgetitem92->setText(QApplication::translate("JointWindow", "17", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem93 = la_table->verticalHeaderItem(5);
        ___qtablewidgetitem93->setText(QApplication::translate("JointWindow", "18", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem94 = la_table->verticalHeaderItem(6);
        ___qtablewidgetitem94->setText(QApplication::translate("JointWindow", "19", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem95 = la_table->verticalHeaderItem(7);
        ___qtablewidgetitem95->setText(QApplication::translate("JointWindow", "20", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled4 = la_table->isSortingEnabled();
        la_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem96 = la_table->item(0, 0);
        ___qtablewidgetitem96->setText(QApplication::translate("JointWindow", "L-Sh-P", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem97 = la_table->item(1, 0);
        ___qtablewidgetitem97->setText(QApplication::translate("JointWindow", "L-Sh-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem98 = la_table->item(2, 0);
        ___qtablewidgetitem98->setText(QApplication::translate("JointWindow", "L-Sh-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem99 = la_table->item(3, 0);
        ___qtablewidgetitem99->setText(QApplication::translate("JointWindow", "L-Elbo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem100 = la_table->item(4, 0);
        ___qtablewidgetitem100->setText(QApplication::translate("JointWindow", "L-Wr-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem101 = la_table->item(5, 0);
        ___qtablewidgetitem101->setText(QApplication::translate("JointWindow", "L-Wr-R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem102 = la_table->item(6, 0);
        ___qtablewidgetitem102->setText(QApplication::translate("JointWindow", "L-Hand-Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem103 = la_table->item(7, 0);
        ___qtablewidgetitem103->setText(QApplication::translate("JointWindow", "L-Gripper", 0, QApplication::UnicodeUTF8));
        la_table->setSortingEnabled(__sortingEnabled4);

        all_checkBox->setText(QApplication::translate("JointWindow", "Check ALL", 0, QApplication::UnicodeUTF8));
        w_checkBox->setText(QApplication::translate("JointWindow", "Waist", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem104 = w_table->horizontalHeaderItem(0);
        ___qtablewidgetitem104->setText(QApplication::translate("JointWindow", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem105 = w_table->horizontalHeaderItem(1);
        ___qtablewidgetitem105->setText(QApplication::translate("JointWindow", "Pos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem106 = w_table->horizontalHeaderItem(2);
        ___qtablewidgetitem106->setText(QApplication::translate("JointWindow", "Torque", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem107 = w_table->horizontalHeaderItem(3);
        ___qtablewidgetitem107->setText(QApplication::translate("JointWindow", "Error", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem108 = w_table->verticalHeaderItem(0);
        ___qtablewidgetitem108->setText(QApplication::translate("JointWindow", "03", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem109 = w_table->verticalHeaderItem(1);
        ___qtablewidgetitem109->setText(QApplication::translate("JointWindow", "04", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled5 = w_table->isSortingEnabled();
        w_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem110 = w_table->item(0, 0);
        ___qtablewidgetitem110->setText(QApplication::translate("JointWindow", "W-Pitch", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem111 = w_table->item(1, 0);
        ___qtablewidgetitem111->setText(QApplication::translate("JointWindow", "W-Yaw", 0, QApplication::UnicodeUTF8));
        w_table->setSortingEnabled(__sortingEnabled5);

        h_checkBox->setText(QApplication::translate("JointWindow", "Head", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem112 = h_table->horizontalHeaderItem(0);
        ___qtablewidgetitem112->setText(QApplication::translate("JointWindow", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem113 = h_table->horizontalHeaderItem(1);
        ___qtablewidgetitem113->setText(QApplication::translate("JointWindow", "Pos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem114 = h_table->horizontalHeaderItem(2);
        ___qtablewidgetitem114->setText(QApplication::translate("JointWindow", "Torque", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem115 = h_table->horizontalHeaderItem(3);
        ___qtablewidgetitem115->setText(QApplication::translate("JointWindow", "Error", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem116 = h_table->verticalHeaderItem(0);
        ___qtablewidgetitem116->setText(QApplication::translate("JointWindow", "01", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem117 = h_table->verticalHeaderItem(1);
        ___qtablewidgetitem117->setText(QApplication::translate("JointWindow", "02", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled6 = h_table->isSortingEnabled();
        h_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem118 = h_table->item(0, 0);
        ___qtablewidgetitem118->setText(QApplication::translate("JointWindow", "H-Yaw", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem119 = h_table->item(1, 0);
        ___qtablewidgetitem119->setText(QApplication::translate("JointWindow", "H-Pitch", 0, QApplication::UnicodeUTF8));
        h_table->setSortingEnabled(__sortingEnabled6);

        label_28->setText(QString());
        basic_button->setText(QApplication::translate("JointWindow", "basic", 0, QApplication::UnicodeUTF8));
        detail_button->setText(QApplication::translate("JointWindow", "detail", 0, QApplication::UnicodeUTF8));
        groupBox_save_load->setTitle(QString());
        label_29->setText(QApplication::translate("JointWindow", "Motor State File Save - File Name", 0, QApplication::UnicodeUTF8));
        line_edit_motor_save_file_name->setText(QApplication::translate("JointWindow", "motor_state.txt", 0, QApplication::UnicodeUTF8));
        button_motor_save->setText(QApplication::translate("JointWindow", "Save", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("JointWindow", "Motor State File Load - File Name", 0, QApplication::UnicodeUTF8));
        line_edit_motor_load_file_name->setText(QApplication::translate("JointWindow", "motor_state.txt", 0, QApplication::UnicodeUTF8));
        button_motor_load->setText(QApplication::translate("JointWindow", "Load", 0, QApplication::UnicodeUTF8));
        groupBox_joint_ctrl->setTitle(QApplication::translate("JointWindow", "Joint Control", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("JointWindow", "&App", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JointWindow: public Ui_JointWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINT_WINDOW_H
