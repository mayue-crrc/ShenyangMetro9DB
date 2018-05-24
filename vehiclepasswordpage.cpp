#include "vehiclepasswordpage.h"
#include "ui_vehiclepasswordpage.h"

VehiclePasswordPage::VehiclePasswordPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehiclePasswordPage)
{
    ui->setupUi(this);

    ui->alarmlbl->hide();



    QList<QPushButton *> buttons;
    buttons<<ui->Num0<<ui->Num1<<ui->Num2<<ui->Num3<<ui->Num4<<ui->Num5<<ui->Num6<<ui->Num7<<ui->Num8<<ui->Num9<<ui->NumDEL;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(NumKeyboardEvent()));
    }

}

VehiclePasswordPage::~VehiclePasswordPage()
{
    delete ui;
}
void VehiclePasswordPage::getPage(int pageID)
{
    m_NextPageID = pageID;
}
void VehiclePasswordPage::NumKeyboardEvent()
{
    this->ui->alarmlbl->hide();
    QString key = ((QPushButton *)this->sender())->text();
    if(key == "DEL")
    {
        this->m_password.remove(m_password.size()-1,1);
    }else
    {
        if(m_password.size()<4)
        {
            this->m_password.append(key);
        }
    }
    this->ui->PasswordLbl->setText(m_password);

}
void VehiclePasswordPage::on_confirmBtn_pressed()
{
    this->ui->PasswordLbl->setText("");
    if(this->m_NextPageID == uMaintainceDataManagementPage)
    {
        if(m_password == MainGetDefaultPara::getString("/Password/SecondPassword"))
        {
            this->m_password = "";
            this->ui->alarmlbl->hide();
            changePage(m_NextPageID);

        }else
        {
            this->ui->alarmlbl->show();
            this->m_password = "";
        }
    }else if(m_password == MainGetDefaultPara::getString("/Password/Password"))
    {
        this->m_password = "";
        this->ui->alarmlbl->hide();
        changePage(m_NextPageID);

    }else
    {
        this->ui->alarmlbl->show();
        this->m_password = "";
    }

}
void VehiclePasswordPage::showEvent(QShowEvent *)
{
    if(this->m_NextPageID == uMaintainceDataManagementPage)
    {
        this->ui->label_2->setText("输入二级密码");
    }else
    {
        this->ui->label_2->setText("输入密码");
    }

}

void VehiclePasswordPage::on_returnBtn_pressed()
{
    this->ui->alarmlbl->hide();
    if(this->m_NextPageID == uMaintainceDataManagementPage)
    {
        changePage(uVehicleMaintaincePage);
    }else
    {
        changePage(uVehicleRunStatePage);
    }
}
