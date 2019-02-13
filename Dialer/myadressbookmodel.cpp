#include "myadressbookmodel.h"
#include <QFile>
#include <iostream>
#include <QMessageBox>
#include <QTextStream>

MyAdressBookModel::MyAdressBookModel(QObject *parent)
    :QAbstractTableModel (parent)
{

}

int MyAdressBookModel::rowCount(const QModelIndex &parent) const
{
    return firstNames.size(); //This is the size of the vector
}

int MyAdressBookModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant MyAdressBookModel::data(const QModelIndex &index, int role) const
{

    if(role==Qt::DisplayRole)
    {
        switch(index.column())
        {
        case 0:
            return firstNames.at(index.row());
        case 1:
            return lastNames.at(index.row());
        case 2:
            return phoneNumbers.at(index.row());
        }

//        return QString("Row%1,Column%2")
//                .arg(index.row())
//                .arg(index.column());
    }
    return QVariant();
}

QString MyAdressBookModel::getPhoneNumber(int index)
{
    return phoneNumbers.at(index);
}



QString MyAdressBookModel::updateNumber(int button)
{
    std::cout<<"Button Clicked:"<<button<<std::endl;
    //Adds of subtracts from current number
    if(button>=0 &&currentNumber.length()<=9)
    {
        //currentNumber=currentNumber+button;
        currentNumber.append(QString::number(button));
    }
    else if(button==-1)
    {
       currentNumber.chop(1);
    }
    else
    std::cout<<"The current number is: "<<currentNumber.toStdString()<<std::endl;
    QString numTemp=currentNumber;
    if(currentNumber.length()>3)
        numTemp.insert(3,"-");
    if(currentNumber.length()>7)
        numTemp.insert(7,"-");

    return numTemp;

}

void MyAdressBookModel::openFile(QString filePath)
{
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0,"error",file.errorString());
        return;
    }
    QTextStream in(&file); //Reads in the file

    firstNames.clear();
    lastNames.clear();         //Clears the vectors
    phoneNumbers.clear();

    while(!in.atEnd())
    {
        QString line=in.readLine();
        QStringList fields= line.split(",");

        for(int i=0; i<fields.length();i++)
        {
            std::cout <<"["<<i<<"]"<<fields[i].toStdString();
        }
        std::cout<<std::endl;

        firstNames.push_back(fields[0]);
        lastNames.push_back(fields[1]);
        phoneNumbers.push_back(fields[7]);

    }
        file.close();
        emit layoutChanged();


}
