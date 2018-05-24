#include "maintainceloadpage.h"
#include "ui_maintainceloadpage.h"
#include "MainGetDefaultPara.h"

MaintainceLoadPage::MaintainceLoadPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceLoadPage)
{
    ui->setupUi(this);

    DefaultLoadTC1 = MainGetDefaultPara::getString("/DefaultLoad/load_TC1");
    DefaultLoadMP1 = MainGetDefaultPara::getString("/DefaultLoad/load_MP1");
    DefaultLoadM1 = MainGetDefaultPara::getString("/DefaultLoad/load_M1");
    DefaultLoadM2 = MainGetDefaultPara::getString("/DefaultLoad/load_M2");
    DefaultLoadMP2 = MainGetDefaultPara::getString("/DefaultLoad/load_MP2");
    DefaultLoadTC2 = MainGetDefaultPara::getString("/DefaultLoad/load_TC2");

    DefaultFullLoadTC1 = MainGetDefaultPara::getString("/DefaultLoad/fullload_TC1");
    DefaultFullLoadMP1 = MainGetDefaultPara::getString("/DefaultLoad/fullload_MP1");
    DefaultFullLoadM1 = MainGetDefaultPara::getString("/DefaultLoad/fullload_M1");
    DefaultFullLoadM2 = MainGetDefaultPara::getString("/DefaultLoad/fullload_M2");
    DefaultFullLoadMP2 = MainGetDefaultPara::getString("/DefaultLoad/fullload_MP2");
    DefaultFullLoadTC2 = MainGetDefaultPara::getString("/DefaultLoad/fullload_TC2");
}

MaintainceLoadPage::~MaintainceLoadPage()
{
    delete ui;
}

void MaintainceLoadPage::on_returnBtn_pressed()
{
    changePage(uVehicleMaintaincePage);
}
void MaintainceLoadPage::updatePage()
{
    this->ui->TrainWeightTC1lbl->setText(QString::number((float)this->database->CTHM_TC1Load_U16/100,10,2));
    this->ui->TrainWeightMP1lbl->setText(QString::number((float)this->database->CTHM_MP1Load_U16/100,10,2));
    this->ui->TrainWeightM1lbl->setText(QString::number((float)this->database->CTHM_M1Load_U16/100,10,2));
    this->ui->TrainWeightM2lbl->setText(QString::number((float)this->database->CTHM_M2Load_U16/100,10,2));
    this->ui->TrainWeightMP2lbl->setText(QString::number((float)this->database->CTHM_MP2Load_U16/100,10,2));
    this->ui->TrainWeightTC2lbl->setText(QString::number((float)this->database->CTHM_TC2Load_U16/100,10,2));

    this->ui->EmptyTrainWeightTC1lbl->setText(DefaultLoadTC1);
    this->ui->EmptyTrainWeightMP1lbl->setText(DefaultLoadMP1);
    this->ui->EmptyTrainWeightM1lbl->setText(DefaultLoadM1);
    this->ui->EmptyTrainWeightM2lbl->setText(DefaultLoadM2);
    this->ui->EmptyTrainWeightMP2lbl->setText(DefaultLoadMP2);
    this->ui->EmptyTrainWeightTC2lbl->setText(DefaultLoadTC2);

    float tmp_pkgtc1 = ((float)this->database->CTHM_TC1Load_U16/100 - DefaultLoadTC1.toFloat());
    float tmp_pkgmp1 = ((float)this->database->CTHM_MP1Load_U16/100 - DefaultLoadMP1.toFloat());
    float tmp_pkgm1 = ((float)this->database->CTHM_M1Load_U16/100 - DefaultLoadM1.toFloat());
    float tmp_pkgm2 = ((float)this->database->CTHM_M2Load_U16/100 - DefaultLoadM2.toFloat());
    float tmp_pkgmp2 = ((float)this->database->CTHM_MP2Load_U16/100 - DefaultLoadMP2.toFloat());
    float tmp_pkgtc2 = ((float)this->database->CTHM_TC2Load_U16/100 - DefaultLoadTC2.toFloat());

    this->ui->PkgWeightTC1lbl->setText(QString::number(tmp_pkgtc1*1000));
    this->ui->PkgWeightMP1lbl->setText(QString::number(tmp_pkgmp1*1000));
    this->ui->PkgWeightM1lbl->setText(QString::number(tmp_pkgm1*1000));
    this->ui->PkgWeightM2lbl->setText(QString::number(tmp_pkgm2*1000));
    this->ui->PkgWeightMP2lbl->setText(QString::number(tmp_pkgmp2*1000));
    this->ui->PkgWeightTC2lbl->setText(QString::number(tmp_pkgtc2*1000));

    this->ui->PassagerNumTC1lbl->setText(QString::number(tmp_pkgtc1/60*1000,10,0));
    this->ui->PassagerNumMP1lbl->setText(QString::number(tmp_pkgmp1/60*1000,10,0));
    this->ui->PassagerNumM1lbl->setText(QString::number(tmp_pkgm1/60*1000,10,0));
    this->ui->PassagerNumM2lbl->setText(QString::number(tmp_pkgm2/60*1000,10,0));
    this->ui->PassagerNumMP2lbl->setText(QString::number(tmp_pkgmp2/60*1000,10,0));
    this->ui->PassagerNumTC2lbl->setText(QString::number(tmp_pkgtc2/60*1000,10,0));

    this->ui->PperWeightTC1lbl->setText(QString::number((float)(tmp_pkgtc1/(DefaultFullLoadTC1.toFloat()))*100,10,2)+"%");
    this->ui->PperWeightMP1lbl->setText(QString::number((float)(tmp_pkgmp1/(DefaultFullLoadMP1.toFloat()))*100,10,2)+"%");
    this->ui->PperWeightM1lbl->setText(QString::number((float)(tmp_pkgm1/(DefaultFullLoadM1.toFloat()))*100,10,2)+"%");
    this->ui->PperWeightM2lbl->setText(QString::number((float)(tmp_pkgm2/(DefaultFullLoadM2.toFloat()))*100,10,2)+"%");
    this->ui->PperWeightMP2lbl->setText(QString::number((float)(tmp_pkgmp2/(DefaultFullLoadMP2.toFloat()))*100,10,2)+"%");
    this->ui->PperWeightTC2lbl->setText(QString::number((float)(tmp_pkgtc2/(DefaultFullLoadTC2.toFloat()))*100,10,2)+"%");
}