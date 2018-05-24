#include "vehiclemaintaincepage.h"
#include "ui_vehiclemaintaincepage.h"

VehicleMaintaincePage::VehicleMaintaincePage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleMaintaincePage)
{
    ui->setupUi(this);
}

VehicleMaintaincePage::~VehicleMaintaincePage()
{
    delete ui;
}


void VehicleMaintaincePage::on_FaultRecordBtn_pressed()
{
    this->ui->FaultRecordBtn->setStyleSheet(PButtonDOWN);
}

void VehicleMaintaincePage::on_APRunningTimeBtn_pressed()
{
    this->ui->APRunningTimeBtn->setStyleSheet(PButtonDOWN);

}

void VehicleMaintaincePage::on_Consumption_pressed()
{
    this->ui->Consumption->setStyleSheet(PButtonDOWN);
}

void VehicleMaintaincePage::on_DistainceBtn_pressed()
{
    this->ui->DistainceBtn->setStyleSheet(PButtonDOWN);

}

void VehicleMaintaincePage::on_TCMSVisionBtn_pressed()
{
    this->ui->TCMSVisionBtn->setStyleSheet(PButtonDOWN);
}
void VehicleMaintaincePage::on_PortsDataBtn_pressed()
{
    this->ui->PortsDataBtn->setStyleSheet(PButtonDOWN);

}


void VehicleMaintaincePage::on_RIOMIOBtn_pressed()
{
    this->ui->RIOMIOBtn->setStyleSheet(PButtonDOWN);

}



void VehicleMaintaincePage::on_HMICheckBtn_pressed()
{
    this->ui->HMICheckBtn->setStyleSheet(PButtonDOWN);
}

void VehicleMaintaincePage::on_WheelSetBtn_pressed()
{
    this->ui->WheelSetBtn->setStyleSheet(PButtonDOWN);

}

void VehicleMaintaincePage::on_SystimeSetBtn_pressed()
{
    this->ui->SystimeSetBtn->setStyleSheet(PButtonDOWN);

}

void VehicleMaintaincePage::on_LoadBtn_pressed()
{
    this->ui->LoadBtn->setStyleSheet(PButtonDOWN);
}

void VehicleMaintaincePage::on_BrakeTestBtn_pressed()
{
    this->ui->BrakeTestBtn->setStyleSheet(PButtonDOWN);
}

void VehicleMaintaincePage::on_RuntestBtn_pressed()
{

}

void VehicleMaintaincePage::on_TCMSStateBtn_pressed()
{
    this->ui->TCMSStateBtn->setStyleSheet(PButtonDOWN);
}


void VehicleMaintaincePage::on_FaultRecordBtn_released()
{
    this->ui->FaultRecordBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceFaultQureyPage);
}

void VehicleMaintaincePage::on_APRunningTimeBtn_released()
{
    this->ui->APRunningTimeBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceACPRunPage);
}

void VehicleMaintaincePage::on_Consumption_released()
{
    this->ui->Consumption->setStyleSheet(PButtonUP);
    changePage(uMaintainceConsumptionPage);
}

void VehicleMaintaincePage::on_DistainceBtn_released()
{
    this->ui->DistainceBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceRunDistancePage);
}

void VehicleMaintaincePage::on_TCMSVisionBtn_released()
{
    this->ui->TCMSVisionBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceVersionPage);
}

void VehicleMaintaincePage::on_PortsDataBtn_released()
{
    this->ui->PortsDataBtn->setStyleSheet(PButtonUP);
    changePage(uMaintaincePortsDataPage);
}

void VehicleMaintaincePage::on_RIOMIOBtn_released()
{
    this->ui->RIOMIOBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceRIOMDetailPage);
}

void VehicleMaintaincePage::on_HMICheckBtn_released()
{
    this->ui->HMICheckBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceHMICheckPage);

}

void VehicleMaintaincePage::on_WheelSetBtn_released()
{
    this->ui->WheelSetBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceWheelsetPage);
}

void VehicleMaintaincePage::on_SystimeSetBtn_released()
{
    this->ui->SystimeSetBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceDatetimesetPage);

}

void VehicleMaintaincePage::on_LoadBtn_released()
{
    this->ui->LoadBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceLoadPage);
}

void VehicleMaintaincePage::on_BrakeTestBtn_released()
{
    this->ui->BrakeTestBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceBCUTestPage);
}

void VehicleMaintaincePage::on_RuntestBtn_released()
{

}

void VehicleMaintaincePage::on_TCMSStateBtn_released()
{
    this->ui->TCMSStateBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceTCMSStatePages);
}



void VehicleMaintaincePage::on_HMIInitBtn_released()
{
    changePage(uMaintainceHMIInitsetPage);
}



void VehicleMaintaincePage::on_DataManagementBtn_pressed()
{
    this->ui->DataManagementBtn->setStyleSheet(PButtonDOWN);
}

void VehicleMaintaincePage::on_DataManagementBtn_released()
{
    this->ui->DataManagementBtn->setStyleSheet(PButtonUP);
    emit this->changePWPage(uMaintainceDataManagementPage);
    changePage(uVehiclePasswordPage);
}

void VehicleMaintaincePage::on_AllDataBtn_pressed()
{
    changePage(uMaintainceAllPortsPage);
}

void VehicleMaintaincePage::on_TrainNumBtn_clicked()
{
    changePage(uMaintainceTrainNumSetPage);
}

void VehicleMaintaincePage::on_TestPageBtn_pressed()
{
    this->ui->TestPageBtn->setStyleSheet(PButtonDOWN);

}

void VehicleMaintaincePage::on_TestPageBtn_released()
{
    this->ui->TestPageBtn->setStyleSheet(PButtonUP);
    changePage(uMaintainceTestPage);

}
