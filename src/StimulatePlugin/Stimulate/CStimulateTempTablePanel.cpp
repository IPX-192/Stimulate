#include "CStimulateTempTablePanel.h"
#pragma execution_character_set("utf-8")

CStimulateTempTablePanel::CStimulateTempTablePanel(QWidget* parentWidget) {}

void CStimulateTempTablePanel::customInit()
{
    // QVector<QString> vecTemp;
    // vecTemp << "标准";

    // setHeaderText(0, 0, vecTemp);


    QColor colorBackHead(65,65,65);
    QColor colorBackOddNumberRow(83,83,83);
    QColor colorBackEvenNumberRow(74,74,74);
    QColor colorText(255,255,255);


    auto dataModel = getDataModel();

    QTableWidgetItem *pItem;

    //设置行的颜色

    //设置表头

    // auto curRow = getDataModel()->rowCount();
    // getDataModel()->setRowCount(6);
    // getDataModel()->setColumnCount(vecTemp.size());

    // for(int j = 0; j < vecTemp.size(); j++)
    // {
    //     setCellData(0, j, Qt::AlignCenter, TableView::FORM_HRADER, Qt::TextAlignmentRole);


    //     pItem = m_pTableHeader->item(0, j);
    //     if(m_pTableHeader != nullptr)
    //     {
    //         pItem->setForeground(QBrush(colorText));
    //         pItem->setBackground(QBrush(colorBackHead));
    //     }
    // }

    showTemplateTable();
}

void CStimulateTempTablePanel::showTemplateTable()
{
    //注：一定要先设置格子类型然后填充数据,最后设置图片等操作才会生效
    setAlternatingRowColors(false);  //设置单双行颜色不同
    setDispColNumFlag(false);       //不显示列序号
    //setResizeToContentsFlag(true);
    // setColItemType(0, cell::btn);


    //setColItemType(6, cell::checkBox);  //暂时不用编辑框，用按钮

    //removeData();
    QVector<QString> vecTemp;
    QString strDate, strLastDate;
    int currentRow = 0;
    int colIndex = 0;

    vecTemp.clear();
    vecTemp << "标准";

    for (int i = 0; i < 20; i++)
    {
        setText(i, 1, vecTemp);
    }
}
