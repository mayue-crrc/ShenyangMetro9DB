#include "maintainceriomdetailpage.h"
#include "ui_maintainceriomdetailpage.h"

#define SPARE  false


MaintainceRIOMDetailPage::MaintainceRIOMDetailPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceRIOMDetailPage)
{
    ui->setupUi(this);
    QList<QPushButton*> buttons;
    buttons<<ui->TCDI1Btn<<ui->TCDI2Btn<<ui->TCDI3Btn<<ui->TCDI4Btn<<ui->TCDI5Btn<<ui->TCDOBtn<<ui->TCAIMBtn<<ui->MPDIBtn<<ui->MPDOBtn<<ui->MDIBtn<<ui->MDOBtn;
    foreach(QPushButton* button,buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(ButtonsPressEvent()));
    }

    di1 = new DiControl(this);
    di1->setGeometry(70,30,di1->width(),di1->height());
    di1->show();

    do1 = new DoControl(this);
    do1->setGeometry(70,30,do1->width(),do1->height());
    do1->hide();

    do2 = new DoControl(this);
    do2->setGeometry(70,40+do1->height(),do2->width(),do2->height());
    do2->hide();

    ax = new AxControl(this);
    ax->setGeometry(70,30,ax->width(),ax->height());
    ax->hide();
    //init
    currentform = TC_DI1;
    this->ui->TCDI1Btn->setStyleSheet(PButtonDOWN);
    QList <QString> Di1name;
    Di1name
            <<"向前"<<"向后"<<"牵引"<<"制动"<<"快速制动"<<"司机室钥匙激活"
            <<"警惕旁路"<<"警惕动作6s"<<"警惕动作3s"<<"警惕继电器"<<"警惕试验按钮"<<"紧急制动按钮"
            <<"紧急环线旁路1"<<"紧急环线旁路2"<<"紧急制动"<<"洗车模式"<<"紧急运行模式"<<"回送模式"
            <<"头车激活"<<"尾车激活"<<"零速信号"<<"50%牵引"<<"50%制动"<<"牵引安全";
    this->di1->initialName(Di1name,"DI1","TC");

    this->setDataType();
}

