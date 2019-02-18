#ifndef MYADRESSBOOKMODEL_H
#define MYADRESSBOOKMODEL_H
#include <QAbstractTableModel>
#include <vector>


class MyAdressBookModel: public QAbstractTableModel
{
public:
    MyAdressBookModel(QObject *parent);
    std::vector<QString> firstNames;
    std::vector<QString> lastNames;
    std::vector<QString> phoneNumbers;
    std::vector<QString> firstNameCode;
    std::vector<QString>  lastNameCode;




    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

    void openFile(QString filePOath);
    QString getPhoneNumber(int index);
    QString updateNumber(int button);
    void setNumber(QString number);

    void setFilterString(QString fStr);

    std::vector<int> filteredIndex;

private:
       QString currentNumber="";
       QString nameToCode(QString);

};

#endif // MYADRESSBOOKMODEL_H
