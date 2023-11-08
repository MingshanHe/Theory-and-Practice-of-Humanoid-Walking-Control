/********************************************************************************
** Form generated from reading UI file 'status_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUS_WINDOW_H
#define UI_STATUS_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatusWindow
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_state;
    QVBoxLayout *verticalLayout_14;
    QPushButton *button_power_on;
    QPushButton *button_initialize;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QPushButton *button_mission;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_8;
    QPushButton *button_auto_door_start;
    QPushButton *button_auto_door_reach;
    QPushButton *button_auto_door_open;
    QPushButton *button_auto_door_push;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_9;
    QPushButton *button_auto_valve_start;
    QPushButton *button_auto_valve_approach;
    QPushButton *button_auto_valve_close;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_10;
    QPushButton *button_auto_egress_start;
    QPushButton *button_auto_egress_init;
    QPushButton *button_auto_egress_egress;
    QPushButton *button_auto_egress_standby;
    QPushButton *button_auto_egress_hello;
    QPushButton *button_auto_egress_guide;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_11;
    QPushButton *button_mission4;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_34;
    QPushButton *button_event;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_38;
    QPushButton *button_event_handclap;
    QPushButton *button_event_handclap_ready;
    QPushButton *button_event_handclap_do;
    QPushButton *button_event_handclap_end;
    QSpacerItem *verticalSpacer_25;
    QVBoxLayout *verticalLayout_35;
    QPushButton *button_event_handshake;
    QPushButton *button_event_handshake_turn;
    QPushButton *button_event_handshake_ready;
    QPushButton *button_event_handshake_do;
    QPushButton *button_event_handshake_end;
    QPushButton *button_event_handshake_motion1;
    QPushButton *button_event_handshake_motion2;
    QPushButton *button_event_handshake_motion3;
    QPushButton *button_event_handshake_return;
    QSpacerItem *verticalSpacer_22;
    QVBoxLayout *verticalLayout_36;
    QPushButton *button_event_hello;
    QPushButton *button_event_hello_ready;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_21;
    QSpinBox *spin_hello_count;
    QPushButton *button_event_hello_do;
    QPushButton *button_event_hello_end;
    QPushButton *button_event_hello_introduce;
    QPushButton *button_event_hello_introduce_end;
    QSpacerItem *verticalSpacer_23;
    QPushButton *button_mode_change;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_19;
    QLineEdit *line_edit_current_state;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_motor_manager;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *button_mini_drc1;
    QPushButton *button_mini_drc2;
    QPushButton *button_mini_drc3;
    QPushButton *button_mini_drc4;
    QPushButton *button_mini_drc5;
    QSpacerItem *verticalSpacer_10;
    QGroupBox *groupBox_recog_ctrl;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_recog_ctrl;
    QLineEdit *line_edit_scan_roll;
    QLineEdit *line_edit_scan_y;
    QLineEdit *line_edit_scan_x;
    QLabel *label_12;
    QLabel *label_16;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *line_edit_scan_z;
    QLineEdit *line_edit_scan_yaw;
    QPushButton *button_scan;
    QLineEdit *line_edit_scan_pitch;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_18;
    QFrame *line;
    QVBoxLayout *verticalLayout_22;
    QSpacerItem *verticalSpacer_13;
    QPushButton *button_estop;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StatusWindow)
    {
        if (StatusWindow->objectName().isEmpty())
            StatusWindow->setObjectName(QString::fromUtf8("StatusWindow"));
        StatusWindow->resize(1823, 1039);
        StatusWindow->setMinimumSize(QSize(0, 880));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        StatusWindow->setWindowIcon(icon);
        StatusWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        StatusWindow->setIconSize(QSize(24, 24));
        action_Quit = new QAction(StatusWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(StatusWindow);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(StatusWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(StatusWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(StatusWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox_state = new QGroupBox(centralwidget);
        groupBox_state->setObjectName(QString::fromUtf8("groupBox_state"));
        verticalLayout_14 = new QVBoxLayout(groupBox_state);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        button_power_on = new QPushButton(groupBox_state);
        button_power_on->setObjectName(QString::fromUtf8("button_power_on"));
        button_power_on->setMinimumSize(QSize(0, 50));
        button_power_on->setAutoFillBackground(false);

        verticalLayout_14->addWidget(button_power_on);

        button_initialize = new QPushButton(groupBox_state);
        button_initialize->setObjectName(QString::fromUtf8("button_initialize"));
        button_initialize->setMinimumSize(QSize(0, 50));

        verticalLayout_14->addWidget(button_initialize);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        button_mission = new QPushButton(groupBox_state);
        button_mission->setObjectName(QString::fromUtf8("button_mission"));
        button_mission->setMinimumSize(QSize(0, 50));

        verticalLayout_6->addWidget(button_mission);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        button_auto_door_start = new QPushButton(groupBox_state);
        button_auto_door_start->setObjectName(QString::fromUtf8("button_auto_door_start"));
        button_auto_door_start->setMinimumSize(QSize(0, 50));
        button_auto_door_start->setCheckable(false);

        verticalLayout_8->addWidget(button_auto_door_start);

        button_auto_door_reach = new QPushButton(groupBox_state);
        button_auto_door_reach->setObjectName(QString::fromUtf8("button_auto_door_reach"));
        button_auto_door_reach->setMinimumSize(QSize(0, 50));

        verticalLayout_8->addWidget(button_auto_door_reach);

        button_auto_door_open = new QPushButton(groupBox_state);
        button_auto_door_open->setObjectName(QString::fromUtf8("button_auto_door_open"));
        button_auto_door_open->setMinimumSize(QSize(0, 50));

        verticalLayout_8->addWidget(button_auto_door_open);

        button_auto_door_push = new QPushButton(groupBox_state);
        button_auto_door_push->setObjectName(QString::fromUtf8("button_auto_door_push"));
        button_auto_door_push->setMinimumSize(QSize(0, 50));

        verticalLayout_8->addWidget(button_auto_door_push);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);


        horizontalLayout_8->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        button_auto_valve_start = new QPushButton(groupBox_state);
        button_auto_valve_start->setObjectName(QString::fromUtf8("button_auto_valve_start"));
        button_auto_valve_start->setMinimumSize(QSize(0, 50));
        button_auto_valve_start->setCheckable(false);

        verticalLayout_9->addWidget(button_auto_valve_start);

        button_auto_valve_approach = new QPushButton(groupBox_state);
        button_auto_valve_approach->setObjectName(QString::fromUtf8("button_auto_valve_approach"));
        button_auto_valve_approach->setMinimumSize(QSize(0, 50));

        verticalLayout_9->addWidget(button_auto_valve_approach);

        button_auto_valve_close = new QPushButton(groupBox_state);
        button_auto_valve_close->setObjectName(QString::fromUtf8("button_auto_valve_close"));
        button_auto_valve_close->setMinimumSize(QSize(0, 50));

        verticalLayout_9->addWidget(button_auto_valve_close);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);


        horizontalLayout_8->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        button_auto_egress_start = new QPushButton(groupBox_state);
        button_auto_egress_start->setObjectName(QString::fromUtf8("button_auto_egress_start"));
        button_auto_egress_start->setMinimumSize(QSize(0, 50));

        verticalLayout_10->addWidget(button_auto_egress_start);

        button_auto_egress_init = new QPushButton(groupBox_state);
        button_auto_egress_init->setObjectName(QString::fromUtf8("button_auto_egress_init"));
        button_auto_egress_init->setMinimumSize(QSize(0, 50));

        verticalLayout_10->addWidget(button_auto_egress_init);

        button_auto_egress_egress = new QPushButton(groupBox_state);
        button_auto_egress_egress->setObjectName(QString::fromUtf8("button_auto_egress_egress"));
        button_auto_egress_egress->setMinimumSize(QSize(0, 50));

        verticalLayout_10->addWidget(button_auto_egress_egress);

        button_auto_egress_standby = new QPushButton(groupBox_state);
        button_auto_egress_standby->setObjectName(QString::fromUtf8("button_auto_egress_standby"));
        button_auto_egress_standby->setMinimumSize(QSize(0, 50));

        verticalLayout_10->addWidget(button_auto_egress_standby);

        button_auto_egress_hello = new QPushButton(groupBox_state);
        button_auto_egress_hello->setObjectName(QString::fromUtf8("button_auto_egress_hello"));
        button_auto_egress_hello->setMinimumSize(QSize(0, 50));

        verticalLayout_10->addWidget(button_auto_egress_hello);

        button_auto_egress_guide = new QPushButton(groupBox_state);
        button_auto_egress_guide->setObjectName(QString::fromUtf8("button_auto_egress_guide"));
        button_auto_egress_guide->setMinimumSize(QSize(0, 50));

        verticalLayout_10->addWidget(button_auto_egress_guide);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_5);


        horizontalLayout_8->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        button_mission4 = new QPushButton(groupBox_state);
        button_mission4->setObjectName(QString::fromUtf8("button_mission4"));
        button_mission4->setMinimumSize(QSize(0, 50));

        verticalLayout_11->addWidget(button_mission4);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_6);


        horizontalLayout_8->addLayout(verticalLayout_11);


        verticalLayout_6->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        button_event = new QPushButton(groupBox_state);
        button_event->setObjectName(QString::fromUtf8("button_event"));
        button_event->setMinimumSize(QSize(0, 50));

        verticalLayout_34->addWidget(button_event);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, -1, -1, -1);
        verticalLayout_38 = new QVBoxLayout();
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        button_event_handclap = new QPushButton(groupBox_state);
        button_event_handclap->setObjectName(QString::fromUtf8("button_event_handclap"));
        button_event_handclap->setMinimumSize(QSize(0, 50));

        verticalLayout_38->addWidget(button_event_handclap);

        button_event_handclap_ready = new QPushButton(groupBox_state);
        button_event_handclap_ready->setObjectName(QString::fromUtf8("button_event_handclap_ready"));
        button_event_handclap_ready->setMinimumSize(QSize(0, 50));

        verticalLayout_38->addWidget(button_event_handclap_ready);

        button_event_handclap_do = new QPushButton(groupBox_state);
        button_event_handclap_do->setObjectName(QString::fromUtf8("button_event_handclap_do"));
        button_event_handclap_do->setMinimumSize(QSize(0, 50));

        verticalLayout_38->addWidget(button_event_handclap_do);

        button_event_handclap_end = new QPushButton(groupBox_state);
        button_event_handclap_end->setObjectName(QString::fromUtf8("button_event_handclap_end"));
        button_event_handclap_end->setMinimumSize(QSize(0, 50));

        verticalLayout_38->addWidget(button_event_handclap_end);

        verticalSpacer_25 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_25);


        horizontalLayout_13->addLayout(verticalLayout_38);

        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        button_event_handshake = new QPushButton(groupBox_state);
        button_event_handshake->setObjectName(QString::fromUtf8("button_event_handshake"));
        button_event_handshake->setMinimumSize(QSize(0, 50));

        verticalLayout_35->addWidget(button_event_handshake);

        button_event_handshake_turn = new QPushButton(groupBox_state);
        button_event_handshake_turn->setObjectName(QString::fromUtf8("button_event_handshake_turn"));
        button_event_handshake_turn->setMinimumSize(QSize(0, 50));

        verticalLayout_35->addWidget(button_event_handshake_turn);

        button_event_handshake_ready = new QPushButton(groupBox_state);
        button_event_handshake_ready->setObjectName(QString::fromUtf8("button_event_handshake_ready"));
        button_event_handshake_ready->setMinimumSize(QSize(0, 50));

        verticalLayout_35->addWidget(button_event_handshake_ready);

        button_event_handshake_do = new QPushButton(groupBox_state);
        button_event_handshake_do->setObjectName(QString::fromUtf8("button_event_handshake_do"));
        button_event_handshake_do->setMinimumSize(QSize(0, 50));

        verticalLayout_35->addWidget(button_event_handshake_do);

        button_event_handshake_end = new QPushButton(groupBox_state);
        button_event_handshake_end->setObjectName(QString::fromUtf8("button_event_handshake_end"));
        button_event_handshake_end->setMinimumSize(QSize(0, 50));

        verticalLayout_35->addWidget(button_event_handshake_end);

        button_event_handshake_motion1 = new QPushButton(groupBox_state);
        button_event_handshake_motion1->setObjectName(QString::fromUtf8("button_event_handshake_motion1"));
        button_event_handshake_motion1->setMinimumSize(QSize(0, 50));

        verticalLayout_35->addWidget(button_event_handshake_motion1);

        button_event_handshake_motion2 = new QPushButton(groupBox_state);
        button_event_handshake_motion2->setObjectName(QString::fromUtf8("button_event_handshake_motion2"));
        button_event_handshake_motion2->setMinimumSize(QSize(0, 50));

        verticalLayout_35->addWidget(button_event_handshake_motion2);

        button_event_handshake_motion3 = new QPushButton(groupBox_state);
        button_event_handshake_motion3->setObjectName(QString::fromUtf8("button_event_handshake_motion3"));
        button_event_handshake_motion3->setMinimumSize(QSize(0, 50));

        verticalLayout_35->addWidget(button_event_handshake_motion3);

        button_event_handshake_return = new QPushButton(groupBox_state);
        button_event_handshake_return->setObjectName(QString::fromUtf8("button_event_handshake_return"));
        button_event_handshake_return->setMinimumSize(QSize(0, 50));

        verticalLayout_35->addWidget(button_event_handshake_return);

        verticalSpacer_22 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_35->addItem(verticalSpacer_22);


        horizontalLayout_13->addLayout(verticalLayout_35);

        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        button_event_hello = new QPushButton(groupBox_state);
        button_event_hello->setObjectName(QString::fromUtf8("button_event_hello"));
        button_event_hello->setMinimumSize(QSize(0, 50));

        verticalLayout_36->addWidget(button_event_hello);

        button_event_hello_ready = new QPushButton(groupBox_state);
        button_event_hello_ready->setObjectName(QString::fromUtf8("button_event_hello_ready"));
        button_event_hello_ready->setMinimumSize(QSize(0, 50));

        verticalLayout_36->addWidget(button_event_hello_ready);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, -1);
        label_21 = new QLabel(groupBox_state);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_10->addWidget(label_21);

        spin_hello_count = new QSpinBox(groupBox_state);
        spin_hello_count->setObjectName(QString::fromUtf8("spin_hello_count"));
        spin_hello_count->setMinimum(1);

        horizontalLayout_10->addWidget(spin_hello_count);


        verticalLayout_36->addLayout(horizontalLayout_10);

        button_event_hello_do = new QPushButton(groupBox_state);
        button_event_hello_do->setObjectName(QString::fromUtf8("button_event_hello_do"));
        button_event_hello_do->setMinimumSize(QSize(0, 50));

        verticalLayout_36->addWidget(button_event_hello_do);

        button_event_hello_end = new QPushButton(groupBox_state);
        button_event_hello_end->setObjectName(QString::fromUtf8("button_event_hello_end"));
        button_event_hello_end->setMinimumSize(QSize(0, 50));

        verticalLayout_36->addWidget(button_event_hello_end);

        button_event_hello_introduce = new QPushButton(groupBox_state);
        button_event_hello_introduce->setObjectName(QString::fromUtf8("button_event_hello_introduce"));
        button_event_hello_introduce->setMinimumSize(QSize(0, 50));

        verticalLayout_36->addWidget(button_event_hello_introduce);

        button_event_hello_introduce_end = new QPushButton(groupBox_state);
        button_event_hello_introduce_end->setObjectName(QString::fromUtf8("button_event_hello_introduce_end"));
        button_event_hello_introduce_end->setMinimumSize(QSize(0, 50));

        verticalLayout_36->addWidget(button_event_hello_introduce_end);

        verticalSpacer_23 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_36->addItem(verticalSpacer_23);


        horizontalLayout_13->addLayout(verticalLayout_36);


        verticalLayout_34->addLayout(horizontalLayout_13);


        horizontalLayout_9->addLayout(verticalLayout_34);

        horizontalLayout_9->setStretch(0, 1);

        verticalLayout_14->addLayout(horizontalLayout_9);

        button_mode_change = new QPushButton(groupBox_state);
        button_mode_change->setObjectName(QString::fromUtf8("button_mode_change"));
        button_mode_change->setMinimumSize(QSize(0, 50));
        button_mode_change->setAutoFillBackground(false);

        verticalLayout_14->addWidget(button_mode_change);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_19 = new QLabel(groupBox_state);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_6->addWidget(label_19);

        line_edit_current_state = new QLineEdit(groupBox_state);
        line_edit_current_state->setObjectName(QString::fromUtf8("line_edit_current_state"));
        line_edit_current_state->setReadOnly(true);

        horizontalLayout_6->addWidget(line_edit_current_state);


        verticalLayout_14->addLayout(horizontalLayout_6);


        horizontalLayout_4->addWidget(groupBox_state);


        verticalLayout_16->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 189, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_16->addWidget(line_2);


        hboxLayout->addLayout(verticalLayout_16);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_motor_manager = new QGroupBox(centralwidget);
        groupBox_motor_manager->setObjectName(QString::fromUtf8("groupBox_motor_manager"));
        verticalLayout_4 = new QVBoxLayout(groupBox_motor_manager);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_motor_manager);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox_motor_manager);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_motor_manager);

        button_mini_drc1 = new QPushButton(centralwidget);
        button_mini_drc1->setObjectName(QString::fromUtf8("button_mini_drc1"));

        verticalLayout_2->addWidget(button_mini_drc1);

        button_mini_drc2 = new QPushButton(centralwidget);
        button_mini_drc2->setObjectName(QString::fromUtf8("button_mini_drc2"));

        verticalLayout_2->addWidget(button_mini_drc2);

        button_mini_drc3 = new QPushButton(centralwidget);
        button_mini_drc3->setObjectName(QString::fromUtf8("button_mini_drc3"));

        verticalLayout_2->addWidget(button_mini_drc3);

        button_mini_drc4 = new QPushButton(centralwidget);
        button_mini_drc4->setObjectName(QString::fromUtf8("button_mini_drc4"));

        verticalLayout_2->addWidget(button_mini_drc4);

        button_mini_drc5 = new QPushButton(centralwidget);
        button_mini_drc5->setObjectName(QString::fromUtf8("button_mini_drc5"));

        verticalLayout_2->addWidget(button_mini_drc5);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);

        groupBox_recog_ctrl = new QGroupBox(centralwidget);
        groupBox_recog_ctrl->setObjectName(QString::fromUtf8("groupBox_recog_ctrl"));
        verticalLayout = new QVBoxLayout(groupBox_recog_ctrl);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_recog_ctrl = new QGridLayout();
        gridLayout_recog_ctrl->setObjectName(QString::fromUtf8("gridLayout_recog_ctrl"));
        gridLayout_recog_ctrl->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_recog_ctrl->setHorizontalSpacing(8);
        gridLayout_recog_ctrl->setVerticalSpacing(5);
        gridLayout_recog_ctrl->setContentsMargins(0, 0, -1, -1);
        line_edit_scan_roll = new QLineEdit(groupBox_recog_ctrl);
        line_edit_scan_roll->setObjectName(QString::fromUtf8("line_edit_scan_roll"));
        line_edit_scan_roll->setReadOnly(true);

        gridLayout_recog_ctrl->addWidget(line_edit_scan_roll, 4, 1, 1, 1);

        line_edit_scan_y = new QLineEdit(groupBox_recog_ctrl);
        line_edit_scan_y->setObjectName(QString::fromUtf8("line_edit_scan_y"));
        line_edit_scan_y->setReadOnly(true);

        gridLayout_recog_ctrl->addWidget(line_edit_scan_y, 1, 1, 1, 1);

        line_edit_scan_x = new QLineEdit(groupBox_recog_ctrl);
        line_edit_scan_x->setObjectName(QString::fromUtf8("line_edit_scan_x"));
        line_edit_scan_x->setReadOnly(true);

        gridLayout_recog_ctrl->addWidget(line_edit_scan_x, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_recog_ctrl);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_recog_ctrl->addWidget(label_12, 0, 0, 1, 1);

        label_16 = new QLabel(groupBox_recog_ctrl);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_recog_ctrl->addWidget(label_16, 5, 0, 1, 1);

        label_13 = new QLabel(groupBox_recog_ctrl);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_recog_ctrl->addWidget(label_13, 1, 0, 1, 1);

        label_14 = new QLabel(groupBox_recog_ctrl);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_recog_ctrl->addWidget(label_14, 2, 0, 1, 1);

        line_edit_scan_z = new QLineEdit(groupBox_recog_ctrl);
        line_edit_scan_z->setObjectName(QString::fromUtf8("line_edit_scan_z"));
        line_edit_scan_z->setReadOnly(true);

        gridLayout_recog_ctrl->addWidget(line_edit_scan_z, 2, 1, 1, 1);

        line_edit_scan_yaw = new QLineEdit(groupBox_recog_ctrl);
        line_edit_scan_yaw->setObjectName(QString::fromUtf8("line_edit_scan_yaw"));
        line_edit_scan_yaw->setReadOnly(true);

        gridLayout_recog_ctrl->addWidget(line_edit_scan_yaw, 6, 1, 1, 1);

        button_scan = new QPushButton(groupBox_recog_ctrl);
        button_scan->setObjectName(QString::fromUtf8("button_scan"));

        gridLayout_recog_ctrl->addWidget(button_scan, 7, 1, 1, 1);

        line_edit_scan_pitch = new QLineEdit(groupBox_recog_ctrl);
        line_edit_scan_pitch->setObjectName(QString::fromUtf8("line_edit_scan_pitch"));
        line_edit_scan_pitch->setReadOnly(true);

        gridLayout_recog_ctrl->addWidget(line_edit_scan_pitch, 5, 1, 1, 1);

        label_15 = new QLabel(groupBox_recog_ctrl);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_recog_ctrl->addWidget(label_15, 4, 0, 1, 1);

        label_17 = new QLabel(groupBox_recog_ctrl);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_recog_ctrl->addWidget(label_17, 6, 0, 1, 1);

        label_18 = new QLabel(groupBox_recog_ctrl);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_recog_ctrl->addWidget(label_18, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_recog_ctrl);


        verticalLayout_2->addWidget(groupBox_recog_ctrl);


        hboxLayout->addLayout(verticalLayout_2);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, -1, -1, -1);
        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_13);

        button_estop = new QPushButton(centralwidget);
        button_estop->setObjectName(QString::fromUtf8("button_estop"));
        button_estop->setMinimumSize(QSize(0, 150));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        button_estop->setFont(font);
        button_estop->setDefault(false);
        button_estop->setFlat(true);

        verticalLayout_22->addWidget(button_estop);


        hboxLayout->addLayout(verticalLayout_22);

        hboxLayout->setStretch(0, 1);
        StatusWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StatusWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1823, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        StatusWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StatusWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StatusWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(StatusWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), StatusWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(StatusWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StatusWindow)
    {
        StatusWindow->setWindowTitle(QApplication::translate("StatusWindow", "DYROS THORMANG User Interface", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("StatusWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("StatusWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("StatusWindow", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("StatusWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("StatusWindow", "About &Qt", 0, QApplication::UnicodeUTF8));
        groupBox_state->setTitle(QApplication::translate("StatusWindow", "State Setting", 0, QApplication::UnicodeUTF8));
        button_power_on->setText(QApplication::translate("StatusWindow", "power_on", 0, QApplication::UnicodeUTF8));
        button_initialize->setText(QApplication::translate("StatusWindow", "initialize_pose", 0, QApplication::UnicodeUTF8));
        button_mission->setText(QApplication::translate("StatusWindow", "mission", 0, QApplication::UnicodeUTF8));
        button_auto_door_start->setText(QApplication::translate("StatusWindow", "door", 0, QApplication::UnicodeUTF8));
        button_auto_door_reach->setText(QApplication::translate("StatusWindow", "reach", 0, QApplication::UnicodeUTF8));
        button_auto_door_open->setText(QApplication::translate("StatusWindow", "open", 0, QApplication::UnicodeUTF8));
        button_auto_door_push->setText(QApplication::translate("StatusWindow", "push", 0, QApplication::UnicodeUTF8));
        button_auto_valve_start->setText(QApplication::translate("StatusWindow", "valve", 0, QApplication::UnicodeUTF8));
        button_auto_valve_approach->setText(QApplication::translate("StatusWindow", "approach", 0, QApplication::UnicodeUTF8));
        button_auto_valve_close->setText(QApplication::translate("StatusWindow", "close", 0, QApplication::UnicodeUTF8));
        button_auto_egress_start->setText(QApplication::translate("StatusWindow", "egress", 0, QApplication::UnicodeUTF8));
        button_auto_egress_init->setText(QApplication::translate("StatusWindow", "Init", 0, QApplication::UnicodeUTF8));
        button_auto_egress_egress->setText(QApplication::translate("StatusWindow", "Do Egress", 0, QApplication::UnicodeUTF8));
        button_auto_egress_standby->setText(QApplication::translate("StatusWindow", "Standby", 0, QApplication::UnicodeUTF8));
        button_auto_egress_hello->setText(QApplication::translate("StatusWindow", "Hello :)", 0, QApplication::UnicodeUTF8));
        button_auto_egress_guide->setText(QApplication::translate("StatusWindow", "Guide >", 0, QApplication::UnicodeUTF8));
        button_mission4->setText(QApplication::translate("StatusWindow", "Stair", 0, QApplication::UnicodeUTF8));
        button_event->setText(QApplication::translate("StatusWindow", "event", 0, QApplication::UnicodeUTF8));
        button_event_handclap->setText(QApplication::translate("StatusWindow", "Handclap", 0, QApplication::UnicodeUTF8));
        button_event_handclap_ready->setText(QApplication::translate("StatusWindow", "Ready", 0, QApplication::UnicodeUTF8));
        button_event_handclap_do->setText(QApplication::translate("StatusWindow", "Do", 0, QApplication::UnicodeUTF8));
        button_event_handclap_end->setText(QApplication::translate("StatusWindow", "End", 0, QApplication::UnicodeUTF8));
        button_event_handshake->setText(QApplication::translate("StatusWindow", "Handshake", 0, QApplication::UnicodeUTF8));
        button_event_handshake_turn->setText(QApplication::translate("StatusWindow", "Turn", 0, QApplication::UnicodeUTF8));
        button_event_handshake_ready->setText(QApplication::translate("StatusWindow", "Ready", 0, QApplication::UnicodeUTF8));
        button_event_handshake_do->setText(QApplication::translate("StatusWindow", "Do", 0, QApplication::UnicodeUTF8));
        button_event_handshake_end->setText(QApplication::translate("StatusWindow", "End", 0, QApplication::UnicodeUTF8));
        button_event_handshake_motion1->setText(QApplication::translate("StatusWindow", "Mot1", 0, QApplication::UnicodeUTF8));
        button_event_handshake_motion2->setText(QApplication::translate("StatusWindow", "Mot2", 0, QApplication::UnicodeUTF8));
        button_event_handshake_motion3->setText(QApplication::translate("StatusWindow", "Mot3", 0, QApplication::UnicodeUTF8));
        button_event_handshake_return->setText(QApplication::translate("StatusWindow", "Return", 0, QApplication::UnicodeUTF8));
        button_event_hello->setText(QApplication::translate("StatusWindow", "Hello", 0, QApplication::UnicodeUTF8));
        button_event_hello_ready->setText(QApplication::translate("StatusWindow", "Ready", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("StatusWindow", "cnt", 0, QApplication::UnicodeUTF8));
        button_event_hello_do->setText(QApplication::translate("StatusWindow", "Do", 0, QApplication::UnicodeUTF8));
        button_event_hello_end->setText(QApplication::translate("StatusWindow", "End", 0, QApplication::UnicodeUTF8));
        button_event_hello_introduce->setText(QApplication::translate("StatusWindow", "Introduce", 0, QApplication::UnicodeUTF8));
        button_event_hello_introduce_end->setText(QApplication::translate("StatusWindow", "Intro End", 0, QApplication::UnicodeUTF8));
        button_mode_change->setText(QApplication::translate("StatusWindow", "Mode Change", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("StatusWindow", "Current State - ", 0, QApplication::UnicodeUTF8));
        groupBox_motor_manager->setTitle(QApplication::translate("StatusWindow", "Motor Management", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StatusWindow", "Status", 0, QApplication::UnicodeUTF8));
        button_mini_drc1->setText(QApplication::translate("StatusWindow", "button_mini_drc1", 0, QApplication::UnicodeUTF8));
        button_mini_drc2->setText(QApplication::translate("StatusWindow", "button_mini_drc2", 0, QApplication::UnicodeUTF8));
        button_mini_drc3->setText(QApplication::translate("StatusWindow", "button_mini_drc3", 0, QApplication::UnicodeUTF8));
        button_mini_drc4->setText(QApplication::translate("StatusWindow", "button_mini_drc4", 0, QApplication::UnicodeUTF8));
        button_mini_drc5->setText(QApplication::translate("StatusWindow", "button_mini_drc5", 0, QApplication::UnicodeUTF8));
        groupBox_recog_ctrl->setTitle(QApplication::translate("StatusWindow", "Recog Control", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("StatusWindow", "x", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("StatusWindow", "pitch", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("StatusWindow", "y", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("StatusWindow", "z", 0, QApplication::UnicodeUTF8));
        button_scan->setText(QApplication::translate("StatusWindow", "Scan", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("StatusWindow", "roll", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("StatusWindow", "yaw", 0, QApplication::UnicodeUTF8));
        label_18->setText(QString());
        button_estop->setText(QApplication::translate("StatusWindow", "SHUT\n"
"DOWN", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("StatusWindow", "&App", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StatusWindow: public Ui_StatusWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUS_WINDOW_H