MaintainceRIOMDetailPage::~MaintainceRIOMDetailPage()
{
    delete ui;
}
void MaintainceRIOMDetailPage::updatePage()
{

    QList<bool> TCDI1Data,TCDI2Data,TCDI3Data,TCDI4Data,TCDI5Data,TCDO1Data,TCDO2Data,
                MPDI1Data,MPDO1Data,MDI1Data,MDO1Data;
    QList<QString>TCAXData;
    {

        // M data
        MDI1Data<<this->database->DICT_M1DI1CH1Bg1CutOff_B1<<this->database->DICT_M1DI1CH2Bg2CutOff_B1<<this->database->DICT_M1DI1CH3BrkAllCutOff_B1
                <<SPARE<<this->database->DICT_M1DI1CH5ParkingBrkCutOff_B1<<this->database->DICT_M1DI1CH6LightPower1Flt_B1
                <<this->database->DICT_M1DI1CH7LightPower2Flt_B1<<this->database->DICT_M1DI1CH8LightPower3Flt_B1<<this->database->DICT_M1DI1CH9LightPower4Flt_B1
                <<this->database->DICT_M1DI1CH10LineContacterStatus_B1<<this->database->DICT_M1DI1CH11PngBroadcastStatus_B1<<this->database->DICT_M1DI1CH12DoorPowerStatus_B1
                <<this->database->DICT_M1DI1CH13PHFire1_B1<<this->database->DICT_M1DI1CH14PHFire2_B1<<this->database->DICT_M1DI1CH15HoldingBrkApplied_B1
                <<this->database->DICT_M1DI1CH16LineContacterClosed_B1<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE

                <<this->database->DICT_M2DI1CH1Bg1CutOff_B1<<this->database->DICT_M2DI1CH2Bg2CutOff_B1<<this->database->DICT_M2DI1CH3BrkAllCutOff_B1
                <<SPARE<<this->database->DICT_M2DI1CH5ParkingBrkCutOff_B1<<this->database->DICT_M2DI1CH6LightPower1Flt_B1
                <<this->database->DICT_M2DI1CH7LightPower2Flt_B1<<this->database->DICT_M2DI1CH8LightPower3Flt_B1<<this->database->DICT_M2DI1CH9LightPower4Flt_B1
                <<this->database->DICT_M2DI1CH10LineContacterStatus_B1<<this->database->DICT_M2DI1CH11PngBroadcastStatus_B1<<this->database->DICT_M2DI1CH12DoorPowerStatus_B1
                <<this->database->DICT_M2DI1CH13PHFire1_B1<<this->database->DICT_M2DI1CH14PHFire2_B1<<this->database->DICT_M2DI1CH15HoldingBrkApplied_B1
                <<this->database->DICT_M2DI1CH16LineContacterClosed_B1<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE;
        MDO1Data<<this->database->CTDO_M1DO1CH1FireCheck_B1<<this->database->CTDO_M1DO1CH2DoorBreakerOpen_B1<<this->database->CTDO_M1DO1CH3BroadcastBreakerOpen_B1<<
                this->database->CTDO_M1DO1CH4DoorBreakerClose_B1<<this->database->CTDO_M1DO1CH5BroadcastBreakerClose_B1<<this->database->CTDO_M1DO1CH6LineBreakerOpen_B1<<
                SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE
                <<this->database->CTDO_M2DO1CH1FireCheck_B1<<this->database->CTDO_M2DO1CH2DoorBreakerOpen_B1<<this->database->CTDO_M2DO1CH3BroadcastBreakerOpen_B1<<
                this->database->CTDO_M2DO1CH4DoorBreakerClose_B1<<this->database->CTDO_M2DO1CH5BroadcastBreakerClose_B1<<this->database->CTDO_M2DO1CH6LineBreakerOpen_B1<<
                SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE;

        //MP DATA
        MPDI1Data<<this->database->DICT_MP1DI1CH1FirstTimePanPumpOn_B1<<this->database->DICT_MP1DI1CH2FootPumpOn_B1<<this->database->DICT_MP1DI1CH3PanUpStatus_B1
                <<this->database->DICT_MP1DI1CH4PanDownStatus_B1<<this->database->DICT_MP1DI1CH5PanDownandADD_B1<<this->database->DICT_MP1DI1CH6Bg1CutOff_B1
                <<this->database->DICT_MP1DI1CH7Bg2CutOff_B1<<this->database->DICT_MP1DI1CH8BrkAllCutOff_B1<<SPARE
                <<this->database->DICT_MP1DI1CH10ParkingBrkCutOff_B1<<this->database->DICT_MP1DI1CH11LightPower1Flt_B1<<this->database->DICT_MP1DI1CH12LightPower2Flt_B1
                <<this->database->DICT_MP1DI1CH13LightPower3Flt_B1<<this->database->DICT_MP1DI1CH14LightPower4Flt_B1<<this->database->DICT_MP1DI1CH15PngBroadcastStatus_B1
                <<this->database->DICT_MP1DI1CH16DoorPowerStatus_B1<<this->database->DICT_MP1DI1CH17HSCBPower1_B1<<this->database->DICT_MP1DI1CH18HSCBPower2_B1
                <<this->database->DICT_MP1DI1CH19PanCtrl_B1<<this->database->DICT_MP1DI1CH20DCUMPanUpEnable_B1<<this->database->DICT_MP1DI1CH21BatteryCoverOpen_B1
                <<this->database->DICT_MP1DI1CH22PHFire1_B1<<this->database->DICT_MP1DI1CH23PHFire2_B1<<SPARE

                <<this->database->DICT_MP2DI1CH1FirstTimePanPumpOn_B1<<this->database->DICT_MP2DI1CH2FootPumpOn_B1<<this->database->DICT_MP2DI1CH3PanUpStatus_B1
                <<this->database->DICT_MP2DI1CH4PanDownStatus_B1<<this->database->DICT_MP2DI1CH5PanDownandADD_B1<<this->database->DICT_MP2DI1CH6Bg1CutOff_B1
                <<this->database->DICT_MP2DI1CH7Bg2CutOff_B1<<this->database->DICT_MP2DI1CH8BrkAllCutOff_B1<<SPARE
                <<this->database->DICT_MP2DI1CH10ParkingBrkCutOff_B1<<this->database->DICT_MP2DI1CH11LightPower1Flt_B1<<this->database->DICT_MP2DI1CH12LightPower2Flt_B1
                <<this->database->DICT_MP2DI1CH13LightPower3Flt_B1<<this->database->DICT_MP2DI1CH14LightPower4Flt_B1<<this->database->DICT_MP2DI1CH15PngBroadcastStatus_B1
                <<this->database->DICT_MP2DI1CH16DoorPowerStatus_B1<<this->database->DICT_MP2DI1CH17HSCBPower1_B1<<this->database->DICT_MP2DI1CH18HSCBPower2_B1
                <<this->database->DICT_MP2DI1CH19PanCtrl_B1<<this->database->DICT_MP2DI1CH20DCUMPanUpEnable_B1<<this->database->DICT_MP2DI1CH21BatteryCoverOpen_B1
                <<this->database->DICT_MP2DI1CH22PHFire1_B1<<this->database->DICT_MP2DI1CH23PHFire2_B1<<SPARE;
        MPDO1Data<<this->database->CTDO_MP1DO1CH1DoorBreakerOpen_B1<<this->database->CTDO_MP1DO1CH2BroadcastBreakerOpen_B1<<this->database->CTDO_MP1DO1CH3DoorBreakerClose_B1<<
                this->database->CTDO_MP1DO1CH4BroadcastBreakerClose_B1<<this->database->CTDO_MP1DO1CH5FireCheck_B1<<SPARE<<
                SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE
                <<this->database->CTDO_MP2DO1CH1DoorBreakerOpen_B1<<this->database->CTDO_MP2DO1CH2BroadcastBreakerOpen_B1<<this->database->CTDO_MP2DO1CH3DoorBreakerClose_B1<<
                this->database->CTDO_MP2DO1CH4BroadcastBreakerClose_B1<<this->database->CTDO_MP2DO1CH5FireCheck_B1<<SPARE<<
                SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE;


        //TC DATA
        TCDI1Data<<this->database->DICT_TC1DI1CH1Forward_B1<<this->database->DICT_TC1DI1CH2Backward_B1<<this->database->DICT_TC1DI1CH3Traction_B1
                <<this->database->DICT_TC1DI1CH4Brake_B1<<this->database->DICT_TC1DI1CH5QuickBrk_B1<<this->database->DICT_TC1DI1CH6abActive_B1
                <<this->database->DICT_TC1DI1CH7CabActive_B1<<this->database->DICT_TC1DI1CH8Alert6s_B1<<this->database->DICT_TC1DI1CH9Alert3s_B1
                <<this->database->DICT_TC1DI1CH10AlertButton_B1<<this->database->DICT_TC1DI1CH11AlertTestButton_B1<<this->database->DICT_TC1DI1CH12EmBrkButton_B1
                <<this->database->DICT_TC1DI1CH13EmLoopByPass1_B1<<this->database->DICT_TC1DI1CH14EmLoopByPass2_B1<<this->database->DICT_TC1DI1CH15EmBrake_B1
                <<this->database->DICT_TC1DI1CH16WashingMode_B1<<this->database->DICT_TC1DI1CH17EmOperition_B1<<this->database->DICT_TC1DI1CH18TowingMode_B1
                <<this->database->DICT_TC1DI1CH19HeadActived_B1<<this->database->DICT_TC1DI1CH20TailActived_B1<<this->database->DICT_TC1DI1CH21ZeroSpeed_B1
                <<this->database->DICT_TC1DI1CH22HalfTraction_B1<<this->database->DICT_TC1DI1CH23HalfBrake_B1<<this->database->DICT_TC1DI1CH24Tractionsafe_B1

                <<this->database->DICT_TC2DI1CH1Forward_B1<<this->database->DICT_TC2DI1CH2Backward_B1<<this->database->DICT_TC2DI1CH3Traction_B1
                <<this->database->DICT_TC2DI1CH4Brake_B1<<this->database->DICT_TC2DI1CH5QuickBrk_B1<<this->database->DICT_TC2DI1CH6abActive_B1
                <<this->database->DICT_TC2DI1CH7CabActive_B1<<this->database->DICT_TC2DI1CH8Alert6s_B1<<this->database->DICT_TC2DI1CH9Alert3s_B1
                <<this->database->DICT_TC2DI1CH10AlertButton_B1<<this->database->DICT_TC2DI1CH11AlertTestButton_B1<<this->database->DICT_TC2DI1CH12EmBrkButton_B1
                <<this->database->DICT_TC2DI1CH13EmLoopByPass1_B1<<this->database->DICT_TC2DI1CH14EmLoopByPass2_B1<<this->database->DICT_TC2DI1CH15EmBrake_B1
                <<this->database->DICT_TC2DI1CH16WashingMode_B1<<this->database->DICT_TC2DI1CH17EmOperition_B1<<this->database->DICT_TC2DI1CH18TowingMode_B1
                <<this->database->DICT_TC2DI1CH19HeadActived_B1<<this->database->DICT_TC2DI1CH20TailActived_B1<<this->database->DICT_TC2DI1CH21ZeroSpeed_B1
                <<this->database->DICT_TC2DI1CH22HalfTraction_B1<<this->database->DICT_TC2DI1CH23HalfBrake_B1<<this->database->DICT_TC2DI1CH24Tractionsafe_B1;

        TCDI2Data<<this->database->DICT_TC1DI2CH1Forward_B1<<this->database->DICT_TC1DI2CH2Backward_B1<<this->database->DICT_TC1DI2CH3Traction_B1
                <<this->database->DICT_TC1DI2CH4Brake_B1<<this->database->DICT_TC1DI2CH5QuickBrk_B1<<this->database->DICT_TC1DI2CH6CabActive_B1
                <<this->database->DICT_TC1DI2CH7ATCCutOff_B1<<this->database->DICT_TC1DI2CH8ZVRD_B1<<this->database->DICT_TC1DI2CH9FRD1_B1
                <<this->database->DICT_TC1DI2CH10BMButton_B1<<this->database->DICT_TC1DI2CH11RMButton_B1<<this->database->DICT_TC1DI2CH12ATBButton_B1
                <<this->database->DICT_TC1DI2CH13ATOButton_B1<<this->database->DICT_TC1DI2CH14BMMode_B1<<this->database->DICT_TC1DI2CH15RMMode_B1
                <<this->database->DICT_TC1DI2CH16ATCReset_B1<<this->database->DICT_TC1DI2CH17ATCTraction_B1<<this->database->DICT_TC1DI2CH18ATCBrake_B1
                <<this->database->DICT_TC1DI2CH19CompressorOperition_B1<<this->database->DICT_TC1DI2CH20ComOverflow_B1<<this->database->DICT_TC1DI2CH21ComHeating_B1
                <<this->database->DICT_TC1DI2CH22ComSupplyFlt_B1<<this->database->DICT_TC1DI2CH23ZeroSpeedTL_B1<<SPARE

                <<this->database->DICT_TC2DI2CH1Forward_B1<<this->database->DICT_TC2DI2CH2Backward_B1<<this->database->DICT_TC2DI2CH3Traction_B1
                <<this->database->DICT_TC2DI2CH4Brake_B1<<this->database->DICT_TC2DI2CH5QuickBrk_B1<<this->database->DICT_TC2DI2CH6CabActive_B1
                <<this->database->DICT_TC2DI2CH7ATCCutOff_B1<<this->database->DICT_TC2DI2CH8ZVRD_B1<<this->database->DICT_TC2DI2CH9FRD1_B1
                <<this->database->DICT_TC2DI2CH10BMButton_B1<<this->database->DICT_TC2DI2CH11RMButton_B1<<this->database->DICT_TC2DI2CH12ATBButton_B1
                <<this->database->DICT_TC2DI2CH13ATOButton_B1<<this->database->DICT_TC2DI2CH14BMMode_B1<<this->database->DICT_TC2DI2CH15RMMode_B1
                <<this->database->DICT_TC2DI2CH16ATCReset_B1<<this->database->DICT_TC2DI2CH17ATCTraction_B1<<this->database->DICT_TC2DI2CH18ATCBrake_B1
                <<this->database->DICT_TC2DI2CH19CompressorOperition_B1<<this->database->DICT_TC2DI2CH20ComOverflow_B1<<this->database->DICT_TC2DI2CH21ComHeating_B1
                <<this->database->DICT_TC2DI2CH22ComSupplyFlt_B1<<this->database->DICT_TC2DI2CH23ZeroSpeedTL_B1<<SPARE;

        TCDI3Data<<this->database->DICT_TC1DI3CH1Bg1CutOff_B1<<this->database->DICT_TC1DI3CH2Bg2CutOff_B1<<this->database->DICT_TC1DI3CH3EBCUCutOff_B1
                <<this->database->DICT_TC1DI3CH4NotZeroSpeed_B1<<this->database->DICT_TC1DI3CH5Spd88_B1<<this->database->DICT_TC1DI3CH6TotalAirPreLow_B1
                <<this->database->DICT_TC1DI3CH7ParkingBrkBtn_B1<<this->database->DICT_TC1DI3CH8ParkingBrkRlsBtn_B1<<this->database->DICT_TC1DI3CH9ParkBrkStatus_B1
                <<this->database->DICT_TC1DI3CH10ParkingBrkCutOff_B1<<this->database->DICT_TC1DI3CH11ParkingBrkByPass_B1<<this->database->DICT_TC1DI3CH12ForceRlsBtn_B1
                <<this->database->DICT_TC1DI3CH13BrkRlsFlt_B1<<this->database->DICT_TC1DI3CH14BrkRlsByPass_B1<<this->database->DICT_TC1DI3CH15BrkReleased_B1
                <<this->database->DICT_TC1DI3CH16BrkRlsByPass_B1<<this->database->DICT_TC1DI3CH17HoldingBrkApplied_B1<<this->database->DICT_TC1DI3CH18HoldingBrkCutOff_B1
                <<this->database->DICT_TC1DI3CH19BatteryPowerContacter_B1<<this->database->DICT_TC1DI3CH20BatteryCtrlContacter_B1<<this->database->DICT_TC1DI3CH21DC110On_B1
                <<this->database->DICT_TC1DI3CH22SprayStart_B1<<this->database->DICT_TC1DI3CH23ValveTest_B1<<this->database->DICT_TC1DI3CH24ValveReset_B1

                <<this->database->DICT_TC2DI3CH1Bg1CutOff_B1<<this->database->DICT_TC2DI3CH2Bg2CutOff_B1<<this->database->DICT_TC2DI3CH3EBCUCutOff_B1
                <<this->database->DICT_TC2DI3CH4NotZeroSpeed_B1<<this->database->DICT_TC2DI3CH5Spd88_B1<<this->database->DICT_TC2DI3CH6TotalAirPreLow_B1
                <<this->database->DICT_TC2DI3CH7ParkingBrkBtn_B1<<this->database->DICT_TC2DI3CH8ParkingBrkRlsBtn_B1<<this->database->DICT_TC2DI3CH9ParkBrkStatus_B1
                <<this->database->DICT_TC2DI3CH10ParkingBrkCutOff_B1<<this->database->DICT_TC2DI3CH11ParkingBrkByPass_B1<<this->database->DICT_TC2DI3CH12ForceRlsBtn_B1
                <<this->database->DICT_TC2DI3CH13BrkRlsFlt_B1<<this->database->DICT_TC2DI3CH14BrkRlsByPass_B1<<this->database->DICT_TC2DI3CH15BrkReleased_B1
                <<this->database->DICT_TC2DI3CH16BrkRlsByPass_B1<<this->database->DICT_TC2DI3CH17HoldingBrkApplied_B1<<this->database->DICT_TC2DI3CH18HoldingBrkCutOff_B1
                <<this->database->DICT_TC2DI3CH19BatteryPowerContacter_B1<<this->database->DICT_TC2DI3CH20BatteryCtrlContacter_B1<<this->database->DICT_TC2DI3CH21DC110On_B1
                <<this->database->DICT_TC2DI3CH22SprayStart_B1<<this->database->DICT_TC2DI3CH23ValveTest_B1<<this->database->DICT_TC2DI3CH24ValveReset_B1;

        TCDI4Data<<this->database->DICT_TC1DI4CH1AutoOpenClose_B1<<this->database->DICT_TC1DI4CH2AutoOperitionDisable_B1
                <<this->database->DICT_TC1DI4CH3MannulOperitionDisable_B1<<this->database->DICT_TC1DI4CH4RtDoorEnable_B1
                <<this->database->DICT_TC1DI4CH5LtDoorEnable_B1<<this->database->DICT_TC1DI4CH6ZeroSpdEnable_B1<<this->database->DICT_TC1DI4CH7LtDoorOpen_B1
                <<this->database->DICT_TC1DI4CH8RtDoorOpen_B1<<this->database->DICT_TC1DI4CH9LtDoorClose_B1<<this->database->DICT_TC1DI4CH10RtDoorClose_B1
                <<this->database->DICT_TC1DI4CH11CarDoorAllClosed_B1<<this->database->DICT_TC1DI4CH12CarDoorSafeLoopByPass_B1<<this->database->DICT_TC1DI4CH13CabLtDoorStatus_B1
                <<this->database->DICT_TC1DI4CH14CabRtDoorStatus_B1<<this->database->DICT_TC1DI4CH15CabDoorClosed_B1<<this->database->DICT_TC1DI4CH16CabDoorLoopByPass_B1
                <<this->database->DICT_TC1DI4CH17BarrielDoorStutas_B1<<this->database->DICT_TC1DI4CH18DoorElection_B1<<this->database->DICT_TC1DI4CH19PanUpOrder_B1
                <<this->database->DICT_TC1DI4CH20PanDownOrder_B1<<this->database->DICT_TC1DI4CH21PanCutOffThisSide_B1<<this->database->DICT_TC1DI4CH22PanCutOffOtherSide_B1
                <<this->database->DICT_TC1DI4CH23ADDCutOff_B1<<SPARE

                <<this->database->DICT_TC2DI4CH1AutoOpenClose_B1<<this->database->DICT_TC2DI4CH2AutoOperitionDisable_B1
                <<this->database->DICT_TC2DI4CH3MannulOperitionDisable_B1<<this->database->DICT_TC2DI4CH4RtDoorEnable_B1
                <<this->database->DICT_TC2DI4CH5LtDoorEnable_B1<<this->database->DICT_TC2DI4CH6ZeroSpdEnable_B1<<this->database->DICT_TC2DI4CH7LtDoorOpen_B1
                <<this->database->DICT_TC2DI4CH8RtDoorOpen_B1<<this->database->DICT_TC2DI4CH9LtDoorClose_B1<<this->database->DICT_TC2DI4CH10RtDoorClose_B1
                <<this->database->DICT_TC2DI4CH11CarDoorAllClosed_B1<<this->database->DICT_TC2DI4CH12CarDoorSafeLoopByPass_B1<<this->database->DICT_TC2DI4CH13CabLtDoorStatus_B1
                <<this->database->DICT_TC2DI4CH14CabRtDoorStatus_B1<<this->database->DICT_TC2DI4CH15CabDoorClosed_B1<<this->database->DICT_TC2DI4CH16CabDoorLoopByPass_B1
                <<this->database->DICT_TC2DI4CH17BarrielDoorStutas_B1<<this->database->DICT_TC2DI4CH18DoorElection_B1<<this->database->DICT_TC2DI4CH19PanUpOrder_B1
                <<this->database->DICT_TC2DI4CH20PanDownOrder_B1<<this->database->DICT_TC2DI4CH21PanCutOffThisSide_B1<<this->database->DICT_TC2DI4CH22PanCutOffOtherSide_B1
                <<this->database->DICT_TC2DI4CH23ADDCutOff_B1<<SPARE;

        TCDI5Data<<this->database->DICT_TC1DI5CH1BCGNormal_B1<<this->database->DICT_TC1DI5CH2DC24Flt_B1<<this->database->DICT_TC1DI5CH3ACMOn_B1
                <<this->database->DICT_TC1DI5CH4ACMOff_B1<<this->database->DICT_TC1DI5CH5ZeroVoltStart_B1<<this->database->DICT_TC1DI5CH6ABFire1_B1
                <<this->database->DICT_TC1DI5CH7ABFire2_B1<<this->database->DICT_TC1DI5CH8workshopHoldingOnByPass_B1<<this->database->DICT_TC1DI5CH9WorkshopHoldingOn_B1
                <<this->database->DICT_TC1DI5CH10HBCloseBtn_B1<<this->database->DICT_TC1DI5CH11HBOpenBtn_B1<<this->database->DICT_TC1DI5CH12LightPower1Flt_B1
                <<this->database->DICT_TC1DI5CH13LightPower2Flt_B1<<this->database->DICT_TC1DI5CH14LightPower3Flt_B1<<this->database->DICT_TC1DI5CH15LightPower4Flt_B1
                <<this->database->DICT_TC1DI5CH16ColourSwitch_B1<<this->database->DICT_TC1DI5CH17CabBroadcastStatusB1<<this->database->DICT_TC1DI5CH18PanCtrlStatus_B1
                <<this->database->DICT_TC1DI5CH19PngBroadcastStatus_B1<<this->database->DICT_TC1DI5CH20DoorPowerStatus_B1<<this->database->DICT_TC1DI5CH21Uncoupled_B1
                <<this->database->DICT_TC1DI5CH22HeaterStatus_B1<<SPARE<<SPARE

                <<this->database->DICT_TC2DI5CH1BCGNormal_B1<<this->database->DICT_TC2DI5CH2DC24Flt_B1<<this->database->DICT_TC2DI5CH3ACMOn_B1
                <<this->database->DICT_TC2DI5CH4ACMOff_B1<<this->database->DICT_TC2DI5CH5ZeroVoltStart_B1<<this->database->DICT_TC2DI5CH6ABFire1_B1
                <<this->database->DICT_TC2DI5CH7ABFire2_B1<<this->database->DICT_TC2DI5CH8workshopHoldingOnByPass_B1<<this->database->DICT_TC2DI5CH9WorkshopHoldingOn_B1
                <<this->database->DICT_TC2DI5CH10HBCloseBtn_B1<<this->database->DICT_TC2DI5CH11HBOpenBtn_B1<<this->database->DICT_TC2DI5CH12LightPower1Flt_B1
                <<this->database->DICT_TC2DI5CH13LightPower2Flt_B1<<this->database->DICT_TC2DI5CH14LightPower3Flt_B1<<this->database->DICT_TC2DI5CH15LightPower4Flt_B1
                <<this->database->DICT_TC2DI5CH16ColourSwitch_B1<<this->database->DICT_TC2DI5CH17CabBroadcastStatusB1<<this->database->DICT_TC2DI5CH18PanCtrlStatus_B1
                <<this->database->DICT_TC2DI5CH19PngBroadcastStatus_B1<<this->database->DICT_TC2DI5CH20DoorPowerStatus_B1<<this->database->DICT_TC2DI5CH21Uncoupled_B1
                <<this->database->DICT_TC2DI5CH22HeaterStatus_B1<<SPARE<<SPARE;

        TCDO1Data<<this->database->CTDO_TC1DO1CH1CompressorStart_B1<<this->database->CTDO_TC1DO1CH2DoorBreakerOpen_B1<<this->database->CTDO_TC1DO1CH3BroadcastBreakerOpen_B1<<
                this->database->CTDO_TC1DO1CH4DoorBreakerClose_B1<<this->database->CTDO_TC1DO1CH5BroadcastBreakerClose_B1<<this->database->CTDO_TC1DO1CH6FireCheck_B1<<
                SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE
                <<this->database->CTDO_TC2DO1CH1CompressorStart_B1<<this->database->CTDO_TC2DO1CH2DoorBreakerOpen_B1<<this->database->CTDO_TC2DO1CH3BroadcastBreakerOpen_B1<<
                this->database->CTDO_TC2DO1CH4DoorBreakerClose_B1<<this->database->CTDO_TC2DO1CH5BroadcastBreakerClose_B1<<this->database->CTDO_TC2DO1CH6FireCheck_B1<<
                SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE;

        TCDO2Data<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE
                <<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE<<SPARE;

        TCAXData<<QString::number(this->database->AICT_TC1AX1AI1)
                <<QString::number(this->database->AICT_TC1AX1AI2)
                <<QString::number(this->database->AICT_TC1AX1AI3)
                <<QString::number(this->database->AICT_TC1AX1AI4)
                <<QString::number(this->database->AICT_TC1AX1AI5)
                <<QString::number(this->database->AICT_TC1AX1AI6)
                <<QString::number(this->database->AICT_TC1AX1AI7Grade_U16)
                <<QString::number(this->database->AICT_TC1AX1AI8)

                <<QString::number(this->database->AICT_TC2AX1AI1)
                <<QString::number(this->database->AICT_TC2AX1AI2)
                <<QString::number(this->database->AICT_TC2AX1AI3)
                <<QString::number(this->database->AICT_TC2AX1AI4)
                <<QString::number(this->database->AICT_TC2AX1AI5)
                <<QString::number(this->database->AICT_TC2AX1AI6)
                <<QString::number(this->database->AICT_TC2AX1AI7Grade_U16)
                <<QString::number(this->database->AICT_TC2AX1AI8);
    }
    switch (currentform)
    {
    case TC_DI1:
        this->di1->updateDi(TCDI1Data);
        break;
    case TC_DI2:
        this->di1->updateDi(TCDI2Data);
        break;
    case TC_DI3:
        this->di1->updateDi(TCDI3Data);
        break;
    case TC_DI4:
        this->di1->updateDi(TCDI4Data);
        break;
    case TC_DI5:
        this->di1->updateDi(TCDI5Data);
        break;
    case TC_DO:
        this->do1->updateDo(TCDO1Data);
        this->do2->updateDo(TCDO2Data);
        break;
    case TC_AIM:
        this->ax->updateAx(TCAXData);
        break;
    case MP_DI:
        this->di1->updateDi(MPDI1Data);
        break;
    case MP_DO:
        this->do1->updateDo(MPDO1Data);
        break;
    case M_DI:
        this->di1->updateDi(MDI1Data);
        break;
    case M_DO:
        this->do1->updateDo(MDO1Data);
        break;
    }

}
void MaintainceRIOMDetailPage::setDataType()
{


}

