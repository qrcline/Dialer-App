#include "myadressbookmodel.h"

MyAdressBookModel::MyAdressBookModel(QObject *parent)
    :QAbstractTableModel (parent)
{

}

int MyAdressBookModel::rowCount(const QModelIndex &parent) const
{
    return 2;
}

int MyAdressBookModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant MyAdressBookModel::data(const QModelIndex &index, int role) const
{

    if(role==Qt::DisplayRole)
    {
        return QString("Row%1,Column%2")
                .arg(index.row())
                .arg(index.column());
    }
    return QVariant();
}
