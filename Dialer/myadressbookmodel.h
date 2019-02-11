#ifndef MYADRESSBOOKMODEL_H
#define MYADRESSBOOKMODEL_H
#include <QAbstractTableModel>


class MyAdressBookModel: public QAbstractTableModel
{
public:
    MyAdressBookModel(QObject *parent);

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
};

#endif // MYADRESSBOOKMODEL_H