void MaintainceRIOMDetailPage::ButtonsPressEvent()
{
    QString BtnName = ((QPushButton *)this->sender())->objectName();
    if(BtnName == "TCDI1Btn")
    {
        currentform = TC_DI1;

        QList <QString> Di1name;
        Di1name
                <<"向前"<<"向后"<<"牵引"<<"制动"<<"快速制动"<<"司机室钥匙激活"
                <<"警惕旁路"<<"警惕动作6s"<<"警惕动作3s"<<"警惕继电器"<<"警惕试验按钮"<<"紧急制动按钮"
                <<"紧急环线旁路"<<"紧急环线短接"<<"紧急制动"<<"洗车模式"<<"紧急运行模式"<<"回送模式"
                <<"头车激活"<<"尾车激活"<<"零速信号"<<"50%牵引"<<"50%制动"<<"牵引安全";
        this->di1->initialName(Di1name,"DI1","TC");
        this->di1->show();
        this->do1->hide();
        this->do2->hide();
        this->ax->hide();
    }else if(BtnName == "TCDI2Btn")
    {
        currentform = TC_DI2;

        QList <QString> Di2name;
        Di2name
                <<"向前"<<"向后"<<"牵引"<<"制动"<<"快速制动"<<"司机室钥匙激活"
                <<"ATC切除"<<"ZVRD"<<"FRD1"<<"BM按钮动作"<<"RM按钮动作"<<"ATB按钮动作"
                <<"ATO按钮动作"<<"BM继电器"<<"RM继电器"<<"ATC复位"<<"牵引(信号)"<<"制动(信号)"
                <<"空压机运行"<<"空压机过流"<<"空压机润滑油加热"<<"空压机供电异常"<<"车辆零速旁路"<<"保留";
        this->di1->initialName(Di2name,"DI2","TC");
        this->di1->show();
        this->do1->hide();
        this->do2->hide();
        this->ax->hide();
    }else if(BtnName == "TCDI3Btn")
    {
        currentform = TC_DI3;

        QList <QString> Di3name;
        Di3name <<"转向架1切除"<<"转向架2切除"<<"整车制动切除"<<"非零速信号"<<"88km/h信号"<<"总风压力低"
                <<"停放制动施加按钮"<<"停放制动缓解按钮"<<"停放制动状态(整车)"<<"停放制动切除"<<"停放制动旁路"<<"强迫缓解按钮"
                <<"制动不缓解故障(整车)"<<"制动不缓解故障旁路"<<"制动缓解(整车)"<<"制动缓解旁路"<<"保持制动施加(整车)"<<"保持制动切除"
                <<"蓄电池供电断路器"<<"蓄电池控制断路器"<<"DC110V投入"<<"水雾启动"<<"阀门测试"<<"阀门复位";
        this->di1->initialName(Di3name,"DI3","TC");
        this->di1->show();
        this->do1->hide();
        this->do2->hide();
        this->ax->hide();


    }else if(BtnName == "TCDI4Btn")
    {
        currentform = TC_DI4;

        QList <QString> Di4name;
        Di4name<<"自动开关门"<<"自动开手动关"<<"手动开手动关"<<"右门使能"<<"左门使能"<<"零速使能"<<"开左门"
                <<"开右门"<<"关左门"<<"关右门"<<"客室门全关好"<<"客室门安全线旁路"<<"司机室左门状态"
                <<"司机室右门状态"<<"司机室门全关好"<<"司机室门安全线旁路"<<"间壁门状态"<<"门选"<<"升弓指令"
                <<"降弓指令"<<"本端受电弓切除按钮"<<"远端受电弓切除按钮"<<"ADD切除"<<"保留";
        this->di1->initialName(Di4name,"DI4","TC");
        this->di1->show();
        this->do1->hide();
        this->do2->hide();
        this->ax->hide();
    }else if(BtnName == "TCDI5Btn")
    {
        currentform = TC_DI5;

        QList <QString> Di5name;
        Di5name<<"蓄电池充电机正常"<<"DC24V电源故障"<<"ACM启动"<<"ACM停止"<<"零压启动"<<"AB火灾检测1"
                <<"AB火灾检测2"<<"车间动车旁路"<<"车间禁止动车继电器"<<"HB合按钮"<<"HB断按钮"<<"照明驱动电源1故障"
                <<"照明驱动电源2故障"<<"照明驱动电源3故障"<<"照明驱动电源4故障"<<"色温选择开关"<<"司机室广播系统空开"<<"受电弓控制空开"
                <<"客室广播空开"<<"车门电源空开"<<"解钩"<<"电暖气状态"<<"保留"<<"保留";
        this->di1->initialName(Di5name,"DI5","TC");
        this->di1->show();
        this->do1->hide();
        this->do2->hide();
        this->ax->hide();
    }
    else if(BtnName == "TCDOBtn")
    {
        currentform = TC_DO;

        QList <QString> Do1name,Do2name;
        Do1name
                <<"空压机启动"<<"车门系统空开跳开"<<"列广系统空开跳开"<<"车门系统空开闭合"<<"列广系统空开闭合"<<"火灾检测"
                <<"间壁门开启蜂鸣器"<<"保留"<<"保留"<<"保留"<<"保留"<<"保留"
                <<"保留"<<"保留"<<"保留"<<"保留";
        Do2name
                <<"保留"<<"保留"<<"保留"<<"保留"<<"保留"<<"保留"
                <<"保留"<<"保留"<<"保留"<<"保留"<<"保留"<<"保留"
                <<"保留"<<"保留"<<"保留"<<"保留";
        this->do1->initialName(Do1name,"DO1","TC");
        this->do2->initialName(Do2name,"DO2","TC");

        this->di1->hide();
        this->do1->show();
        this->do2->show();
        this->ax->hide();
    }else if(BtnName == "TCAIMBtn")
    {
        currentform = TC_AIM;

        QList <QString> AXname;
        AXname <<"保留"<<"保留"<<"保留"<<"保留"
                <<"保留"<<"保留"<<"司控器输入"<<"保留";
        this->ax->initialName(AXname);

        this->di1->hide();
        this->do1->hide();
        this->do2->hide();
        this->ax->show();
    }else if(BtnName == "MPDIBtn")
    {
        currentform = MP_DI;

        QList <QString> Di1name;
        Di1name<<"初次升弓泵工作"<<"脚踏泵塞门切除"<<"升弓到位"<<"降弓到位"<<"ADD及降弓继电器"<<"转向架1切除"
                <<"转向架2切除"<<"整车制动切除"<<"保留"<<"停放制动切除"<<"照明驱动电源1故障"<<"照明驱动电源2故障"
                <<"照明驱动电源3故障"<<"照明驱动电源4故障"<<"客室广播空开"<<"车门系统空开"<<"高速断路器电源1"<<"高速断路器电源2"
                <<"受电弓控制"<<"牵引升弓使能"<<"车间电源保护盖打开"<<"PH火灾检测1"<<"PH火灾检测2"<<"保留";
        this->di1->initialName(Di1name,"DI1","MP");
        this->di1->show();
        this->do1->hide();
        this->do2->hide();
        this->ax->hide();
    }else if(BtnName == "MPDOBtn")
    {
        currentform = MP_DO;

        QList <QString> Do1name;
        Do1name<<"车门系统空开跳开"<<"列广系统空开跳开"<<"车门系统空开闭合"<<"列广系统空开闭合"<<"火灾检测"<<"保留"
                <<"保留"<<"保留"<<"保留"<<"保留"<<"保留"<<"保留"
                <<"保留"<<"保留"<<"保留"<<"保留";

        this->do1->initialName(Do1name,"DO1","MP");

        this->di1->hide();
        this->do1->show();
        this->do2->hide();
        this->ax->hide();
    }else if(BtnName == "MDIBtn")
    {
        currentform = M_DI;

        QList <QString> Di1name;
        Di1name<<"转向架1切除"<<"转向架2切除"<<"整车制动切除"<<"保留"<<"停放制动切除"<<"照明驱动电源1故障"
                <<"照明驱动电源2故障"<<"照明驱动电源3故障"<<"照明驱动电源4故障"<<"母线接触器空开"<<"列车广系统空开"<<"车门系统空开"
                <<"PB火灾检测1"<<"PB火灾检测2"<<"保持制动施加（单元）"<<"母线接触器闭合"<<"保留"<<"保留"
                <<"保留"<<"保留"<<"保留"<<"保留"<<"保留"<<"保留";
        this->di1->initialName(Di1name,"DI1","M");
        this->di1->show();
        this->do1->hide();
        this->do2->hide();
        this->ax->hide();
    }else if(BtnName == "MDOBtn")
    {
        currentform = M_DO;

        QList <QString> Do1name;
        Do1name<<"火灾检测"<<"车门系统空开跳开"<<"列广系统空开跳开"<<"车门系统空开闭合"<<"列广系统空开闭合"<<"母线接触器断开"
                <<"保留"<<"保留"<<"保留"<<"保留"<<"保留"<<"保留"
                <<"保留"<<"保留"<<"保留"<<"保留";

        this->do1->initialName(Do1name,"DO1","M");

        this->di1->hide();
        this->do1->show();
        this->do2->hide();
        this->ax->hide();
    }

    QList<QPushButton*> buttons;
    buttons<<ui->TCDI1Btn<<ui->TCDI2Btn<<ui->TCDI3Btn<<ui->TCDI4Btn<<ui->TCDI5Btn<<ui->TCDOBtn<<ui->TCAIMBtn<<ui->MPDIBtn<<ui->MPDOBtn<<ui->MDIBtn<<ui->MDOBtn;

    for(int i = 0; i < buttons.size();i++)
    {
       buttons[i]->setStyleSheet(PButtonUP);
    }
    ((QPushButton *)this->sender())->setStyleSheet(PButtonDOWN);
}

void MaintainceRIOMDetailPage::on_returnBtn_pressed()
{
    changePage(uVehicleMaintaincePage);
}
