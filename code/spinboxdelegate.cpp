#include "spinboxdelegate.h"
#include "all_headers_needed.h"
#include <QDebug>

SpinBoxDelegate::SpinBoxDelegate(QObject *parent)
    : QItemDelegate(parent)
{
}

//返回一个编辑控件，用来编辑指定项的数据
QWidget *SpinBoxDelegate::createEditor(QWidget *parent,
    const QStyleOptionViewItem &/* option */,
    const QModelIndex & index ) const
{
    //返回该QSpinBox控件
    QSpinBox *editor = new QSpinBox(parent);
    editor->setMinimum(0);
    editor->setMaximum(100);

    return editor;
}

//将Model中数据赋值到控件上
void SpinBoxDelegate::setEditorData(QWidget *editor,
                                    const QModelIndex &index) const
{
    //返回该索引的模型，继而返回该模型中此索引的编辑角色数据
    int value = index.model()->data(index, Qt::EditRole).toInt();
    //给控件赋值
    QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
    spinBox->setValue(value);
}

//设定模型数据，根据指定项中对应编辑控件的数据
void SpinBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
                                   const QModelIndex &index) const
{
    QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
    spinBox->interpretText();
    int value = spinBox->value();
    //设置模型的数据
    model->setData(index, value, Qt::EditRole);
}

//更新编辑框几何形状
void SpinBoxDelegate::updateEditorGeometry(QWidget *editor,
    const QStyleOptionViewItem &option, const QModelIndex &/* index */) const
{
    //根据option,设置编辑框位置
    editor->setGeometry(option.rect);
}
