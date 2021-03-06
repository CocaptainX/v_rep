
#include "vrepMainHeader.h"
#include "qdlgsimplefilter_3x3.h"
#include "ui_qdlgsimplefilter_3x3.h"
#include "gV.h"
#include "tt.h"


CQDlgSimpleFilter_3x3::CQDlgSimpleFilter_3x3(QWidget *parent) :
    CQDlgSimpleFilter(parent),
    ui(new Ui::CQDlgSimpleFilter_3x3)
{
    ui->setupUi(this);
}

CQDlgSimpleFilter_3x3::~CQDlgSimpleFilter_3x3()
{
    delete ui;
}

void CQDlgSimpleFilter_3x3::refresh()
{
    ui->qqPasses->setText(tt::getIString(false,_intParameters[0]).c_str());
    ui->qqMultiplier->setText(tt::getEString(false,_floatParameters[9],2).c_str());
    ui->qq0->setText(tt::getEString(true,_floatParameters[0],2).c_str());
    ui->qq1->setText(tt::getEString(true,_floatParameters[1],2).c_str());
    ui->qq2->setText(tt::getEString(true,_floatParameters[2],2).c_str());
    ui->qq3->setText(tt::getEString(true,_floatParameters[3],2).c_str());
    ui->qq4->setText(tt::getEString(true,_floatParameters[4],2).c_str());
    ui->qq5->setText(tt::getEString(true,_floatParameters[5],2).c_str());
    ui->qq6->setText(tt::getEString(true,_floatParameters[6],2).c_str());
    ui->qq7->setText(tt::getEString(true,_floatParameters[7],2).c_str());
    ui->qq8->setText(tt::getEString(true,_floatParameters[8],2).c_str());
}

void CQDlgSimpleFilter_3x3::on_qqOkCancel_accepted()
{
    defaultModalDialogEndRoutine(true);
}

void CQDlgSimpleFilter_3x3::on_qqOkCancel_rejected()
{
    defaultModalDialogEndRoutine(false);
}

void CQDlgSimpleFilter_3x3::on_qqPasses_editingFinished()
{
    if (!ui->qqPasses->isModified())
        return;
    bool ok;
    int newVal=ui->qqPasses->text().toInt(&ok);
    if (ok)
    {
        tt::limitValue(1,10,newVal);
        _intParameters[0]=newVal;
    }
    refresh();
}

void CQDlgSimpleFilter_3x3::on_qqMultiplier_editingFinished()
{
    if (!ui->qqMultiplier->isModified())
        return;
    bool ok;
    float newVal=ui->qqMultiplier->text().toFloat(&ok);
    if (ok)
    {
        tt::limitValue(-100.0f,100.0f,newVal);
        _floatParameters[9]=newVal;
    }
    refresh();
}

void CQDlgSimpleFilter_3x3::on_qq0_editingFinished()
{
    if (!ui->qq0->isModified())
        return;
    bool ok;
    float newVal=ui->qq0->text().toFloat(&ok);
    if (ok)
    {
        tt::limitValue(-100.0f,100.0f,newVal);
        _floatParameters[0]=newVal;
    }
    refresh();
}

void CQDlgSimpleFilter_3x3::on_qq1_editingFinished()
{
    if (!ui->qq1->isModified())
        return;
    bool ok;
    float newVal=ui->qq1->text().toFloat(&ok);
    if (ok)
    {
        tt::limitValue(-100.0f,100.0f,newVal);
        _floatParameters[1]=newVal;
    }
    refresh();
}

void CQDlgSimpleFilter_3x3::on_qq2_editingFinished()
{
    if (!ui->qq2->isModified())
        return;
    bool ok;
    float newVal=ui->qq2->text().toFloat(&ok);
    if (ok)
    {
        tt::limitValue(-100.0f,100.0f,newVal);
        _floatParameters[2]=newVal;
    }
    refresh();
}

void CQDlgSimpleFilter_3x3::on_qq3_editingFinished()
{
    if (!ui->qq3->isModified())
        return;
    bool ok;
    float newVal=ui->qq3->text().toFloat(&ok);
    if (ok)
    {
        tt::limitValue(-100.0f,100.0f,newVal);
        _floatParameters[3]=newVal;
    }
    refresh();
}

void CQDlgSimpleFilter_3x3::on_qq4_editingFinished()
{
    if (!ui->qq4->isModified())
        return;
    bool ok;
    float newVal=ui->qq4->text().toFloat(&ok);
    if (ok)
    {
        tt::limitValue(-100.0f,100.0f,newVal);
        _floatParameters[4]=newVal;
    }
    refresh();
}

void CQDlgSimpleFilter_3x3::on_qq5_editingFinished()
{
    if (!ui->qq5->isModified())
        return;
    bool ok;
    float newVal=ui->qq5->text().toFloat(&ok);
    if (ok)
    {
        tt::limitValue(-100.0f,100.0f,newVal);
        _floatParameters[5]=newVal;
    }
    refresh();
}

void CQDlgSimpleFilter_3x3::on_qq6_editingFinished()
{
    if (!ui->qq6->isModified())
        return;
    bool ok;
    float newVal=ui->qq6->text().toFloat(&ok);
    if (ok)
    {
        tt::limitValue(-100.0f,100.0f,newVal);
        _floatParameters[6]=newVal;
    }
    refresh();
}

void CQDlgSimpleFilter_3x3::on_qq7_editingFinished()
{
    if (!ui->qq7->isModified())
        return;
    bool ok;
    float newVal=ui->qq7->text().toFloat(&ok);
    if (ok)
    {
        tt::limitValue(-100.0f,100.0f,newVal);
        _floatParameters[7]=newVal;
    }
    refresh();
}

void CQDlgSimpleFilter_3x3::on_qq8_editingFinished()
{
    if (!ui->qq8->isModified())
        return;
    bool ok;
    float newVal=ui->qq8->text().toFloat(&ok);
    if (ok)
    {
        tt::limitValue(-100.0f,100.0f,newVal);
        _floatParameters[8]=newVal;
    }
    refresh();
}
