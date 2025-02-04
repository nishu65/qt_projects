#include "dialog.h"
#include "ui_dialog.h"
#include<QPixmap>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/nishu/OneDrive/Pictures/v.png");
    int w= ui->label_pic2->width() ;
    int h=ui->label_pic2->height();
    ui->label_pic2->setPixmap(pix.scaled( w,h,Qt::KeepAspectRatio));
}

Dialog::~Dialog()
{
    delete ui;
}
