#include <QCoreApplication>
#include <QDebug>

void display(QString* value) {
    qInfo() << "The pointer: " << value;
    qInfo() << "The object: " << &value << " A copy of the pointer!!!";
    qInfo() << "The data: " << *value;
    qInfo("");

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan"; //Stack
    QString* description = new QString("Hello World"); //ALWAYS DELETE

    qInfo() << "Name len = " << name.length();
    qInfo() << "Description len = " << description->length();

    display(&name);
    display(description);

    delete description; // = 0;
    display(description);

    return a.exec();
}
