#include "maintainceversionpage.h"
#include "ui_maintainceversionpage.h"

MaintainceVersionPage::MaintainceVersionPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceVersionPage)
{
    ui->setupUi(this);

    buttons<<ui->TCMSVBtn<<ui->TCUVBtn<<ui->EDCUVBtn<<ui->OtherVBtn;

    this->ui->TCMSVBtn->setStyleSheet(PButtonDOWN);

    m_CurrentPage = VTCMSPAGE;


    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(ButtonsPressEvent()));
    }
}

MaintainceVersionPage::~MaintainceVersionPage()
{
    delete ui;
}

void MaintainceVersionPage::on_returnBtn_pressed()
{
    changePage(uVehicleRunStatePage);
}
void MaintainceVersionPage::updatePage()
{
    QList<QLabel*> namelabels,versionlabels;
    namelabels<<ui->line1namebl<<ui->line2namebl<<ui->line3namebl<<ui->line4namebl<<ui->line5namebl
              <<ui->line6namebl<<ui->line7namebl<<ui->line8namebl<<ui->line9namebl<<ui->line10namebl;

    versionlabels<<ui->line1_1Versionlbl<<ui->line1_2Versionlbl<<ui->line1_3Versionlbl<<ui->line1_4Versionlbl<<ui->line1_5Versionlbl<<ui->line1_6Versionlbl
                <<ui->line2_1Versionlbl<<ui->line2_2Versionlbl<<ui->line2_3Versionlbl<<ui->line2_4Versionlbl<<ui->line2_5Versionlbl<<ui->line2_6Versionlbl
                <<ui->line3_1Versionlbl<<ui->line3_2Versionlbl<<ui->line3_3Versionlbl<<ui->line3_4Versionlbl<<ui->line3_5Versionlbl<<ui->line3_6Versionlbl
                <<ui->line4_1Versionlbl<<ui->line4_2Versionlbl<<ui->line4_3Versionlbl<<ui->line4_4Versionlbl<<ui->line4_5Versionlbl<<ui->line4_6Versionlbl
                <<ui->line5_1Versionlbl<<ui->line5_2Versionlbl<<ui->line5_3Versionlbl<<ui->line5_4Versionlbl<<ui->line5_5Versionlbl<<ui->line5_6Versionlbl
                <<ui->line6_1Versionlbl<<ui->line6_2Versionlbl<<ui->line6_3Versionlbl<<ui->line6_4Versionlbl<<ui->line6_5Versionlbl<<ui->line6_6Versionlbl
                <<ui->line7_1Versionlbl<<ui->line7_2Versionlbl<<ui->line7_3Versionlbl<<ui->line7_4Versionlbl<<ui->line7_5Versionlbl<<ui->line7_6Versionlbl
                <<ui->line8_1Versionlbl<<ui->line8_2Versionlbl<<ui->line8_3Versionlbl<<ui->line8_4Versionlbl<<ui->line8_5Versionlbl<<ui->line8_6Versionlbl
                <<ui->line9_1Versionlbl<<ui->line9_2Versionlbl<<ui->line9_3Versionlbl<<ui->line9_4Versionlbl<<ui->line9_5Versionlbl<<ui->line9_6Versionlbl
                <<ui->line10_1Versionlbl<<ui->line10_2Versionlbl<<ui->line10_3Versionlbl<<ui->line10_4Versionlbl<<ui->line10_5Versionlbl<<ui->line10_6Versionlbl;

    switch (m_CurrentPage)
    {
    case VTCMSPAGE:
        {
            QList<QString> namestr,versionstr;
            namestr<<"CCU"<<"HMI"<<"RIOM-GW"<<"RIOM-DI"<<"RIOM-DO"<<"RIOM-AX"<<"ERM"<<""<<""<<"";
            QString tmp_ccu1V,tmp_ccu2V,tmp_erm1V,tmp_erm2V;
            tmp_ccu1V = QString::number(this->database->CTHM_CCU1SWVer_U8,10,0)+"."+QString::number(this->database->CTHM_CCU1MVBVer_U8,10,0)+"."+
                        QString::number(this->database->CTHM_CCU1SDBVer_U8,10,0)+"."+QString::number(this->database->CTHM_CCU1VxWorksVer_U8,10,0)+"."+
                        QString::number(this->database->CTHM_CCU1FPGAVer_U8,10,0);
            tmp_ccu2V = QString::number(this->database->CTHM_CCU2SWVer_U8,10,0)+"."+QString::number(this->database->CTHM_CCU2MVBVer_U8,10,0)+"."+
                        QString::number(this->database->CTHM_CCU2SDBVer_U8,10,0)+"."+QString::number(this->database->CTHM_CCU2VxWorksVer_U8,10,0)+"."+
                        QString::number(this->database->CTHM_CCU2FPGAVer_U8,10,0);

            tmp_erm1V = QString::number(this->database->DT1CT_ERMSWVer_U8,10,0)+"."+QString::number(this->database->DT1CT_ERMMVBSWVer_U8,10,0)+"."+
                        QString::number(this->database->DT1CT_ERMSDBVer_U8,10,0)+"."+QString::number(this->database->DT1CT_ERMVxWorksVer_U8,10,0)+"."+
                        QString::number(this->database->DT1CT_ERMFPGAVer_U8,10,0) ;
            tmp_erm2V = QString::number(this->database->DT2CT_ERMSWVer_U8,10,0)+"."+QString::number(this->database->DT2CT_ERMMVBSWVer_U8,10,0)+"."+
                        QString::number(this->database->DT2CT_ERMSDBVer_U8,10,0)+"."+QString::number(this->database->DT2CT_ERMVxWorksVer_U8,10,0)+"."+
                        QString::number(this->database->DT2CT_ERMFPGAVer_U8,10,0) ;

            versionstr<<tmp_ccu1V<<"--"<<"--"<<"--"<<"--"<<tmp_ccu2V
                    <<QString::number(this->database->HM1CT_HMISWVerH_U8)+"."+QString::number(this->database->HM1CT_HMISWVerL_U8)<<"--"<<"--"
                    <<"--"<<"--"<<QString::number(this->database->HM2CT_HMISWVerH_U8)+"."+QString::number(this->database->HM2CT_HMISWVerL_U8)
                    <<QString::number(this->database->GWCT_TC1GWVersion_U8/10)+"."+QString::number(this->database->GWCT_TC1GWVersion_U8%10)
                    <<QString::number(this->database->GWCT_RIOMMP1GWVer_U8/10)+"."+QString::number(this->database->GWCT_RIOMMP1GWVer_U8%10)
                    <<QString::number(this->database->GWCT_RIOMM1GWVer_U8/10)+"."+QString::number(this->database->GWCT_RIOMM1GWVer_U8%10)
                    <<QString::number(this->database->GWCT_RIOMM2GWVer_U8/10)+"."+QString::number(this->database->GWCT_RIOMM2GWVer_U8%10)
                    <<QString::number(this->database->GWCT_RIOMMP2GWVer_U8/10)+"."+QString::number(this->database->GWCT_RIOMMP2GWVer_U8%10)
                    <<QString::number(this->database->GWCT_TC2GWVersion_U8/10)+"."+QString::number(this->database->GWCT_TC2GWVersion_U8%10)

                    <<QString::number(this->database->DICT_TC1DIVersion_U8/10)+"."+QString::number(this->database->DICT_TC1DIVersion_U8%10)
                    <<QString::number(this->database->DICT_RIOMMP1DIVer_U8/10)+"."+QString::number(this->database->DICT_RIOMMP1DIVer_U8%10)
                    <<QString::number(this->database->DICT_RIOMM1DIVer_U8/10)+"."+QString::number(this->database->DICT_RIOMM1DIVer_U8%10)
                    <<QString::number(this->database->DICT_RIOMM2DIVer_U8/10)+"."+QString::number(this->database->DICT_RIOMM2DIVer_U8%10)
                    <<QString::number(this->database->DICT_RIOMMP2DIVer_U8/10)+"."+QString::number(this->database->DICT_RIOMMP2DIVer_U8%10)
                    <<QString::number(this->database->DICT_TC2DIVersion_U8/10)+"."+QString::number(this->database->DICT_TC2DIVersion_U8%10)

                    <<QString::number(this->database->DOCT_TC1DOVersion_U8/10)+"."+QString::number(this->database->DOCT_TC1DOVersion_U8%10)
                    <<QString::number(this->database->DOCT_RIOMMP1DOVer_U8/10)+"."+QString::number(this->database->DOCT_RIOMMP1DOVer_U8%10)
                    <<QString::number(this->database->DOCT_RIOMM1DOVer_U8/10)+"."+QString::number(this->database->DOCT_RIOMM1DOVer_U8%10)
                    <<QString::number(this->database->DOCT_RIOMM2DOVer_U8/10)+"."+QString::number(this->database->DOCT_RIOMM2DOVer_U8%10)
                    <<QString::number(this->database->DOCT_RIOMMP2DOVer_U8/10)+"."+QString::number(this->database->DOCT_RIOMMP2DOVer_U8%10)
                    <<QString::number(this->database->DOCT_TC2DOVersion_U8/10)+"."+QString::number(this->database->DOCT_TC2DOVersion_U8%10)
                    <<QString::number(this->database->AICT_TC1AXVersion_U8/10)+"."+QString::number(this->database->AICT_TC1AXVersion_U8%10)<<"--"<<"--"
                    <<"--"<<"--"<<QString::number(this->database->AICT_TC2AXVersion_U8/10)+"."+QString::number(this->database->AICT_TC2AXVersion_U8%10)
                    <<tmp_erm1V<<"--"<<"--"<<"--"<<"--"<<tmp_erm2V
                    <<""<<""<<""<<""<<""<<""
                    <<""<<""<<""<<""<<""<<""
                    <<""<<""<<""<<""<<""<<"";
            for(int i = 0; i < namelabels.size();i++)
            {
                namelabels.at(i)->setText(namestr.at(i));
            }
            for(int i = 0; i < versionlabels.size();i++)
            {
                versionlabels.at(i)->setText(versionstr.at(i));
            }
        }
        break;
    case VTCUPAGE:
        {
            QList<QString> namestr,versionstr;
            namestr<<"DCU"<<"BCU"<<"ACM"<<"CCU-D\n牵引记录仪"<<""<<""<<""<<""<<""<<"";
            versionstr<<"--"<<QString::number(this->database->TR1CT_DCUMVersion_I16)<<QString::number(this->database->TR2CT_DCUMVersion_I16)
                      <<QString::number(this->database->TR3CT_DCUMVersion_I16)<<QString::number(this->database->TR4CT_DCUMVersion_I16)<<"--"
                      <<QString::number(this->database->BR1CT_TcMVBVersion_U8/16)+"."+QString::number(this->database->BR1CT_TcMVBVersion_U8%16)<<"--"
                      <<QString::number(this->database->BR1CT_MMVBVersion_U8/16)+"."+QString::number(this->database->BR1CT_MMVBVersion_U8%16)
                      <<QString::number(this->database->BR2CT_MMVBVersion_U8/16)+"."+QString::number(this->database->BR2CT_MMVBVersion_U8%16)<<"--"
                      <<QString::number(this->database->BR2CT_TcMVBVersion_U8/16)+"."+QString::number(this->database->BR2CT_TcMVBVersion_U8%16)
                      <<QString::number(this->database->AX1CT_SWVersion1_I16)+"."+QString::number(this->database->AX1CT_SWVersion2_I16)+"."+
                      QString::number(this->database->AX1CT_SWVersion3_I16)+"."+QString::number(this->database->AX1CT_SWVersion4_I16)
                      <<"--"<<QString::number(this->database->AX2CT_SWVersion1_I16)+"."+QString::number(this->database->AX2CT_SWVersion2_I16)+"."+
                      QString::number(this->database->AX2CT_SWVersion3_I16)+"."+QString::number(this->database->AX2CT_SWVersion4_I16)
                      <<QString::number(this->database->AX3CT_SWVersion1_I16)+"."+QString::number(this->database->AX3CT_SWVersion2_I16)+"."+
                      QString::number(this->database->AX3CT_SWVersion3_I16)+"."+QString::number(this->database->AX3CT_SWVersion4_I16)<<
                      "--"<<QString::number(this->database->AX4CT_SWVersion1_I16)+"."+QString::number(this->database->AX4CT_SWVersion2_I16)+"."+
                      QString::number(this->database->AX4CT_SWVersion3_I16)+"."+QString::number(this->database->AX4CT_SWVersion4_I16)
                      <<QString::number(this->database->CD1CT_SoftWareVersion1_I16)+"."+QString::number(this->database->CD1CT_SoftWareVersion2_I16)+"."+
                      QString::number(this->database->CD1CT_SoftWareVersion3_I16)+"."+QString::number(this->database->CD1CT_SoftWareVersion4_I16)<<"--"<<"--"<<"--"<<"--"
                      <<QString::number(this->database->CD2CT_SoftWareVersion1_I16)+"."+QString::number(this->database->CD2CT_SoftWareVersion2_I16)+"."+
                      QString::number(this->database->CD2CT_SoftWareVersion3_I16)+"."+QString::number(this->database->CD2CT_SoftWareVersion4_I16)                      <<""<<""<<""<<""<<""<<""
                      <<""<<""<<""<<""<<""<<""
                      <<""<<""<<""<<""<<""<<""
                      <<""<<""<<""<<""<<""<<""
                      <<""<<""<<""<<""<<""<<""
                      <<""<<""<<""<<""<<""<<"";


            for(int i = 0; i < namelabels.size();i++)
            {
                namelabels.at(i)->setText(namestr.at(i));
            }
            for(int i = 0; i < versionlabels.size();i++)
            {
                versionlabels.at(i)->setText(versionstr.at(i));
            }
        }
        break;
    case VEDCUPAGE:
        {
            QList<QString> namestr,versionstr;
            namestr<<"奇数GW"<<"偶数GW"<<"DCU1"<<"DCU2"<<"DCU3"<<"DCU4"<<"DCU5"<<"DCU6"<<"DCU7"<<"DCU8";
            versionstr<<QString::number(this->database->DR1_2CT_SwVersion1_U8/16)+"."+QString::number(this->database->DR1_2CT_SwVersion1_U8%16)
                    <<QString::number(this->database->DR3_4CT_SwVersion1_U8/16)+"."+QString::number(this->database->DR3_4CT_SwVersion1_U8%16)
                    <<QString::number(this->database->DR5_6CT_SwVersion1_U8/16)+"."+QString::number(this->database->DR5_6CT_SwVersion1_U8%16)
                    <<QString::number(this->database->DR7_8CT_SwVersion1_U8/16)+"."+QString::number(this->database->DR7_8CT_SwVersion1_U8%16)
                    <<QString::number(this->database->DR9_10CT_SwVersion1_U8/16)+"."+QString::number(this->database->DR9_10CT_SwVersion1_U8%16)
                    <<QString::number(this->database->DR11_12CT_SwVersion1_U8/16)+"."+QString::number(this->database->DR11_12CT_SwVersion1_U8%16)

                    <<QString::number(this->database->DR1_2CT_SwVersion2_U8/16)+"."+QString::number(this->database->DR1_2CT_SwVersion2_U8%16)
                    <<QString::number(this->database->DR3_4CT_SwVersion2_U8/16)+"."+QString::number(this->database->DR3_4CT_SwVersion2_U8%16)
                    <<QString::number(this->database->DR5_6CT_SwVersion2_U8/16)+"."+QString::number(this->database->DR5_6CT_SwVersion2_U8%16)
                    <<QString::number(this->database->DR7_8CT_SwVersion2_U8/16)+"."+QString::number(this->database->DR7_8CT_SwVersion2_U8%16)
                    <<QString::number(this->database->DR9_10CT_SwVersion2_U8/16)+"."+QString::number(this->database->DR9_10CT_SwVersion2_U8%16)
                    <<QString::number(this->database->DR11_12CT_SwVersion2_U8/16)+"."+QString::number(this->database->DR11_12CT_SwVersion2_U8%16)

                    <<QString::number(this->database->DR1_2CT_SwVersionDCU1_U8/16)+"."+QString::number(this->database->DR1_2CT_SwVersionDCU1_U8%16)
                    <<QString::number(this->database->DR3_4CT_SwVersionDCU1_U8/16)+"."+QString::number(this->database->DR3_4CT_SwVersionDCU1_U8%16)
                    <<QString::number(this->database->DR5_6CT_SwVersionDCU1_U8/16)+"."+QString::number(this->database->DR5_6CT_SwVersionDCU1_U8%16)
                    <<QString::number(this->database->DR7_8CT_SwVersionDCU1_U8/16)+"."+QString::number(this->database->DR7_8CT_SwVersionDCU1_U8%16)
                    <<QString::number(this->database->DR9_10CT_SwVersionDCU1_U8/16)+"."+QString::number(this->database->DR9_10CT_SwVersionDCU1_U8%16)
                    <<QString::number(this->database->DR11_12CT_SwVersionDCU1_U8/16)+"."+QString::number(this->database->DR11_12CT_SwVersionDCU1_U8%16)

                    <<QString::number(this->database->DR1_2CT_SwVersionDCU2_U8/16)+"."+QString::number(this->database->DR1_2CT_SwVersionDCU2_U8%16)
                    <<QString::number(this->database->DR3_4CT_SwVersionDCU2_U8/16)+"."+QString::number(this->database->DR3_4CT_SwVersionDCU2_U8%16)
                    <<QString::number(this->database->DR5_6CT_SwVersionDCU2_U8/16)+"."+QString::number(this->database->DR5_6CT_SwVersionDCU2_U8%16)
                    <<QString::number(this->database->DR7_8CT_SwVersionDCU2_U8/16)+"."+QString::number(this->database->DR7_8CT_SwVersionDCU2_U8%16)
                    <<QString::number(this->database->DR9_10CT_SwVersionDCU2_U8/16)+"."+QString::number(this->database->DR9_10CT_SwVersionDCU2_U8%16)
                    <<QString::number(this->database->DR11_12CT_SwVersionDCU2_U8/16)+"."+QString::number(this->database->DR11_12CT_SwVersionDCU2_U8%16)

                    <<QString::number(this->database->DR1_2CT_SwVersionDCU3_U8/16)+"."+QString::number(this->database->DR1_2CT_SwVersionDCU3_U8%16)
                    <<QString::number(this->database->DR3_4CT_SwVersionDCU3_U8/16)+"."+QString::number(this->database->DR3_4CT_SwVersionDCU3_U8%16)
                    <<QString::number(this->database->DR5_6CT_SwVersionDCU3_U8/16)+"."+QString::number(this->database->DR5_6CT_SwVersionDCU3_U8%16)
                    <<QString::number(this->database->DR7_8CT_SwVersionDCU3_U8/16)+"."+QString::number(this->database->DR7_8CT_SwVersionDCU3_U8%16)
                    <<QString::number(this->database->DR9_10CT_SwVersionDCU3_U8/16)+"."+QString::number(this->database->DR9_10CT_SwVersionDCU3_U8%16)
                    <<QString::number(this->database->DR11_12CT_SwVersionDCU3_U8/16)+"."+QString::number(this->database->DR11_12CT_SwVersionDCU3_U8%16)

                    <<QString::number(this->database->DR1_2CT_SwVersionDCU4_U8/16)+"."+QString::number(this->database->DR1_2CT_SwVersionDCU4_U8%16)
                    <<QString::number(this->database->DR3_4CT_SwVersionDCU4_U8/16)+"."+QString::number(this->database->DR3_4CT_SwVersionDCU4_U8%16)
                    <<QString::number(this->database->DR5_6CT_SwVersionDCU4_U8/16)+"."+QString::number(this->database->DR5_6CT_SwVersionDCU4_U8%16)
                    <<QString::number(this->database->DR7_8CT_SwVersionDCU4_U8/16)+"."+QString::number(this->database->DR7_8CT_SwVersionDCU4_U8%16)
                    <<QString::number(this->database->DR9_10CT_SwVersionDCU4_U8/16)+"."+QString::number(this->database->DR9_10CT_SwVersionDCU4_U8%16)
                    <<QString::number(this->database->DR11_12CT_SwVersionDCU4_U8/16)+"."+QString::number(this->database->DR11_12CT_SwVersionDCU4_U8%16)

                    <<QString::number(this->database->DR1_2CT_SwVersionDCU5_U8/16)+"."+QString::number(this->database->DR1_2CT_SwVersionDCU5_U8%16)
                    <<QString::number(this->database->DR3_4CT_SwVersionDCU5_U8/16)+"."+QString::number(this->database->DR3_4CT_SwVersionDCU5_U8%16)
                    <<QString::number(this->database->DR5_6CT_SwVersionDCU5_U8/16)+"."+QString::number(this->database->DR5_6CT_SwVersionDCU5_U8%16)
                    <<QString::number(this->database->DR7_8CT_SwVersionDCU5_U8/16)+"."+QString::number(this->database->DR7_8CT_SwVersionDCU5_U8%16)
                    <<QString::number(this->database->DR9_10CT_SwVersionDCU5_U8/16)+"."+QString::number(this->database->DR9_10CT_SwVersionDCU5_U8%16)
                    <<QString::number(this->database->DR11_12CT_SwVersionDCU5_U8/16)+"."+QString::number(this->database->DR11_12CT_SwVersionDCU5_U8%16)

                    <<QString::number(this->database->DR1_2CT_SwVersionDCU6_U8/16)+"."+QString::number(this->database->DR1_2CT_SwVersionDCU6_U8%16)
                    <<QString::number(this->database->DR3_4CT_SwVersionDCU6_U8/16)+"."+QString::number(this->database->DR3_4CT_SwVersionDCU6_U8%16)
                    <<QString::number(this->database->DR5_6CT_SwVersionDCU6_U8/16)+"."+QString::number(this->database->DR5_6CT_SwVersionDCU6_U8%16)
                    <<QString::number(this->database->DR7_8CT_SwVersionDCU6_U8/16)+"."+QString::number(this->database->DR7_8CT_SwVersionDCU6_U8%16)
                    <<QString::number(this->database->DR9_10CT_SwVersionDCU6_U8/16)+"."+QString::number(this->database->DR9_10CT_SwVersionDCU6_U8%16)
                    <<QString::number(this->database->DR11_12CT_SwVersionDCU6_U8/16)+"."+QString::number(this->database->DR11_12CT_SwVersionDCU6_U8%16)

                    <<QString::number(this->database->DR1_2CT_SwVersionDCU7_U8/16)+"."+QString::number(this->database->DR1_2CT_SwVersionDCU7_U8%16)
                    <<QString::number(this->database->DR3_4CT_SwVersionDCU7_U8/16)+"."+QString::number(this->database->DR3_4CT_SwVersionDCU7_U8%16)
                    <<QString::number(this->database->DR5_6CT_SwVersionDCU7_U8/16)+"."+QString::number(this->database->DR5_6CT_SwVersionDCU7_U8%16)
                    <<QString::number(this->database->DR7_8CT_SwVersionDCU7_U8/16)+"."+QString::number(this->database->DR7_8CT_SwVersionDCU7_U8%16)
                    <<QString::number(this->database->DR9_10CT_SwVersionDCU7_U8/16)+"."+QString::number(this->database->DR9_10CT_SwVersionDCU7_U8%16)
                    <<QString::number(this->database->DR11_12CT_SwVersionDCU7_U8/16)+"."+QString::number(this->database->DR11_12CT_SwVersionDCU7_U8%16)

                    <<QString::number(this->database->DR1_2CT_SwVersionDCU8_U8/16)+"."+QString::number(this->database->DR1_2CT_SwVersionDCU8_U8%16)
                    <<QString::number(this->database->DR3_4CT_SwVersionDCU8_U8/16)+"."+QString::number(this->database->DR3_4CT_SwVersionDCU8_U8%16)
                    <<QString::number(this->database->DR5_6CT_SwVersionDCU8_U8/16)+"."+QString::number(this->database->DR5_6CT_SwVersionDCU8_U8%16)
                    <<QString::number(this->database->DR7_8CT_SwVersionDCU8_U8/16)+"."+QString::number(this->database->DR7_8CT_SwVersionDCU8_U8%16)
                    <<QString::number(this->database->DR9_10CT_SwVersionDCU8_U8/16)+"."+QString::number(this->database->DR9_10CT_SwVersionDCU8_U8%16)
                    <<QString::number(this->database->DR11_12CT_SwVersionDCU8_U8/16)+"."+QString::number(this->database->DR11_12CT_SwVersionDCU8_U8%16);

            for(int i = 0; i < namelabels.size();i++)
            {
                namelabels.at(i)->setText(namestr.at(i));
            }
            for(int i = 0; i < versionlabels.size();i++)
            {
                versionlabels.at(i)->setText(versionstr.at(i));
            }

        }
        break;
    case VOTHERPAGE:
        {

            QList<QString> namestr,versionstr;
            namestr<<"HVAC"<<"ATC"<<"PIS"<<"WMS"<<""<<""<<""<<""<<""<<"";
            versionstr<<QString::number(this->database->AC1CT_SWVersionHighByteX_U8)+"."+QString::number(this->database->AC1CT_SWVersionHighByteY_U8)
                    <<QString::number(this->database->AC2CT_SWVersionHighByteX_U8)+"."+QString::number(this->database->AC2CT_SWVersionHighByteY_U8)
                    <<QString::number(this->database->AC3CT_SWVersionHighByteX_U8)+"."+QString::number(this->database->AC3CT_SWVersionHighByteY_U8)
                    <<QString::number(this->database->AC4CT_SWVersionHighByteX_U8)+"."+QString::number(this->database->AC4CT_SWVersionHighByteY_U8)
                    <<QString::number(this->database->AC5CT_SWVersionHighByteX_U8)+"."+QString::number(this->database->AC5CT_SWVersionHighByteY_U8)
                    <<QString::number(this->database->AC6CT_SWVersionHighByteX_U8)+"."+QString::number(this->database->AC6CT_SWVersionHighByteY_U8)
                      <<QString::number(this->database->ATCT_ATCSWVersion_U32/65536%256)+"."+
                      QString::number(this->database->ATCT_ATCSWVersion_U32%65536/256)+"."+
                      QString::number(this->database->ATCT_ATCSWVersion_U32%65536%256)<<"--"<<"--"<<"--"<<"--"<<"--"
                      <<QString::number(this->database->PA1CT_SoftwareVersion0_U8)+"."+
                      QString::number(this->database->PA1CT_SoftwareVersion1_U8)+"."+
                      QString::number(this->database->PA1CT_SoftwareVersion2_U8)<<"--"<<"--"<<"--"<<"--"
                      <<QString::number(this->database->PA2CT_SoftwareVersion0_U8)+"."+
                      QString::number(this->database->PA2CT_SoftwareVersion1_U8)+"."+
                      QString::number(this->database->PA2CT_SoftwareVersion2_U8)
                      <<"--"<<"--"<<"--"<<"--"<<"--"<<QString::number(this->database->WSCT_GWSWVersion_U16)
                      <<""<<""<<""<<""<<""<<""
                      <<""<<""<<""<<""<<""<<""
                      <<""<<""<<""<<""<<""<<""
                      <<""<<""<<""<<""<<""<<""
                      <<""<<""<<""<<""<<""<<""
                      <<""<<""<<""<<""<<""<<"";


            for(int i = 0; i < namelabels.size();i++)
            {
                namelabels.at(i)->setText(namestr.at(i));
            }
            for(int i = 0; i < versionlabels.size();i++)
            {
                versionlabels.at(i)->setText(versionstr.at(i));
            }
        }
        break;
    }


}
void MaintainceVersionPage::ButtonsPressEvent()
{
    QString BtnName = ((QPushButton *)this->sender())->text();
    if(BtnName == "TCMS")
    {
        m_CurrentPage = VTCMSPAGE;
    }else if(BtnName == "牵引辅助制动")
    {
        m_CurrentPage = VTCUPAGE;
    }else if(BtnName == "车门")
    {
        m_CurrentPage = VEDCUPAGE;
    }else if(BtnName == "其他")
    {
        m_CurrentPage = VOTHERPAGE;
    }

    for(int i = 0; i < buttons.size();i++)
    {
       buttons[i]->setStyleSheet(PButtonUP);
    }
    ((QPushButton *)this->sender())->setStyleSheet(PButtonDOWN);

}
