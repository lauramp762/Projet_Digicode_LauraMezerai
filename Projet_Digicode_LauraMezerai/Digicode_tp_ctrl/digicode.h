#ifndef DIGICODE_H
#define DIGICODE_H


#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class Digicode;
}
QT_END_NAMESPACE

class Digicode : public QWidget
{
    Q_OBJECT

public:
    explicit Digicode(QWidget *parent = nullptr);
    ~Digicode() override;

private slots:
    void onQPushButtonClicked();

private:
    Ui::Digicode *ui;
    const int NB_TOUCHES;
    QGridLayout *grille;
    QLineEdit *afficheur;
    QPushButton **touches;
    QString code;
    QString codeSecret;

};
#endif // DIGICODE_H