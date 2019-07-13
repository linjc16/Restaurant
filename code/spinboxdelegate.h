#ifndef SPINBOXDELEGATE_H
#define SPINBOXDELEGATE_H
#include <QItemDelegate>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QSpinBox>


class SpinBoxDelegate : public QItemDelegate
{
    Q_OBJECT

public:
    SpinBoxDelegate(QObject *parent = 0);
    //返回一个编辑控件，用来编辑指定项的数据
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const;
    //将Model中数据赋值到控件上
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    //设定模型数据，根据指定项中对应编辑控件的数据
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const;
    //更新编辑框几何形状
    void updateEditorGeometry(QWidget *editor,
        const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

#endif // SPINBOXDELEGATE_H

