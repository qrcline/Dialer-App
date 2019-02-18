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

void MyAdressBookModel::setNumber(QString numberinput)
{
    //numberinput.remove(3,3);
    //numberinput.remove(7,7);
    numberinput.remove(QChar('-'), Qt::CaseInsensitive);
    std::cout<<"The adress book number is: "<< numberinput.toStdString()<<std::endl;
    currentNumber=numberinput;
}

QString MyAdressBookModel::numberToCode(QString inputNumber)
{
    QString tempCode;
    for (int i=0;i<inputNumber.length();i++)
    {
        switch (inputNumber.toUpper().at(i).toLatin1())
        {
        case 65:
        case 66:
        case 67:{tempCode.append('2');break;}
        case 68:
        case 69:
        case 70:{tempCode.append('3');break;}
        case 71:
        case 72:
        case 73:{tempCode.append('4');break;}
        case 74:
        case 75:
        case 76:{tempCode.append('5');break;}
        case 77:
        case 78:
        case 79:{tempCode.append('6');break;}
        case 80:
        case 81:
        case 82:
        case 83:{tempCode.append('7');break;}
        case 84:
        case 85:
        case 86:{tempCode.append('8');break;}
        case 87:
        case 88:
        case 89:
        case 90:{tempCode.append('9');break;}

        };
    }
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
        for(int i=0; !in.atEnd(); i++)
        {
            QString line=in.readLine();
            QStringList fields= line.split(",");

            if(i==0) continue;

            for(int i=0; i<fields.length();i++)
            {
                std::cout <<"["<<i<<"]"<<fields[i].toStdString();
            }
            std::cout<<std::endl;

            firstNames.push_back(fields[0]);
            lastNames.push_back(fields[1]);
            phoneNumbers.push_back(fields[7]);
        }


    }
        file.close();
        emit layoutChanged();

}

