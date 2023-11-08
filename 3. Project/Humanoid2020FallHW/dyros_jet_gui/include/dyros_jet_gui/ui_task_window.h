/********************************************************************************
** Form generated from reading UI file 'task_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_WINDOW_H
#define UI_TASK_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskWindow
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *verticalLayout_19;
    QGroupBox *groupBox_task_ctrl;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_task_ctrl;
    QLabel *label_36;
    QGridLayout *gridLayout_task_ctrl_2;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_task_ctrl_option;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox_ee_type;
    QLabel *label_18;
    QLabel *label_12;
    QComboBox *comboBox_t_m;
    QFrame *line_7;
    QGridLayout *gridLayout_absol;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_y_ta;
    QDoubleSpinBox *doubleSpinBox_z_ta;
    QDoubleSpinBox *doubleSpinBox_x_ta;
    QLabel *label_5;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_r_ta;
    QDoubleSpinBox *doubleSpinBox_p_ta;
    QLabel *label_7;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_y_ta_2;
    QPushButton *pushButton_task_option;
    QFrame *line;
    QGroupBox *groupBox_walk_ctrl;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox_send_data_cb;
    QCheckBox *checkBox_DCM;
    QVBoxLayout *verticalLayout_30;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_walk_recov_time;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_walk_imp_time;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_18;
    QGridLayout *gridLayout_11;
    QDoubleSpinBox *doubleSpinBox_walk_theta;
    QLabel *label_25;
    QLabel *label_33;
    QLabel *label_26;
    QDoubleSpinBox *doubleSpinBox_walk_step_x;
    QDoubleSpinBox *doubleSpinBox_walk_height;
    QLabel *label_24;
    QDoubleSpinBox *doubleSpinBox_walk_x;
    QDoubleSpinBox *doubleSpinBox_walk_z;
    QLabel *label_32;
    QDoubleSpinBox *doubleSpinBox_walk_step_y;
    QDoubleSpinBox *doubleSpinBox_walk_y;
    QLabel *label_31;
    QLabel *label_27;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_39;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox_method;
    QLabel *label_34;
    QLabel *label_23;
    QLabel *label_22;
    QComboBox *comboBox_heel_toe;
    QLabel *label_35;
    QComboBox *comboBox_first_step;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_hip_compensator;
    QCheckBox *checkBox_ext_encoder_cmp;
    QFrame *line_5;
    QPushButton *button_walk_init_lowerbody;
    QPushButton *button_walk_init_wholebody;
    QPushButton *button_walk_start;
    QPushButton *button_walk_stop;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_12;
    QDoubleSpinBox *doubleSpinBox_hand_finger2;
    QLabel *label_40;
    QLabel *label_28;
    QLabel *label_30;
    QDoubleSpinBox *doubleSpinBox_hand_finger1;
    QDoubleSpinBox *doubleSpinBox_hand_thumb_fe;
    QLabel *label_29;
    QDoubleSpinBox *doubleSpinBox_hand_thumb_aa;
    QPushButton *button_hand_command;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_8;
    QPushButton *button_hand_preset_open;
    QPushButton *button_hand_preset_drill_power;
    QPushButton *button_hand_preset_box_pinch;
    QPushButton *pushButton_4;
    QFrame *line_4;
    QGroupBox *groupBox_sensor_ctrl;
    QVBoxLayout *verticalLayout_2;
    QPushButton *button_ft_calib;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *comboBox_LF;
    QFrame *line_8;
    QLabel *label_13;
    QComboBox *comboBox_RF;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_ft_start;
    QPushButton *pushButton_ft_stop;
    QPushButton *pushButton_ft_reset;
    QFrame *line_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QFrame *line_9;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_8;
    QFrame *line_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QFrame *line_10;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_9;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TaskWindow)
    {
        if (TaskWindow->objectName().isEmpty())
            TaskWindow->setObjectName(QString::fromUtf8("TaskWindow"));
        TaskWindow->resize(1920, 1080);
        TaskWindow->setMinimumSize(QSize(0, 880));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        TaskWindow->setWindowIcon(icon);
        TaskWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        TaskWindow->setIconSize(QSize(24, 24));
        action_Quit = new QAction(TaskWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(TaskWindow);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(TaskWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(TaskWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(TaskWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        groupBox_task_ctrl = new QGroupBox(centralwidget);
        groupBox_task_ctrl->setObjectName(QString::fromUtf8("groupBox_task_ctrl"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_task_ctrl);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout_task_ctrl = new QGridLayout();
        gridLayout_task_ctrl->setObjectName(QString::fromUtf8("gridLayout_task_ctrl"));
        gridLayout_task_ctrl->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_task_ctrl->setHorizontalSpacing(8);
        gridLayout_task_ctrl->setVerticalSpacing(5);
        gridLayout_task_ctrl->setContentsMargins(0, 0, -1, -1);

        horizontalLayout_3->addLayout(gridLayout_task_ctrl);

        label_36 = new QLabel(groupBox_task_ctrl);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_3->addWidget(label_36);

        gridLayout_task_ctrl_2 = new QGridLayout();
        gridLayout_task_ctrl_2->setObjectName(QString::fromUtf8("gridLayout_task_ctrl_2"));

        horizontalLayout_3->addLayout(gridLayout_task_ctrl_2);


        verticalLayout_19->addWidget(groupBox_task_ctrl);


        hboxLayout->addLayout(verticalLayout_19);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_task_ctrl_option = new QGroupBox(centralwidget);
        groupBox_task_ctrl_option->setObjectName(QString::fromUtf8("groupBox_task_ctrl_option"));
        verticalLayout = new QVBoxLayout(groupBox_task_ctrl_option);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        comboBox_ee_type = new QComboBox(groupBox_task_ctrl_option);
        comboBox_ee_type->setObjectName(QString::fromUtf8("comboBox_ee_type"));

        gridLayout_3->addWidget(comboBox_ee_type, 1, 1, 1, 1);

        label_18 = new QLabel(groupBox_task_ctrl_option);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 1, 0, 1, 1);

        label_12 = new QLabel(groupBox_task_ctrl_option);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        comboBox_t_m = new QComboBox(groupBox_task_ctrl_option);
        comboBox_t_m->setObjectName(QString::fromUtf8("comboBox_t_m"));

        gridLayout_3->addWidget(comboBox_t_m, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        line_7 = new QFrame(groupBox_task_ctrl_option);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_7);

        gridLayout_absol = new QGridLayout();
        gridLayout_absol->setObjectName(QString::fromUtf8("gridLayout_absol"));
        label_6 = new QLabel(groupBox_task_ctrl_option);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_absol->addWidget(label_6, 2, 0, 1, 1);

        doubleSpinBox_y_ta = new QDoubleSpinBox(groupBox_task_ctrl_option);
        doubleSpinBox_y_ta->setObjectName(QString::fromUtf8("doubleSpinBox_y_ta"));
        doubleSpinBox_y_ta->setMinimum(-99.99);

        gridLayout_absol->addWidget(doubleSpinBox_y_ta, 1, 1, 1, 1);

        doubleSpinBox_z_ta = new QDoubleSpinBox(groupBox_task_ctrl_option);
        doubleSpinBox_z_ta->setObjectName(QString::fromUtf8("doubleSpinBox_z_ta"));
        doubleSpinBox_z_ta->setMinimum(-99.99);

        gridLayout_absol->addWidget(doubleSpinBox_z_ta, 2, 1, 1, 1);

        doubleSpinBox_x_ta = new QDoubleSpinBox(groupBox_task_ctrl_option);
        doubleSpinBox_x_ta->setObjectName(QString::fromUtf8("doubleSpinBox_x_ta"));
        doubleSpinBox_x_ta->setMinimum(-99.99);
        doubleSpinBox_x_ta->setMaximum(99.99);

        gridLayout_absol->addWidget(doubleSpinBox_x_ta, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_task_ctrl_option);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_absol->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_task_ctrl_option);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_absol->addWidget(label_4, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_absol);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(groupBox_task_ctrl_option);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        doubleSpinBox_r_ta = new QDoubleSpinBox(groupBox_task_ctrl_option);
        doubleSpinBox_r_ta->setObjectName(QString::fromUtf8("doubleSpinBox_r_ta"));
        doubleSpinBox_r_ta->setMinimum(-360);
        doubleSpinBox_r_ta->setMaximum(360);

        gridLayout->addWidget(doubleSpinBox_r_ta, 0, 1, 1, 1);

        doubleSpinBox_p_ta = new QDoubleSpinBox(groupBox_task_ctrl_option);
        doubleSpinBox_p_ta->setObjectName(QString::fromUtf8("doubleSpinBox_p_ta"));
        doubleSpinBox_p_ta->setMinimum(-360);
        doubleSpinBox_p_ta->setMaximum(360);

        gridLayout->addWidget(doubleSpinBox_p_ta, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_task_ctrl_option);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_task_ctrl_option);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        doubleSpinBox_y_ta_2 = new QDoubleSpinBox(groupBox_task_ctrl_option);
        doubleSpinBox_y_ta_2->setObjectName(QString::fromUtf8("doubleSpinBox_y_ta_2"));
        doubleSpinBox_y_ta_2->setMinimum(-360);
        doubleSpinBox_y_ta_2->setMaximum(360);

        gridLayout->addWidget(doubleSpinBox_y_ta_2, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton_task_option = new QPushButton(groupBox_task_ctrl_option);
        pushButton_task_option->setObjectName(QString::fromUtf8("pushButton_task_option"));

        verticalLayout->addWidget(pushButton_task_option);


        verticalLayout_6->addWidget(groupBox_task_ctrl_option);


        horizontalLayout_4->addLayout(verticalLayout_6);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        groupBox_walk_ctrl = new QGroupBox(centralwidget);
        groupBox_walk_ctrl->setObjectName(QString::fromUtf8("groupBox_walk_ctrl"));
        verticalLayout_5 = new QVBoxLayout(groupBox_walk_ctrl);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkBox_send_data_cb = new QCheckBox(groupBox_walk_ctrl);
        checkBox_send_data_cb->setObjectName(QString::fromUtf8("checkBox_send_data_cb"));

        verticalLayout_5->addWidget(checkBox_send_data_cb);

        checkBox_DCM = new QCheckBox(groupBox_walk_ctrl);
        checkBox_DCM->setObjectName(QString::fromUtf8("checkBox_DCM"));

        verticalLayout_5->addWidget(checkBox_DCM);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_11 = new QLabel(groupBox_walk_ctrl);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_2->addWidget(label_11);

        doubleSpinBox_walk_recov_time = new QDoubleSpinBox(groupBox_walk_ctrl);
        doubleSpinBox_walk_recov_time->setObjectName(QString::fromUtf8("doubleSpinBox_walk_recov_time"));

        horizontalLayout_2->addWidget(doubleSpinBox_walk_recov_time);

        label_10 = new QLabel(groupBox_walk_ctrl);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        doubleSpinBox_walk_imp_time = new QDoubleSpinBox(groupBox_walk_ctrl);
        doubleSpinBox_walk_imp_time->setObjectName(QString::fromUtf8("doubleSpinBox_walk_imp_time"));

        horizontalLayout_2->addWidget(doubleSpinBox_walk_imp_time);


        verticalLayout_30->addLayout(horizontalLayout_2);

        line_6 = new QFrame(groupBox_walk_ctrl);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_30->addWidget(line_6);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        doubleSpinBox_walk_theta = new QDoubleSpinBox(groupBox_walk_ctrl);
        doubleSpinBox_walk_theta->setObjectName(QString::fromUtf8("doubleSpinBox_walk_theta"));

        gridLayout_11->addWidget(doubleSpinBox_walk_theta, 4, 1, 1, 1);

        label_25 = new QLabel(groupBox_walk_ctrl);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_11->addWidget(label_25, 1, 0, 1, 1);

        label_33 = new QLabel(groupBox_walk_ctrl);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_11->addWidget(label_33, 6, 0, 1, 1);

        label_26 = new QLabel(groupBox_walk_ctrl);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_11->addWidget(label_26, 2, 0, 1, 1);

        doubleSpinBox_walk_step_x = new QDoubleSpinBox(groupBox_walk_ctrl);
        doubleSpinBox_walk_step_x->setObjectName(QString::fromUtf8("doubleSpinBox_walk_step_x"));
        doubleSpinBox_walk_step_x->setMaximum(5);
        doubleSpinBox_walk_step_x->setSingleStep(0.01);
        doubleSpinBox_walk_step_x->setValue(0.2);

        gridLayout_11->addWidget(doubleSpinBox_walk_step_x, 5, 1, 1, 1);

        doubleSpinBox_walk_height = new QDoubleSpinBox(groupBox_walk_ctrl);
        doubleSpinBox_walk_height->setObjectName(QString::fromUtf8("doubleSpinBox_walk_height"));
        doubleSpinBox_walk_height->setMaximum(1.5);
        doubleSpinBox_walk_height->setSingleStep(0.05);
        doubleSpinBox_walk_height->setValue(0.75);

        gridLayout_11->addWidget(doubleSpinBox_walk_height, 3, 1, 1, 1);

        label_24 = new QLabel(groupBox_walk_ctrl);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_11->addWidget(label_24, 0, 0, 1, 1);

        doubleSpinBox_walk_x = new QDoubleSpinBox(groupBox_walk_ctrl);
        doubleSpinBox_walk_x->setObjectName(QString::fromUtf8("doubleSpinBox_walk_x"));
        doubleSpinBox_walk_x->setMaximum(99);
        doubleSpinBox_walk_x->setSingleStep(0.05);

        gridLayout_11->addWidget(doubleSpinBox_walk_x, 0, 1, 1, 1);

        doubleSpinBox_walk_z = new QDoubleSpinBox(groupBox_walk_ctrl);
        doubleSpinBox_walk_z->setObjectName(QString::fromUtf8("doubleSpinBox_walk_z"));
        doubleSpinBox_walk_z->setMaximum(99);
        doubleSpinBox_walk_z->setSingleStep(0.05);

        gridLayout_11->addWidget(doubleSpinBox_walk_z, 2, 1, 1, 1);

        label_32 = new QLabel(groupBox_walk_ctrl);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_11->addWidget(label_32, 5, 0, 1, 1);

        doubleSpinBox_walk_step_y = new QDoubleSpinBox(groupBox_walk_ctrl);
        doubleSpinBox_walk_step_y->setObjectName(QString::fromUtf8("doubleSpinBox_walk_step_y"));
        doubleSpinBox_walk_step_y->setMaximum(5);
        doubleSpinBox_walk_step_y->setSingleStep(0.01);
        doubleSpinBox_walk_step_y->setValue(0.1);

        gridLayout_11->addWidget(doubleSpinBox_walk_step_y, 6, 1, 1, 1);

        doubleSpinBox_walk_y = new QDoubleSpinBox(groupBox_walk_ctrl);
        doubleSpinBox_walk_y->setObjectName(QString::fromUtf8("doubleSpinBox_walk_y"));
        doubleSpinBox_walk_y->setMaximum(99);
        doubleSpinBox_walk_y->setSingleStep(0.05);

        gridLayout_11->addWidget(doubleSpinBox_walk_y, 1, 1, 1, 1);

        label_31 = new QLabel(groupBox_walk_ctrl);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_11->addWidget(label_31, 4, 0, 1, 1);

        label_27 = new QLabel(groupBox_walk_ctrl);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_11->addWidget(label_27, 3, 0, 1, 1);


        horizontalLayout_18->addLayout(gridLayout_11);

        line_3 = new QFrame(groupBox_walk_ctrl);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_18->addWidget(line_3);

        verticalLayout_39 = new QVBoxLayout();
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        comboBox_method = new QComboBox(groupBox_walk_ctrl);
        comboBox_method->setObjectName(QString::fromUtf8("comboBox_method"));

        gridLayout_4->addWidget(comboBox_method, 3, 1, 1, 1);

        label_34 = new QLabel(groupBox_walk_ctrl);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_4->addWidget(label_34, 4, 0, 1, 1);

        label_23 = new QLabel(groupBox_walk_ctrl);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_4->addWidget(label_23, 3, 0, 1, 1);

        label_22 = new QLabel(groupBox_walk_ctrl);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_4->addWidget(label_22, 0, 0, 1, 1);

        comboBox_heel_toe = new QComboBox(groupBox_walk_ctrl);
        comboBox_heel_toe->setObjectName(QString::fromUtf8("comboBox_heel_toe"));

        gridLayout_4->addWidget(comboBox_heel_toe, 5, 1, 1, 1);

        label_35 = new QLabel(groupBox_walk_ctrl);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_4->addWidget(label_35, 5, 0, 1, 1);

        comboBox_first_step = new QComboBox(groupBox_walk_ctrl);
        comboBox_first_step->setObjectName(QString::fromUtf8("comboBox_first_step"));

        gridLayout_4->addWidget(comboBox_first_step, 4, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, -1);
        checkBox_hip_compensator = new QCheckBox(groupBox_walk_ctrl);
        checkBox_hip_compensator->setObjectName(QString::fromUtf8("checkBox_hip_compensator"));

        verticalLayout_4->addWidget(checkBox_hip_compensator);

        checkBox_ext_encoder_cmp = new QCheckBox(groupBox_walk_ctrl);
        checkBox_ext_encoder_cmp->setObjectName(QString::fromUtf8("checkBox_ext_encoder_cmp"));

        verticalLayout_4->addWidget(checkBox_ext_encoder_cmp);


        gridLayout_4->addLayout(verticalLayout_4, 0, 1, 1, 1);


        verticalLayout_39->addLayout(gridLayout_4);

        line_5 = new QFrame(groupBox_walk_ctrl);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_39->addWidget(line_5);

        button_walk_init_lowerbody = new QPushButton(groupBox_walk_ctrl);
        button_walk_init_lowerbody->setObjectName(QString::fromUtf8("button_walk_init_lowerbody"));

        verticalLayout_39->addWidget(button_walk_init_lowerbody);

        button_walk_init_wholebody = new QPushButton(groupBox_walk_ctrl);
        button_walk_init_wholebody->setObjectName(QString::fromUtf8("button_walk_init_wholebody"));

        verticalLayout_39->addWidget(button_walk_init_wholebody);

        button_walk_start = new QPushButton(groupBox_walk_ctrl);
        button_walk_start->setObjectName(QString::fromUtf8("button_walk_start"));

        verticalLayout_39->addWidget(button_walk_start);

        button_walk_stop = new QPushButton(groupBox_walk_ctrl);
        button_walk_stop->setObjectName(QString::fromUtf8("button_walk_stop"));

        verticalLayout_39->addWidget(button_walk_stop);


        horizontalLayout_18->addLayout(verticalLayout_39);


        verticalLayout_30->addLayout(horizontalLayout_18);


        verticalLayout_5->addLayout(verticalLayout_30);


        horizontalLayout_4->addWidget(groupBox_walk_ctrl);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        doubleSpinBox_hand_finger2 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_hand_finger2->setObjectName(QString::fromUtf8("doubleSpinBox_hand_finger2"));
        doubleSpinBox_hand_finger2->setMinimum(-90);
        doubleSpinBox_hand_finger2->setMaximum(90);
        doubleSpinBox_hand_finger2->setSingleStep(3);
        doubleSpinBox_hand_finger2->setValue(0);

        gridLayout_12->addWidget(doubleSpinBox_hand_finger2, 1, 1, 1, 1);

        label_40 = new QLabel(groupBox_2);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_12->addWidget(label_40, 3, 0, 1, 1);

        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_12->addWidget(label_28, 1, 0, 1, 1);

        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_12->addWidget(label_30, 0, 0, 1, 1);

        doubleSpinBox_hand_finger1 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_hand_finger1->setObjectName(QString::fromUtf8("doubleSpinBox_hand_finger1"));
        doubleSpinBox_hand_finger1->setMinimum(-90);
        doubleSpinBox_hand_finger1->setMaximum(90);
        doubleSpinBox_hand_finger1->setSingleStep(3);
        doubleSpinBox_hand_finger1->setValue(0);

        gridLayout_12->addWidget(doubleSpinBox_hand_finger1, 0, 1, 1, 1);

        doubleSpinBox_hand_thumb_fe = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_hand_thumb_fe->setObjectName(QString::fromUtf8("doubleSpinBox_hand_thumb_fe"));
        doubleSpinBox_hand_thumb_fe->setMinimum(-90);
        doubleSpinBox_hand_thumb_fe->setMaximum(90);
        doubleSpinBox_hand_thumb_fe->setSingleStep(3);
        doubleSpinBox_hand_thumb_fe->setValue(0);

        gridLayout_12->addWidget(doubleSpinBox_hand_thumb_fe, 2, 1, 1, 1);

        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_12->addWidget(label_29, 2, 0, 1, 1);

        doubleSpinBox_hand_thumb_aa = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_hand_thumb_aa->setObjectName(QString::fromUtf8("doubleSpinBox_hand_thumb_aa"));
        doubleSpinBox_hand_thumb_aa->setMinimum(-90);
        doubleSpinBox_hand_thumb_aa->setMaximum(90);
        doubleSpinBox_hand_thumb_aa->setSingleStep(3);
        doubleSpinBox_hand_thumb_aa->setValue(0);

        gridLayout_12->addWidget(doubleSpinBox_hand_thumb_aa, 3, 1, 1, 1);


        verticalLayout_9->addLayout(gridLayout_12);

        button_hand_command = new QPushButton(groupBox_2);
        button_hand_command->setObjectName(QString::fromUtf8("button_hand_command"));

        verticalLayout_9->addWidget(button_hand_command);


        verticalLayout_7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_8 = new QVBoxLayout(groupBox_3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        button_hand_preset_open = new QPushButton(groupBox_3);
        button_hand_preset_open->setObjectName(QString::fromUtf8("button_hand_preset_open"));

        verticalLayout_8->addWidget(button_hand_preset_open);

        button_hand_preset_drill_power = new QPushButton(groupBox_3);
        button_hand_preset_drill_power->setObjectName(QString::fromUtf8("button_hand_preset_drill_power"));

        verticalLayout_8->addWidget(button_hand_preset_drill_power);

        button_hand_preset_box_pinch = new QPushButton(groupBox_3);
        button_hand_preset_box_pinch->setObjectName(QString::fromUtf8("button_hand_preset_box_pinch"));

        verticalLayout_8->addWidget(button_hand_preset_box_pinch);

        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_8->addWidget(pushButton_4);


        verticalLayout_7->addWidget(groupBox_3);


        horizontalLayout_4->addWidget(groupBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        groupBox_sensor_ctrl = new QGroupBox(centralwidget);
        groupBox_sensor_ctrl->setObjectName(QString::fromUtf8("groupBox_sensor_ctrl"));
        verticalLayout_2 = new QVBoxLayout(groupBox_sensor_ctrl);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        button_ft_calib = new QPushButton(groupBox_sensor_ctrl);
        button_ft_calib->setObjectName(QString::fromUtf8("button_ft_calib"));

        verticalLayout_2->addWidget(button_ft_calib);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(groupBox_sensor_ctrl);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        comboBox_LF = new QComboBox(groupBox_sensor_ctrl);
        comboBox_LF->setObjectName(QString::fromUtf8("comboBox_LF"));

        horizontalLayout_5->addWidget(comboBox_LF);

        line_8 = new QFrame(groupBox_sensor_ctrl);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_8);

        label_13 = new QLabel(groupBox_sensor_ctrl);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_5->addWidget(label_13);

        comboBox_RF = new QComboBox(groupBox_sensor_ctrl);
        comboBox_RF->setObjectName(QString::fromUtf8("comboBox_RF"));

        horizontalLayout_5->addWidget(comboBox_RF);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_ft_start = new QPushButton(groupBox_sensor_ctrl);
        pushButton_ft_start->setObjectName(QString::fromUtf8("pushButton_ft_start"));

        horizontalLayout->addWidget(pushButton_ft_start);

        pushButton_ft_stop = new QPushButton(groupBox_sensor_ctrl);
        pushButton_ft_stop->setObjectName(QString::fromUtf8("pushButton_ft_stop"));

        horizontalLayout->addWidget(pushButton_ft_stop);

        pushButton_ft_reset = new QPushButton(groupBox_sensor_ctrl);
        pushButton_ft_reset->setObjectName(QString::fromUtf8("pushButton_ft_reset"));

        horizontalLayout->addWidget(pushButton_ft_reset);


        verticalLayout_2->addLayout(horizontalLayout);

        line_11 = new QFrame(groupBox_sensor_ctrl);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(groupBox_sensor_ctrl);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        line_9 = new QFrame(groupBox_sensor_ctrl);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_9);

        widget1 = new QWidget(groupBox_sensor_ctrl);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(0, 0));
        horizontalLayout_8 = new QHBoxLayout(widget1);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));

        horizontalLayout_6->addWidget(widget1);

        horizontalLayout_6->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_6);

        line_12 = new QFrame(groupBox_sensor_ctrl);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_12);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(groupBox_sensor_ctrl);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        line_10 = new QFrame(groupBox_sensor_ctrl);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_10);

        widget2 = new QWidget(groupBox_sensor_ctrl);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        horizontalLayout_9 = new QHBoxLayout(widget2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));

        horizontalLayout_7->addWidget(widget2);

        horizontalLayout_7->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalLayout_2->setStretch(4, 1);
        verticalLayout_2->setStretch(6, 1);

        verticalLayout_3->addWidget(groupBox_sensor_ctrl);

        verticalLayout_3->setStretch(2, 1);

        hboxLayout->addLayout(verticalLayout_3);

        TaskWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TaskWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        TaskWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TaskWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TaskWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(TaskWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), TaskWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(TaskWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TaskWindow)
    {
        TaskWindow->setWindowTitle(QApplication::translate("TaskWindow", "DYROS THORMANG User Interface", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("TaskWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("TaskWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("TaskWindow", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("TaskWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("TaskWindow", "About &Qt", 0, QApplication::UnicodeUTF8));
        groupBox_task_ctrl->setTitle(QApplication::translate("TaskWindow", "Task Control(Relative)", 0, QApplication::UnicodeUTF8));
        label_36->setText(QString());
        groupBox_task_ctrl_option->setTitle(QApplication::translate("TaskWindow", "Task Control(Optional)", 0, QApplication::UnicodeUTF8));
        comboBox_ee_type->clear();
        comboBox_ee_type->insertItems(0, QStringList()
         << QApplication::translate("TaskWindow", "Left Arm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "Right Arm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "Left Leg", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "Right Leg", 0, QApplication::UnicodeUTF8)
        );
        label_18->setText(QApplication::translate("TaskWindow", "End Effector Type", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("TaskWindow", "Mode", 0, QApplication::UnicodeUTF8));
        comboBox_t_m->clear();
        comboBox_t_m->insertItems(0, QStringList()
         << QApplication::translate("TaskWindow", "Relative", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "Absolute", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("TaskWindow", "Z (cm)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TaskWindow", "Y (cm)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TaskWindow", "X (cm)", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("TaskWindow", "Pitch (deg)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("TaskWindow", "Roll (deg)", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("TaskWindow", "Yaw (deg)", 0, QApplication::UnicodeUTF8));
        pushButton_task_option->setText(QApplication::translate("TaskWindow", "Adjust", 0, QApplication::UnicodeUTF8));
        groupBox_walk_ctrl->setTitle(QApplication::translate("TaskWindow", "Walking Control", 0, QApplication::UnicodeUTF8));
        checkBox_send_data_cb->setText(QApplication::translate("TaskWindow", "Send data to Control Base", 0, QApplication::UnicodeUTF8));
        checkBox_DCM->setText(QApplication::translate("TaskWindow", "DCM Walking", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("TaskWindow", "Recov time", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("TaskWindow", "IMP time", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("TaskWindow", "Y", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("TaskWindow", "StepLength Y", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("TaskWindow", "Z", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("TaskWindow", "X", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("TaskWindow", "StepLength X", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("TaskWindow", "Theta", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("TaskWindow", "Heigt", 0, QApplication::UnicodeUTF8));
        comboBox_method->clear();
        comboBox_method->insertItems(0, QStringList()
         << QApplication::translate("TaskWindow", "Inverse Kinematics", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "Jacobian", 0, QApplication::UnicodeUTF8)
        );
        label_34->setText(QApplication::translate("TaskWindow", "First Step", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("TaskWindow", "Method", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("TaskWindow", "Compensator", 0, QApplication::UnicodeUTF8));
        comboBox_heel_toe->clear();
        comboBox_heel_toe->insertItems(0, QStringList()
         << QApplication::translate("TaskWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        label_35->setText(QApplication::translate("TaskWindow", "Heel Toe", 0, QApplication::UnicodeUTF8));
        comboBox_first_step->clear();
        comboBox_first_step->insertItems(0, QStringList()
         << QApplication::translate("TaskWindow", "Right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "Left", 0, QApplication::UnicodeUTF8)
        );
        checkBox_hip_compensator->setText(QApplication::translate("TaskWindow", "Hip Compensator", 0, QApplication::UnicodeUTF8));
        checkBox_ext_encoder_cmp->setText(QApplication::translate("TaskWindow", "Ext. Encoder", 0, QApplication::UnicodeUTF8));
        button_walk_init_lowerbody->setText(QApplication::translate("TaskWindow", "Init Walking(Lower Body)", 0, QApplication::UnicodeUTF8));
        button_walk_init_wholebody->setText(QApplication::translate("TaskWindow", "Init Walking(Whole Body)", 0, QApplication::UnicodeUTF8));
        button_walk_start->setText(QApplication::translate("TaskWindow", "START Walking", 0, QApplication::UnicodeUTF8));
        button_walk_stop->setText(QApplication::translate("TaskWindow", "STOP Walking", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TaskWindow", "Hand Control", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("TaskWindow", "Position Control", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("TaskWindow", "Thumb AA", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("TaskWindow", "Finger 2", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("TaskWindow", "Finger 1", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("TaskWindow", "Thumb FE", 0, QApplication::UnicodeUTF8));
        button_hand_command->setText(QApplication::translate("TaskWindow", "Command", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("TaskWindow", "Preset Motion", 0, QApplication::UnicodeUTF8));
        button_hand_preset_open->setText(QApplication::translate("TaskWindow", "Open", 0, QApplication::UnicodeUTF8));
        button_hand_preset_drill_power->setText(QApplication::translate("TaskWindow", "Drill(power)", 0, QApplication::UnicodeUTF8));
        button_hand_preset_box_pinch->setText(QApplication::translate("TaskWindow", "Box(pinch)", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("TaskWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        groupBox_sensor_ctrl->setTitle(QApplication::translate("TaskWindow", "Sensor Control", 0, QApplication::UnicodeUTF8));
        button_ft_calib->setText(QApplication::translate("TaskWindow", "FT Sensor  Calibration", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TaskWindow", "LF Graph Source ", 0, QApplication::UnicodeUTF8));
        comboBox_LF->clear();
        comboBox_LF->insertItems(0, QStringList()
         << QApplication::translate("TaskWindow", "LF_Force_X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "LF_Force_Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "LF_Force_Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "LF_Torque_X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "LF_Torque_Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "LF_Torque_Z", 0, QApplication::UnicodeUTF8)
        );
        label_13->setText(QApplication::translate("TaskWindow", "RF Graph Source", 0, QApplication::UnicodeUTF8));
        comboBox_RF->clear();
        comboBox_RF->insertItems(0, QStringList()
         << QApplication::translate("TaskWindow", "RF_Force_X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "RF_Force_Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "RF_Force_Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "RF_Torque_X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "RF_Torque_Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskWindow", "RF_Torque_Z", 0, QApplication::UnicodeUTF8)
        );
        pushButton_ft_start->setText(QApplication::translate("TaskWindow", "FT Start", 0, QApplication::UnicodeUTF8));
        pushButton_ft_stop->setText(QApplication::translate("TaskWindow", "FT Stop", 0, QApplication::UnicodeUTF8));
        pushButton_ft_reset->setText(QApplication::translate("TaskWindow", "FT Reset", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TaskWindow", "LF Graph", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TaskWindow", "RF Graph", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("TaskWindow", "&App", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TaskWindow: public Ui_TaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_WINDOW_H
