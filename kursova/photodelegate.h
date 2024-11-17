#ifndef PHOTODELEGATE_H
#define PHOTODELEGATE_H

#include <QItemDelegate>
#include <QSize>
#include <QStyleOptionViewItem>
#include <QModelIndex>

class PhotoDelegate : public QItemDelegate
{
    Q_OBJECT

public:
    explicit PhotoDelegate(QObject *parent = nullptr);

    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};

#endif // PHOTODELEGATE_H
