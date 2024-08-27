#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
const char *spKey="YARI\\a3QU>5DOKmYvAKTrf23s7EYtD_cwouUAa:ueT_Q`>rme[_\\Ui<RGr4"
                  "L@SqZoOXApywNqfvb6cBGfG946q@JhjuWJyn=tifYQqpQfNKhGTwDzF]f2`x<"
                  "m?;T5ANahdbIra@giY7<7n3QDkR8wo_^hgot0Y<5:kHnGQvr2b@;zvEE`HBRO"
                  "9eaBV0VdAe[`jPElA=pkYScbzChy3zjukp2]:BBy<peG0QBNwGh>GR7xx=sVM"
                  "XP8Y?=OT29_N3wU;b8CZurh`_c^zPcs>bnbS3C;ocWNyd:P:=1Zi7P\\fw>Jf"
                  "[Zbgka@nvl[3>`4^U4aUra[Dx@;gV759W1Y^;VVglL<8PDV6^jE7OCE_4mlby"
                  "Y\\kZW3zfSDHmoa_ttU5QY2I2p>H9zxkjDnFB2yDV[ASK5Vd2a20[ay_;6LiN"
                  "t0hAs_;>InSozDv:8mSwA:Iq\\vH\\IJC8d^YLB1k[W\\dI<:c:Pvqc2[QW97"
                  "m?UKz0d4eyD2U`wnmvbp:d@51mET_3v?zV=q1nM0=jLXP20Qpe:7zK8VU1bl3"
                  "B9g?mf:OxIy:6Ycic7<ECTw_snZESY`f4qR7E5e<kRfF7\\PVi8;:A`IV`Afm"
                  "@09bwDckgj0y4c[knk6[cgn`h0=rgNAn;dHeKtEyq=b_t:Z7nD\\h?=SXxWXv"
                  "3WcXu8SkANpO340jZxz6mdArMXozc2XjVsHcs9]LdRIT`vnxfew=6V:^W?>Z"
                  "o@MB705IW3FGx9y^>VbDnw3\\U\\S>\\??v8[]1`iF2Uvoc3G2b\\q?LBxoBU"
                  "koHO=A8SwQMV^?zBg]ysT8ScSoLfay`k7@uNtJmINJa^kqWAboAw`FJhyf4N1"
                  "UIBqmTYpu6d;=75?65r0m<mX0URB3YKjnQfLke6yHA=RLI5Bjb5;We1BkdTp`"
                  "73z]2G6Ce9Q\\^3]OMAlVGW_=nST9jmk[?uUuj0E>Z?N?NWnVP4S:RHgX1@XM"
                  "G`VdiOW=QYXyoLkL0^:zE8se]tb1M0`9[T5rH";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString strKey;
    for(int i = 0;i < 1000;i++){
        int num = qrand() % 75 + 48;
        strKey.push_back(num);
    }
    qDebug() << strKey;

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_exit_clicked()
{
    qApp->exit();
}


void MainWindow::on_pushButton_login_clicked()
{
    //获取时间
    //获取用户名
    //获取密码
    //获取噪声值
    //获取私钥
    //将上述字符串生成一个MD5值
    //重新组合 用户名+时间+噪声值+MD5 通过HTTP发送到服务端
}

