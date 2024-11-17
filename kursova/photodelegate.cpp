#include "PhotoDelegate.h"
#include <QPainter>
#include <QImage>
#include <QPixmap>

PhotoDelegate::PhotoDelegate(QObject *parent) :
    QItemDelegate(parent) // Замість QStyledItemDelegate має бути QItemDelegate
{
}

QSize PhotoDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const {
    return QSize(100, 100);  // Задайте розмір для фото
}

void PhotoDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
    QItemDelegate::paint(painter, option, index);  // Викликаємо базову реалізацію

    // Якщо є фото
    QByteArray photoData = index.data(Qt::UserRole).toByteArray();  // Наприклад, фото з UserRole
    if (!photoData.isEmpty()) {
        QPixmap pixmap;
        pixmap.loadFromData(photoData);
        pixmap = pixmap.scaled(option.rect.size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        painter->drawPixmap(option.rect.topLeft(), pixmap);
    }
}
