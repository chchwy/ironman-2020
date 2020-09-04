// 這是 qt-layout.cpp
#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;

    QVBoxLayout* vLayout = new QVBoxLayout;
    w.setLayout(vLayout);

    QHBoxLayout* hLayout1 = new QHBoxLayout;
    hLayout1->addWidget(new QPushButton("紅茶"));
    hLayout1->addWidget(new QPushButton("綠茶"));
    hLayout1->addWidget(new QPushButton("烏龍茶"));

    QHBoxLayout* hLayout2 = new QHBoxLayout;
    hLayout2->addWidget(new QPushButton("無糖"));
    hLayout2->addWidget(new QPushButton("少糖"));
    hLayout2->addWidget(new QPushButton("半糖"));

    vLayout->addLayout(hLayout1);
    vLayout->addLayout(hLayout2);

    w.show();
    return a.exec();
}
