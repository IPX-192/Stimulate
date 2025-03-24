#include "CQListViewBase.h"

CQListViewBase::CQListViewBase() : m_pVBoxLayout(new QVBoxLayout)
{
    QPushButton *button = new QPushButton("标准协议");
    // button->setGeometry(QRect(300, 10, 100, 30));

    for (int i = 0; i < 20; i++)
    {
        addCustomItem(button);
    }
}

void CQListViewBase::addCustomItem(QWidget *item)
{
    m_pVBoxLayout->addWidget(item);
    this->show();
}
