#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resrc/PICC/wallpaperflare.com_wallpaper (2).jpg");
    int w =ui->label_pic->width();
    int h=ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled( w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sign_in_clicked()
{
    QString username=ui->line_username->text();
    QString password =ui->line_password->text();
    if(username=="nishu"&& password=="xyz"){
        QMessageBox::information(this,"sign in","sign in succesfully");
        hide();
        dialog = new Dialog(this);
        dialog->show();
    }
    else{
        QMessageBox::warning(this,"not sign in","wrong username or password");
    }

}

