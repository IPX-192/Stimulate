#ifndef CQLISTVIEWBASE_H
#define CQLISTVIEWBASE_H

#include <QListWidget>
#include <QListWidgetItem>
#include <QVBoxLayout>
#include <QPushButton>

class CQListViewBase : public QListWidget
{
public:
    CQListViewBase();
    virtual void addCustomItem(QWidget *item);
private:
    QVBoxLayout *m_pVBoxLayout{nullptr};
};

#endif // CQLISTVIEWBASE_H
